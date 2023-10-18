# Grass Cutting

## Problem Description

You are given a field of size 2×2. Each cell of this field can either contain grass or be empty. The value \(a{i,j}\) is 1 if the cell \((i,j)\) contains grass, or 0 otherwise. In one move, you can choose one row and one column and cut all the grass in this row and this column. In other words, you choose the row \(x\) and the column \(y\), then you cut the grass in all cells \(a{x,i}\) and all cells \(a{i,y}\) for all \(i\) from 1 to 2. After you cut the grass from a cell, it becomes empty (i.e. its value is replaced by 0).

Your task is to find the minimum number of moves required to cut the grass in all non-empty cells of the field (i.e. make all \(a{i,j}\) zeros).

## Input

The first line of the input contains one integer `t(1 <= t <= 16)` — the number of test cases. Then \(t\) test cases follow.

The test case consists of two lines, each of these lines contains two integers. The \(j\)-th integer in the \(i\)-th row is \(a{i,j}\). If \(a{i,j} = 0\) then the cell \((i,j)\) is empty, and if \(a{i,j} = 1\) the cell \((i,j)\) contains grass.

## Output

For each test case, print one integer - the minimum number of moves required to cut the grass in all non-empty cells of the field (i.e. make all \(a{i,j}\) zeros) in the corresponding test case.

## Example

### Input

```
3
0 0
0 0
1 0
0 1
1 1
1 1
```

### Output

```
0
1
2
```

## Constraints

- \(1 <= t <= 16\)
- \(a{i,j} ∈ \{0,1\}\)