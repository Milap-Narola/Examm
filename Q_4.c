#include <stdio.h>
#include <string.h>
struct Student
{
    char name[50];
    int id;
    char Physics[20];
    char Biology[20];
};

int main()
{
    int n;
    printf("Enter Student Number:");
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter name of student : );
        scanf("%s", students[i].name);

        printf("Enter ID of student %d: ");
        scanf("%d", &students[i].id);
        fflush(stdin);
        printf("Enter first subject marks %d: ");
        scanf("%s", students[i].Physics);

        printf("Enter second subject marks %d: ");
        scanf("%s", students[i].Biology);

        printf("\n\n");
    }
    printf("\n\nStudent Information:\n");
    printf("Name\tid\tphysics\tbiology\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%d\t%s\t%s\n", students[i].name, students[i].id, students[i].Biology, students[i].Physics);
    }

    return 0;
}
