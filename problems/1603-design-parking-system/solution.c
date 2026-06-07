#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int big;
    int medium;
    int small;
} ParkingSystem;

ParkingSystem* parkingSystemCreate(int big, int medium, int small) {
    ParkingSystem* obj = malloc(sizeof(ParkingSystem));

    obj->big = big;
    obj->medium = medium;
    obj->small = small;

    return obj;
}

bool parkingSystemAddCar(ParkingSystem* obj, int carType) {
    if (carType == 1) {
        if (obj->big > 0) {
            obj->big--;
            return true;
        }
        return false;
    }

    if (carType == 2) {
        if (obj->medium > 0) {
            obj->medium--;
            return true;
        }
        return false;
    }

    if (carType == 3) {
        if (obj->small > 0) {
            obj->small--;
            return true;
        }
        return false;
    }

    return false;
}

void parkingSystemFree(ParkingSystem* obj) {
    free(obj);
}
