# 37. Valid Sudoku (Hard)

**Difficulty:** Hard  
**Platform:** LeetCode  
**Link:** [Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)

---

## Problem
Determine if a 9x9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:
- Each row must contain the digits `1–9` without repetition.  
- Each column must contain the digits `1–9` without repetition.  
- Each of the nine 3x3 sub-boxes of the grid must contain the digits `1–9` without repetition.

**Note:**
- A Sudoku board (partially filled) could be valid but not necessarily solvable.  
- Only the filled cells need to be validated according to the rules.

---

### Example 1
**Input:**
[["5","3",".",".","7",".",".",".","."],
["6",".",".","1","9","5",".",".","."],
[".","9","8",".",".",".",".","6","."],
["8",".",".",".","6",".",".",".","3"],
["4",".",".","8",".","3",".",".","1"],
["7",".",".",".","2",".",".",".","6"],
[".","6",".",".",".",".","2","8","."],
[".",".",".","4","1","9",".",".","5"],
[".",".",".",".","8",".",".","7","9"]]

**Output:**
true

---

**Explanation:** Same as Example 1 except the top-left cell changed from `5` to `8`. That introduces two `8`s in the top-left 3×3 sub-box, so the board is invalid.

---

## Approach
We need to validate three constraints:
1. **Rows** — Each row should contain unique digits.  
2. **Columns** — Each column should contain unique digits.  
3. **3×3 sub-grids** — Each 3×3 block should contain unique digits.
A straightforward solution uses hash sets: for each row/column/block, use an `unordered_set<char>` to detect duplicates.  
You can also do a single-pass solution using three arrays of sets (or bitmasks) — `rows[9], cols[9], boxes[9]` — and check/inset while iterating the board once.

**Single-pass steps**
- For each cell `(i, j)`:
  - If cell is `.`, continue.
  - Compute box index `b = (i/3)*3 + (j/3)`.
  - If the number already exists in `rows[i]` or `cols[j]` or `boxes[b]`, return `false`.
  - Otherwise insert into all three.
- If no conflicts, return `true`.

---

## Complexity
- **Time:** O(81) = O(1) for a fixed 9×9 board (or O(n²) for general n×n).  
- **Space:** O(1) (small fixed-size sets), or O(n) per row/col/box in general terms.

---

## Files
- `solution.cpp` — C++ implementation  
- `README.md` — Problem statement + explanation