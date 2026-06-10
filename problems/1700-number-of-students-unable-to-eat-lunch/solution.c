int countStudents(int* students,
                  int studentsSize,
                  int* sandwiches,
                  int sandwichesSize)
{
    int studentZero = 0;
    int studentOne = 0;

    for (int i = 0; i < studentsSize; i++) {
        if (students[i] == 0) {
            studentZero++;
        } else {
            studentOne++;
        }
    }

    for (int i = 0; i < sandwichesSize; i++) {
        if (sandwiches[i] == 0) {
            if (studentZero == 0) {
                break;
            }
            studentZero--;
        } else {
            if (studentOne == 0) {
                break;
            }
            studentOne--;
        }
    }

    return studentZero + studentOne;
}
