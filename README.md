# LeetCode C Solutions

This repository is a personal archive of LeetCode solutions written in C.

The goal is to keep solved problems in a clean, repeatable format: each problem
has a LeetCode-style short explanation, examples, constraints, the C starter
signature, approach notes, and the submitted C solution.

## Snapshot

| Item | Status |
|------|--------|
| Language | C |
| First 100 C-focused roadmap | Complete |
| Archived problems | 235 solved: 100 roadmap problems + 72 daily extras + 39 embedded essentials + 10 matrix essentials + 14 data structure design essentials |
| Open learning attempts | 1 TLE attempt archived for later study |
| Main solution format | `README.md` + `solution.c` per problem |

## Navigation

- First 100 roadmap: [ROADMAP.md](ROADMAP.md)
- Full solved-problems table: [docs/SOLVED_PROBLEMS.md](docs/SOLVED_PROBLEMS.md)
- Problem folders: [problems/](problems)
- Unsolved attempts and learning notes: [attempts/](attempts)

## Structure

```text
problems/
  0001-two-sum/
    README.md
    solution.c
attempts/
  3691-maximum-total-subarray-value-ii/
    README.md
    attempt.c
docs/
  SOLVED_PROBLEMS.md
ROADMAP.md
README.md
```

Each problem folder uses the original LeetCode number in the folder name and
the page title, for example `#0001 - Two Sum`.

## Problem Page Format

Each problem `README.md` should contain:

- LeetCode Style Info: status, difficulty, topics, hint, solved date, source.
- Problem Statement: short TR/EN version of what the question asks.
- Starter Code (C): LeetCode-style C function signature.
- Parameters / Return: what each input and output means.
- Examples: input/output samples with short explanations.
- Constraints: key limits from the problem.
- Approach: the core idea behind the solution.

Official LeetCode statements are not copied verbatim; pages are written in
short original wording while staying close enough for revision.

## Add New Solved Problem

1. Create a folder under `problems/` with the LeetCode number and slug.
2. Add a short `README.md` with TR/EN summary, date, topics, examples, and idea.
3. Add `solution.c` with the LeetCode-style function and short comments.
4. Add the problem to [docs/SOLVED_PROBLEMS.md](docs/SOLVED_PROBLEMS.md).
5. Update [ROADMAP.md](ROADMAP.md) if the problem belongs to the planned roadmap.

## Archive an Unsolved Attempt

1. Create a folder under `attempts/` with the problem number and slug.
2. Preserve the attempted code without presenting it as an accepted solution.
3. Record the failure reason, complexity, and knowledge needed before retrying.
4. Do not include the attempt in the solved-problem count.
