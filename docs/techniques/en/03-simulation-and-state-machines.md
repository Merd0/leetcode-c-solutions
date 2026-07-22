# 03 - Simulation And State Machines

[Previous](02-linear-scan-and-indexing.md) | [Contents](README.md) | [Turkce](../tr/03-simulation-and-state-machines.md) | [Next](04-counting-and-frequency-tables.md)

## Mental Model

Simulation turns rules from the statement into executable state transitions. The
goal is not one `if` per sentence. The goal is the smallest state that fully describes
the system, such as `(x, y, direction)` for a robot.

A state machine has a current state, an input event, and a next state. The same
state and event must always produce the same defined transition.

## Store Directions As Data

```c
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int dir = 0;

if (command == 'G') {
    x += dx[dir];
    y += dy[dir];
} else if (command == 'R') {
    dir = (dir + 1) % 4;
} else if (command == 'L') {
    dir = (dir + 3) % 4;
}
```

`dir` selects one movement pair, while modular arithmetic keeps rotations in a
closed four-state cycle.

## Invariant And Step Order

After every command, state must equal the result of applying the entire processed
prefix exactly once. When movement has a tentative target and an obstacle check,
commit the real state only after validation succeeds.

## Combining Techniques

Scanning every obstacle at every step is a correct but slow simulation. A hash set
can accelerate lookup without changing the transition model.

## Cost And C Risks

Time is event count times work per event. Watch negative modulo, invalid commands,
state mutation before validation, and missing string headers.

## Practice In This Repository

[1041 - Robot Bounded in Circle](../../../problems/1041-robot-bounded-in-circle/README.md), [874 - Walking Robot Simulation](../../../problems/0874-walking-robot-simulation/README.md), and [649 - Dota2 Senate](../../../problems/0649-dota2-senate/README.md).

## Systems Bridge

Protocol parsers, device modes, motor commands, and fault handling are explicit
state machines. A vague transition table also produces vague test coverage.

