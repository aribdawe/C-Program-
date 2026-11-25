#include <stdio.h>

struct student
{
    int roll;
    int m1, m2, m3;
    char name[30];
    int total;
    float per;
};

int main()
{
    int i, n;

    printf("Enter the number of records :\n");
    scanf("%d", &n);

    struct student strarr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the roll number :\n");
        scanf("%d", &strarr[i].roll);
        printf("Enter name :\n");
        scanf("%29s", strarr[i].name);
        printf("Enter the marks in 3 subjects :\n");
        scanf("%d%d%d", &strarr[i].m1, &strarr[i].m2, &strarr[i].m3);
        strarr[i].total = strarr[i].m1 + strarr[i].m2 + strarr[i].m3;
        strarr[i].per = strarr[i].total / 3.0;
    }

    printf("\nroll no |\tname |\tm1 |\tm2 |\tm3 |\ttotal |\tper |\tresult");
    for (i = 0; i < n; i++)
    {
        printf("\n%d", strarr[i].roll);
        printf("\t%s", strarr[i].name);
        printf("\t%d", strarr[i].m1);
        printf("\t%d", strarr[i].m2);
        printf("\t%d", strarr[i].m3);
        printf("\t%d", strarr[i].total);
        printf("\t%.2f", strarr[i].per);
        if (strarr[i].per < 40)
            printf("\tFail");
        else if (strarr[i].per <= 65)
            printf("\tSecond class");
        else if (strarr[i].per <= 80)
            printf("\tFirst class");
        else
            printf("\tDistinction");
    }
    printf("\n");
    return 0;
}
