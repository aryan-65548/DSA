#include<stdio.h>

struct Employee
{
    int emp_id;
    int salary;
    char name[100];
};

struct Organization
{
    int o_id;
    char o_name[100];
    struct Employee emp[2];
};

int main()
{
    struct Organization org[2];

    for(int i=0; i<2; i++)
    {
        printf("Enter the details of the orgnization %d\n", i+1);

        printf("Enter the Organization ID: ");
        scanf("%d", &org[i].o_id);
        printf("Enter the name Organization: ");
        scanf("%s", org[i].o_name);

        for(int j=0; j<2; j++)
        {
            printf("Enter the details of the Employee %d\n", j+1);

            printf("Enter Employee ID: ");
            scanf("%d", &org[i].emp[j].emp_id);
            printf("Enter Employee Salary: ");
            scanf("%d", &org[i].emp[j].salary);
            printf("Enter Employee name: ");
            scanf("%s", org[i].emp[j].name);
        }
        printf("\n");
    }

    printf("The detail of Organization and Employees are:\n");
    for(int i=0; i<2; i++)
    {
        printf("Organization %d\n", i+1);
        printf("id: %d\n", org[i].o_id);
        printf("Name: %s\n", org[i].o_name);

        for(int j=0; j<2; j++)
        {
        printf("Employee %d\n", j+1);
        printf("id: %d\n", org[i].emp[j].emp_id);
        printf("Salary: %d\n", org[i].emp[j].salary);
        printf("Name: %s\n", org[i].emp[j].name);
        }
        printf("\n");
    }
    return 0;

}

