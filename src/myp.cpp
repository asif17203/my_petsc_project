#include <petscsys.h>
#include <iostream>

int main(int argc, char **argv) {
    PetscInitialize(&argc, &argv, NULL, NULL);
    std::cout << "Hello, PETSc!" << std::endl;
    PetscFinalize();
    return 0;
}
