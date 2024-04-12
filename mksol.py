"""This module generates the cpp solution file for a given codeforces problem id"""
import argparse
import os
import bs4
import requests
parser = argparse.ArgumentParser()
parser.add_argument("problem_id")


def get_problem(problem_id):
  prob_num, prob_letter = problem_id[:-1], problem_id[-1]
  url = f"https://codeforces.com/problemset/problem/{prob_num}/{prob_letter}"
  r = requests.get(url)
  soup = bs4.BeautifulSoup(r.text, "html.parser")
  problem = soup.find("div", class_="title")
  if problem is None:
    return None
  return {
    "id": problem_id,
    "title": problem.text.strip(),
  }

if __name__ == "__main__":
  args = parser.parse_args()
  problem_id = args.problem_id
  prob_num, prob_letter = problem_id[:-1], problem_id[-1]
  problem = get_problem(problem_id)
  if problem is None:
    print("Problem not found")
    exit(1)
  filepath = f"{problem_id}-{problem['title'][3:].replace(':', '')}.cpp"
  if os.path.exists(filepath):
    print("A solution already exists to this problem")
    exit(0)
  with open(filepath, "w") as f:
    f.write("""#include<iostream>
using namespace std;
int main(){
    return 0;
}""")
