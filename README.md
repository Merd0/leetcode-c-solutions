# LeetCode C Solutions

English | [Türkçe](README_TR.md)

A structured C problem-solving archive that turns language foundations into repeatable algorithm, data-structure, and embedded-oriented practice.

[Follow The First 100](docs/LEARNING_ROADMAP.md) | [Learn Techniques](docs/techniques/en/README.md) | [Browse All Solutions](docs/PROBLEM_INDEX.md) | [Browse By Topic](docs/TOPIC_INDEX.md) | [Explore Practice Tracks](docs/PRACTICE_TRACKS.md) | [View Attempts](docs/ATTEMPTS.md) | [Türkçe](README_TR.md)

## Current Snapshot

<!-- snapshot:start -->
| Item | Current value |
| --- | ---: |
| Accepted solutions | 248 |
| Easy / Medium / Hard | 145 / 99 / 4 |
| First 100 roadmap | 100 accepted |
| Focused practice tracks | 3 |
| Open attempts | 1 |
| Primary language | C |
<!-- snapshot:end -->

This block is maintained by `scripts/generate_indexes.py` from problem metadata and repository contents.

## Start Here

- New to the archive: follow the completed [First 100 learning roadmap](docs/LEARNING_ROADMAP.md) in order.
- Learning why and when an algorithm works: open the [problem-solving technique guide](docs/techniques/en/README.md).
- Looking for one solution: search the generated [problem index](docs/PROBLEM_INDEX.md).
- Revising a technique: use the generated [topic index](docs/TOPIC_INDEX.md).
- Preparing for embedded or electro-optical work: use the [focused practice tracks](docs/PRACTICE_TRACKS.md).
- Returning to an unfinished idea: open [attempts and learning notes](docs/ATTEMPTS.md).

## Browse By Purpose

| Goal | Document |
| --- | --- |
| Build algorithm fundamentals in sequence | [Learning roadmap](docs/LEARNING_ROADMAP.md) |
| Learn recognition signals, invariants, C patterns, and failure cases | [Technique guide](docs/techniques/en/README.md) |
| Find every accepted solution | [Problem index](docs/PROBLEM_INDEX.md) |
| Find stack, bitwise, matrix, linked-list, or window problems | [Topic index](docs/TOPIC_INDEX.md) |
| Follow embedded, matrix, or data-structure design blocks | [Practice tracks](docs/PRACTICE_TRACKS.md) |
| Review a failed approach without counting it as solved | [Attempts](docs/ATTEMPTS.md) |
| Add a solution without breaking indexes | [Adding a problem](docs/ADDING_A_PROBLEM.md) |

## Technique Guide

The [problem-solving technique guide](docs/techniques/en/README.md) separates the repository's recurring reasoning patterns into 35 theory-first chapters. Every chapter develops the mental model, invariant, correctness argument, selection boundaries, C risks, accepted-problem progression, and embedded or electro-optical connection. The [Turkish edition](docs/techniques/tr/README.md) follows the same chapter numbers and learning order.

## Learning Roadmap

The [First 100 roadmap](docs/LEARNING_ROADMAP.md) moves through arrays, strings, two pointers, stacks, linked lists, binary search, hashing, sliding windows, and a first tree/recursion step. It contains only the learning sequence; daily additions and focused tracks live elsewhere.

## Practice Tracks

The [practice track guide](docs/PRACTICE_TRACKS.md) contains three ordered blocks:

- Bitwise / Embedded Essentials
- Matrix / 2D Array Essentials
- Data Structure Design Essentials

Each track states its prerequisite, purpose, C-specific skills, and recommended problem order.

## Problem Archive

Every accepted problem lives under `problems/<number>-<slug>/`:

```text
problems/
  0036-valid-sudoku/
    README.md
    solution.c
```

Some folders also keep a meaningful alternative such as a brute-force baseline or a second accepted approach. The problem README owns metadata, the short bilingual summary, reasoning, complexity notes when verified, and links back to the repository indexes.

## Attempts

Unaccepted work stays under `attempts/` and is never included in accepted counts. [ATTEMPTS.md](docs/ATTEMPTS.md) records the result, why the approach failed, what knowledge is missing, and a concrete retry direction.

## C Learning Focus

The archive pays special attention to C concerns that are easy to hide in higher-level languages:

- pointer and pointer-to-pointer parameters
- `returnSize` and `returnColumnSizes`
- heap allocation and caller ownership
- in-place buffers and null termination
- linked-node lifetime and explicit cleanup
- integer overflow, masks, shifts, and fixed-width reasoning
- circular indexing, stateful structs, and API lifecycle

These notes are included only where they are relevant to the submitted solution.

## Add A Problem

Create the numbered folder, add `README.md` and `solution.c`, then run:

```sh
python3 scripts/generate_indexes.py
python3 scripts/generate_indexes.py --check
```

On Windows, `py -3` can be used instead of `python3`. The script validates folder names, required files, duplicate numbers, metadata, attempts, generated indexes, snapshot values, encoding, and relative Markdown links. It does not claim that every LeetCode function is a standalone executable.

## Repository Validation

GitHub Actions checks documentation and repository structure, metadata and generated-index consistency, and internal links and encoding. It regenerates the indexes and fails if that process leaves an uncommitted diff. LeetCode entry-point functions are intentionally not treated as standalone executables.

## C Foundations

This repository is the practice half of a larger learning system. Use [Merd0/c-systems-foundation](https://github.com/Merd0/c-systems-foundation) when a solution exposes a language gap:

- [Pointers](https://github.com/Merd0/c-systems-foundation/tree/main/en/pointers)
- [Memory and ownership](https://github.com/Merd0/c-systems-foundation/tree/main/en/memory_management)
- [Data structures](https://github.com/Merd0/c-systems-foundation/tree/main/en/data_structures)
- [Bitwise foundations](https://github.com/Merd0/c-systems-foundation/tree/main/en/bitwise)
- [Turkish LeetCode bridge](https://github.com/Merd0/c-systems-foundation/blob/main/tr/notes/leetcode_bridge.md)

## Project Status

This is an ongoing personal learning archive. Accepted solutions, attempts, explanations, and focused tracks continue to grow; generated indexes and CI keep the navigation honest.
