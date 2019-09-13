#include <stdio.h> // C Header
#include <stdlib.h> // Memory-proccess control Header
// #pragma warning (disable:4996)

int triangleNumber(int n) // Fundction defined
{
    int tri = 0;
    for (int i = 1; i <= n; i++)
        tri += i;

    return tri;
}

int main(void)
{
    int val1 = 6;
    int val2 = 12;
    printf("The triangle number for %i is %d\n", val1, triangleNumber(val1));

    printf("The triangle number for %i is %d\n", val2, triangleNumber(val2));

    system("pause");
    return 0;
}
