# #0649 - Dota2 Senate

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: String, Greedy, Queue
- Hint: Keep the active senator indexes in two queues.
- Solved date: 2026-07-13
- Source: https://leetcode.com/problems/dota2-senate/
- Note: Medium practice question with a queue/scheduler connection

## Problem Statement

TR: `R` ve `D` karakterlerinden olusan bir senate string'i veriliyor. Her turda
sirasi gelen senator karsi takimdan bir senatorun gelecekteki oy hakkini banlar.
En sonda hangi takim kalirsa `"Radiant"` veya `"Dire"` dondur.

EN: Given a senate string containing `R` and `D`, senators act in cyclic order.
Each active senator bans one future senator from the other party. Return the
winning party.

## Starter Code (C)

```c
char* predictPartyVictory(char* senate) {

}
```

## Parameters / Return

- `senate`: String of `R` and `D` senators.
- Returns `"Radiant"` if Radiant wins, otherwise `"Dire"`.

## Examples

```text
Input: senate = "RD"
Output: "Radiant"
```

`R` acts first and bans `D`.

```text
Input: senate = "RDD"
Output: "Dire"
```

The first `R` bans one `D`, but the next `D` bans `R` and Dire wins.

## Constraints

- `1 <= senate.length <= 10^4`
- `senate[i]` is either `R` or `D`.

## Approach

Do not delete characters from the string. Store indexes in two queues:

```text
R queue: indexes of active Radiant senators
D queue: indexes of active Dire senators
```

At every step, compare the front indexes:

```text
smaller index acts first
```

The senator who acts first bans the other one. The winner is still active, so
put that senator back into the queue for the next cycle:

```text
new index = old index + n
```

Adding `n` means "this senator returns after the current round wraps around".

Example:

```text
senate = "RDD"

R queue: 0
D queue: 1, 2

0 < 1, so R bans D at 1 and returns as 0 + 3 = 3.
Then D at 2 acts before R at 3, bans R, and Dire wins.
```

Embedded-C connection: this is close to a small round-robin scheduler or bus
arbitration model. Active actors sit in queues, the earliest actor wins the
current slot, and surviving actors are scheduled into a later cycle.

## Complexity

- Time: `O(n)`
- Space: `O(n)`

## Solution

- [solution.c](solution.c)
