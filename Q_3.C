#include <stdio.h>
int main()
{
    int size, max;
    printf("Enter Array Size :");
    scanf("%d", &size);
    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter Array Elements :");
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; i++)
    {

        if (array[i] > max)
        {
            max = array[i];       
        }
    }
    printf("%d is large Element\n", max);
}