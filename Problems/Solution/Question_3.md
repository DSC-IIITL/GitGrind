# Santa's Candy Dilemma

## Problem Description

Santa has a certain number of candies and wants to gift them to a group of kids. He has specific conditions to satisfy while distributing the candies. Your task is to determine the maximum number of candies Santa can give to the kids while meeting these conditions.

## Input

The first line of the input contains an integer `t` (1≤t≤5⋅10^4) — the number of test cases.

The next `t` lines describe test cases. Each test case contains two integers `n` and `k` (1≤n,k≤10^9) — the number of candies and the number of kids.

## Output

For each test case, print the answer — the maximum number of candies Santa can give to the kids while satisfying the given conditions.

## Example

**Input:**

```
5
5 2
19 4
12 7
6 2
100000 50010
```


**Output:**

```
5
18
10
6
75015
```

## Explanation

- In the first test case, Santa can give 3 and 2 candies to kids. There a=2,b=3,a+1=3.
- In the second test case, Santa can give 5,5,4, and 4 candies. There a=4,b=5,a+1=5. The answer cannot be greater because then the number of kids with 5 candies will be 3.
- In the third test case, Santa can distribute candies in the following way: [1,2,2,1,1,2,1]. There a=1,b=2,a+1=2. He cannot distribute two remaining candies in a way to be satisfied.
- In the fourth test case, Santa can distribute candies in the following way: [3,3]. There a=3,b=3,a+1=4. Santa distributed all 6 candies.

## Constraints

- 1 ≤ t ≤ 5⋅10^4
- 1 ≤ n, k ≤ 10^9
