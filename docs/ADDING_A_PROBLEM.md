# Adding A Problem

[Repository home](../README.md) | [Problem index](PROBLEM_INDEX.md) | [Practice tracks](PRACTICE_TRACKS.md)

## Accepted Solution

1. Create `problems/<four-digit-number>-<lowercase-kebab-slug>/`.
2. Add `README.md` and `solution.c`.
3. Keep the official statement out of the repository; write a short original TR/EN summary.
4. Use the metadata fields below exactly so indexes remain parseable.
5. Add extra solution files only when they teach a meaningful comparison.
6. Run the generator and validation commands.

```markdown
# #0036 - Valid Sudoku

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Hash Table, Matrix
- Hint: Validate rows, columns, and 3x3 boxes with fixed frequency arrays.
- Solved date: 2026-07-11
- Source: https://leetcode.com/problems/valid-sudoku/
```

After metadata, include the short problem summary, C function signature, parameters and return ownership when relevant, examples, important constraints, approach, verified complexity, C-specific notes, and solution links. The generator normalizes `Source` to the canonical URL derived from the folder slug and maintains the shared footer with a direct `solution.c` link.

## Attempt

Use `attempts/<number>-<slug>/README.md` plus `attempt.c`. Record the result, failure reason, current complexity, missing knowledge, and retry direction. Attempts never enter the accepted index.

## Generate And Validate

```sh
python3 scripts/generate_indexes.py
python3 scripts/generate_indexes.py --check
```

The first command normalizes problem metadata/navigation and regenerates the problem index, topic index, and root snapshot. The second command is read-only and fails when generated files, links, encoding, folders, or metadata are stale.
