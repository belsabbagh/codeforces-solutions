"""This module generates the cpp solution file for a given codeforces problem id"""

import argparse
import os
import bs4
import requests

parser = argparse.ArgumentParser()
parser.add_argument("html_string")


def get_problem_title(html):
    soup = bs4.BeautifulSoup(html, "html.parser")
    problem = soup.find("div", class_="title")
    if problem is None:
        return None
    return problem.text.strip()


if __name__ == "__main__":
    args = parser.parse_args()

    html = args.html_string
    title = get_problem_title(html)
    print(title)
