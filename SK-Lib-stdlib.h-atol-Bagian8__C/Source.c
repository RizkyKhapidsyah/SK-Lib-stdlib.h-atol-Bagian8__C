#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    char* str = NULL;
    long    value = 0;

    str = "  -2309 ";
    value = atol(str);
    printf("Function: atol( \"%s\" ) = %d\n", str, value);

    str = "314127.64";
    value = atol(str);
    printf("Function: atol( \"%s\" ) = %d\n", str, value);

    str = "3336402735171707160320";
    value = atol(str);
    printf("Function: atol( \"%s\" ) = %d\n", str, value);

    if (errno == ERANGE) {
        printf("Overflow condition occurred.\n");
    }

    _getch();
    return 0;
}