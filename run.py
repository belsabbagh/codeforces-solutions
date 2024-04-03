"""This module compiles and runs the cpp solution file for a given codeforces problem id"""
import argparse
import os

ids = {
  i.split("-")[0]: i for i in os.listdir(".") if i.endswith(".cpp")
}

if __name__ == "__main__":
  parser = argparse.ArgumentParser()
  parser.add_argument("problem_id")
  args = parser.parse_args()
  problem_id = args.problem_id
  os.system(f"g++ \"{ids[problem_id]}\" -o build/{problem_id}.out")
  os.system(f"./build/{problem_id}.out")
