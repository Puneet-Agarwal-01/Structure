#include<stdio.h>
#include<stdlib.h>
 struct emp
    {
        char empname[25], dep_name[25];
        int empno;
        float salary;
    }e[2];
int main()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("\n Enter Name, Department, Employee No., Salary:");
        scanf("%s %s %d %f",&e[i].empname, &e[i].dep_name, &e[i].empno, &e[i].salary);
    }
    for(i=0;i<2;i++)
    {
        printf("\nEmployee No. %d.\n\tName: %s\n\tDepartment Name: %s\n\tEmployee Number: %d\n\tSalary: %f", i+1, e[i].empname, e[i].dep_name, e[i].empno, e[i].salary);
    }
    return 0;
}
