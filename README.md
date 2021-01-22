# Bad-Luck-Island-DP
An exercise for my Design and Analysis of Algorithms class.  Codeforces - Problem 540D

Problem was solved using Dynamic Programming Algorithm.

### [Problem Link](https://codeforces.com/problemset/problem/540/D)

## Summary:
The Bad Luck Island is inhabited by three kinds of species: r rocks, s scissors and p papers. At some moments of time two random individuals meet (all pairs of individuals can meet equiprobably), and if they belong to different species, then one individual kills the other one: a rock kills scissors, scissors kill paper, and paper kills a rock. Your task is to determine for each species what is the probability that this species will be the only one to inhabit this island after a long enough period of time.

### Input:
The single line contains three integers r, s and p (1 ≤ r, s, p ≤ 100) — the original number of individuals in the species of rock, scissors and paper, respectively.

### Output:
Print three space-separated real numbers: the probabilities, at which the rocks, the scissors and the paper will be the only surviving species, respectively. The answer will be considered correct if the relative or absolute error of each number doesn't exceed 10 - 9.

### Examples:

| Input  |
| ------------- |
| 2 2 2  | 
| Output |
| 0.333333333333 - 0.333333333333 - 0.333333333333 |

| Input  |
| ------------- |
| 2 1 2  | 
| Output |
| 0.150000000000 - 0.300000000000 - 0.550000000000 |

| Input  |
| ------------- |
| 1 1 3  | 
| Output |
| 0.057142857143 - 0.657142857143 - 0.285714285714 |
