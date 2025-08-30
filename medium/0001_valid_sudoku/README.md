# 1. Valid Sudoku

**Difficulty:** Medium  
**Platform:** LeetCode  
**Link:** [Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)  

---

## Problem:
Determine if a 9x9 Sudoku board is valid.  
Rules:
- Each row must contain digits `1–9` without repetition.
- Each column must contain digits `1–9` without repetition.
- Each 3x3 sub-box must contain digits `1–9` without repetition.
- Empty cells are marked with `.` and can be ignored.

---

## Example
**Input:**
[["5","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]

**Output:**
true


---

## Approach
We need to validate **3 constraints**:
1. **Rows** → Each row should have unique digits.  
2. **Columns** → Each column should have unique digits.  
3. **3x3 Sub-grids** → Each 3x3 block should have unique digits.  
For each case we use a `set` to check for duplicates.

---

## Complexity
- **Time Complexity:** O(81) = O(1) (constant work for 9x9 board)  
- **Space Complexity:** O(9) for sets  

---

## Files
- `solution.cpp` → C++ implementation  
- `README.md` → Explanation