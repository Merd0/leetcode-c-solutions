# #0071 - Simplify Path

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: String, Stack
- Companies: Not tracked in this repo
- Hint: Split path parts and use a stack for folder names.
- Solved: 2026-05-23
- LeetCode: https://leetcode.com/problems/simplify-path/

## Problem Statement

TR: Unix tarzinda mutlak bir path verilir. `.` mevcut klasor, `..` ust klasor, fazla `/` karakterleri ise tek ayirici gibi davranir. Canonical path dondur.

EN: Given an absolute Unix-style path, simplify it into canonical form where `.` means current directory, `..` moves up, and repeated `/` characters act as one separator.

## Starter Code (C)

```c
char* simplifyPath(char* path) {

}
```

## Parameters

- `path`: Absolute Unix path.

## Return

TR: Canonical hale getirilmis path stringi.

EN: Return the canonical simplified path string.

## Examples

### Example 1

```text
Input: path = "/home/"
Output: "/home"
```

### Example 2

```text
Input: path = "/../"
Output: "/"
```

### Example 3

```text
Input: path = "/home//foo/"
Output: "/home/foo"
```

## Constraints

- `1 <= path.length <= 3000`
- `path` is a valid absolute Unix path.

## Approach

TR: Path'i slash karakterlerine gore parcalari okuyarak gez. Normal klasor adlarini stack'e ekle, `.` icin hicbir sey yapma, `..` icin varsa stack'ten bir klasor sil.

EN: Scan path parts separated by slashes. Push normal folder names, ignore `.`, and pop one folder for `..` when possible.

## Solution

- [solution.c](solution.c)
