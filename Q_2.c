#include <stdio.h>
int main()
{
    int n, a = 1, fac = 1;
    printf("Enter any number:");
    scanf("%d", &n);

    do
    {

        fac *= a;

        printf("factorial is :%d = %d\n", n, fac, a++);
    } while (a <= n);

    return 0;
}