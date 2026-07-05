# #1472 - Design Browser History

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Design, Array, Stateful API, Indexing
- Hint: Store the current page index. `current` is not the page string itself.
- Solved date: 2026-07-05
- Source: https://leetcode.com/problems/design-browser-history/

## Problem Statement

TR: Bir tarayici gecmisi tasarla. Yeni sayfa ziyaret edilebilir, gecmiste geri
gidilebilir ve geri gidildikten sonra tekrar ileri gidilebilir.

EN: Design a browser-history object that supports visiting a new page, moving
backward, and moving forward through the valid history.

## Starter Code (C)

```c
typedef struct {

} BrowserHistory;

BrowserHistory* browserHistoryCreate(char* homepage) {

}

void browserHistoryVisit(BrowserHistory* obj, char* url) {

}

char* browserHistoryBack(BrowserHistory* obj, int steps) {

}

char* browserHistoryForward(BrowserHistory* obj, int steps) {

}

void browserHistoryFree(BrowserHistory* obj) {

}
```

## Parameters / Return

- `homepage`: Initial page stored at history index `0`.
- `url`: New page visited by `visit`.
- `steps`: How many pages to move backward or forward.
- `back` / `forward`: Return the current page after movement.

## Example

```text
Input:
["BrowserHistory","visit","visit","visit","back","back","forward","visit","forward","back","back"]
[["leetcode.com"],["google.com"],["facebook.com"],["youtube.com"],[1],[1],[1],["linkedin.com"],[2],[2],[7]]

Output:
[null,null,null,null,"facebook.com","google.com","facebook.com",null,"linkedin.com","google.com","leetcode.com"]
```

## Constraints

- `1 <= homepage.length <= 20`
- `1 <= url.length <= 20`
- `1 <= steps <= 100`
- At most `5000` calls are made to `visit`, `back`, and `forward`

## Approach

Store the history in an array and keep two integer fields:

```c
typedef struct {
    char* history[5001];
    int current;
    int size;
} BrowserHistory;
```

Important mental model:

```text
history -> page strings
current -> current page index
size    -> number of valid history entries
```

`current` is not a `char*`. It is the index of the current page. To return the
page, use:

```c
return obj->history[obj->current];
```

When visiting a new page:

1. Move `current` one step forward.
2. Store the new URL at that index.
3. Set `size = current + 1`.

The last step deletes the forward history. For example:

```text
A -> B -> C
back to B
visit D
```

Now the valid history is:

```text
A -> B -> D
```

`C` must not be reachable by `forward` anymore.

## Complexity

- `visit`: `O(1)`
- `back`: `O(1)`
- `forward`: `O(1)`
- Space: `O(n)`

## Solution

- [solution.c](solution.c)
