#include <string.h>
#include <stdio.h>
struct student
{
    int rollno;
    char name[10];
    int m1, m2, m3, total;
    float per;
};
int main()
{
    int i;
    struct student st[5];
    printf("Enter Records of 2 students");
    for (i = 0; i < 2; i++)
    {
        printf("Enter Rollno:");
        scanf("%d", &st[i].rollno);
        printf("Enter Name:");
        scanf("%s", &st[i].name);
        printf("Enter m1:");
        scanf("%d", &st[i].m1);
        printf("Enter m2:");
        scanf("%d", &st[i].m2);
        printf("Enter m3:");
        scanf("%d", &st[i].m3);
    }
    printf("\nStudent Information List:");
    for (i = 0; i < 2; i++)
    {
        st[i].total = st[i].m1 + st[i].m2 + st[i].m3;
        st[i].per = st[i].total / 3;
        printf("\nRollno :%d\nName:%s", st[i].rollno, st[i].name);
        printf("\nTotal :%d\nPercentage:%f", st[i].total, st[i].per);
    }
    return 0;
}