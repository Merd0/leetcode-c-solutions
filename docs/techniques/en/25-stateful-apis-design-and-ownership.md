# 25 - Stateful APIs, Design, And Ownership

[Previous](24-streams-and-iterators.md) | [Contents](README.md) | [Turkce](../tr/25-stateful-apis-design-and-ownership.md) | [Next](26-linked-list-rewiring.md)

## Mental Model

A design problem is an object with a lifetime, not one function. `create` establishes
the invariant, operations preserve it, and `free` releases every owned resource
exactly once.

Pointer meaning and memory ownership are both part of API correctness.

## Object Invariant

```c
typedef struct {
    int *data;
    int size;
    int capacity;
} Object;
```

For a valid object, `0 <= size <= capacity`, `data` provides capacity elements, and
the object owns that allocation. Every public operation restores these conditions.

## Creation And Failure Paths

Construct in steps. If a later allocation fails, release earlier allocations and
return `NULL`; never expose a partially built object.

```c
Object *obj = malloc(sizeof(*obj));
if (obj == NULL) return NULL;
obj->data = malloc(capacity * sizeof(*obj->data));
if (obj->data == NULL) {
    free(obj);
    return NULL;
}
```

## Interactive APIs

External functions such as `guess()` provide information but do not own your state.
Call count and return semantics belong to the algorithm contract and can be mocked
for isolated tests.

## When To Keep It Simpler

A one-call problem may not need an object. When calls share state, globals damage
reentrancy, multiple-instance support, and test isolation.

## C Risks

Shallow copies, double free, dangling pointers, mixing capacity with size, and
allocating `sizeof(pointer)` instead of element storage are primary failures.

## Practice In This Repository

[155 - Min Stack](../../../problems/0155-min-stack/README.md), [622 - Circular Queue](../../../problems/0622-design-circular-queue/README.md), [1381 - Stack With Increment](../../../problems/1381-design-a-stack-with-increment-operation/README.md), and [1472 - Browser History](../../../problems/1472-design-browser-history/README.md).

## Systems Bridge

Driver contexts, peripheral handles, and communication sessions share the same
create/use/destroy lifecycle. Ownership should be readable from the API itself.

