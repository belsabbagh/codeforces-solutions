#!/usr/bin/env python3
"""This script generates the cpp solution file for a given codeforces problem id"""

import argparse
import os
import bs4
import requests
import textwrap

def get_html_content(problem_id):
    url = (
        f"https://codeforces.com/problemset/problem/{problem_id[:-1]}/{problem_id[-1]}"
    )
    html_content = requests.get(url).text
    return html_content


def get_problem_title(html):
    soup = bs4.BeautifulSoup(html, "html.parser")
    problem = soup.find("div", class_="title")
    if problem is None:
        return None
    return problem.text.strip()


def get_problem_statement(html):
    soup = bs4.BeautifulSoup(html, "html.parser")
    problem = soup.find("div", class_="problem-statement")
    if not isinstance(problem, bs4.element.Tag):
        return None
    divs = problem.find_all("div", class_=lambda x: x != "header", recursive=False)
    statement = "\n\n".join(div.get_text(separator="\n",strip=True) for div in divs)
    return statement.replace("$$$", "$")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("problem_id", help="Codeforces problem ID")
    args = parser.parse_args()

    problem_id = args.problem_id
    html_content = get_html_content(problem_id)
    problem_title = get_problem_title(html_content)
    if problem_title is None:
        print("Problem title not found")
        return
    statement = get_problem_statement(html_content)
    if statement is None:
        print("Problem statement not found")
        return
    statement_lines = textwrap.wrap(statement, 80)
    problem_filename = f"{problem_id}-{problem_title[3:]}"
    filepath = f"{problem_filename.replace(':', '-')}.cpp"

    if os.path.exists(filepath):
        print("A solution already exists for this problem")
        return

    with open(filepath, "w") as f:
        f.write(
            f"""/* Problem: {problem_title}\n\n{"\n".join(statement_lines)}*/
#include<iostream>
using namespace std;
int main(){{
  return 0;
}}
"""
        )

    print("Solution file created:", filepath)


if __name__ == "__main__":
    main()
