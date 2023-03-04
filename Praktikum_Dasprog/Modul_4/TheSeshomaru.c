#include <stdio.h>

int main()
{
    struct manager
    {
        char mng_name[101];
        int mng_age;
    };
    int n_manager;
    scanf("%d", &n_manager);
    struct manager ar_mng[n_manager];
    for(int i=0;i<n_manager;i++)
    {
        scanf("%s", ar_mng[i].mng_name);
        scanf("%d", &ar_mng[i].mng_age);
    }
    struct employee
    {
        char emp_name[101];
        int emp_age;
        double emp_salary;
    };
    int m_employee;
    scanf("%d", &m_employee);
    struct employee ar_emp[m_employee];
    for(int i=0;i<m_employee;i++)
    {
        scanf("%s", ar_emp[i].emp_name);
        scanf("%d", &ar_emp[i].emp_age);
        scanf("%lf", &ar_emp[i].emp_salary);
    }
    int j =0;
    for(int i=0,j=0;i<m_employee;i++,j++)
    {
        printf("=================\n");
        printf("Name: %s\n", ar_emp[i].emp_name);
        printf("Age: %d years old\n", ar_emp[i].emp_age);
        printf("Salary: $%.2f\n", ar_emp[i].emp_salary);
        if(j>=n_manager)
            j=0;
        printf("Manager: %s, %d years old\n", ar_mng[j].mng_name, ar_mng[j].mng_age);
        printf("=================\n");
    }
        
    return 0;
}

