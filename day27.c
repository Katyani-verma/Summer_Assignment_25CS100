// Q105: Student Record Management System
// #include <stdio.h>

// struct Student {
//     int rollNo;
//     char name[50];
//     float gpa;
// };
// int main() {
//     int n, i;
//     printf("=== Student Record Management System ===\n");
//     printf("Enter number of students to add: ");
//     scanf("%d", &n);
//     struct Student s[n];

//     // Input records
//     for(i = 0; i < n; i++) {
//         printf("\nEnter details for Student %d:\n", i + 1);
//         printf("Roll Number: ");
//         scanf("%d", &s[i].rollNo);
//         printf("Name: ");
//         scanf(" %[^\n]s", s[i].name); 
//         printf("GPA: ");
//         scanf("%f", &s[i].gpa);
//     }

//     // Display records
//     printf("\n--- Displaying Student Records ---\n");
//     printf("%-10s %-20s %-5s\n", "Roll No", "Name", "GPA");
//     for(i = 0; i < n; i++) {
//         printf("%-10d %-20s %-5.2f\n", s[i].rollNo, s[i].name, s[i].gpa);
//     }
//     return 0;
// }

// Q106: Employee Management System
// #include <stdio.h>
// struct Employee {
//     int empId;
//     char name[50];
//     char dept[30];
// };
// int main() {
//     int n, i;
//     printf("=== Employee Management System ===\n");
//     printf("Enter number of employees: ");
//     scanf("%d", &n);
//     struct Employee e[n];
//     for(i = 0; i < n; i++) {
//         printf("\nEnter details for Employee %d:\n", i + 1);
//         printf("Employee ID: ");
//         scanf("%d", &e[i].empId);
//         printf("Name: ");
//         scanf(" %[^\n]s", e[i].name);
//         printf("Department: ");
//         scanf(" %[^\n]s", e[i].dept);
//     }
//     printf("\n--- Employee Directory ---\n");
//     printf("%-10s %-20s %-20s\n", "Emp ID", "Name", "Department");
//     for(i = 0; i < n; i++) {
//         printf("%-10d %-20s %-20s\n", e[i].empId, e[i].name, e[i].dept);
//     }
//     return 0;
// }

// Q107: Salary Management System
// #include <stdio.h>
// struct Salary {
//     int empId;
//     char name[50];
//     float basic_pay;
//     float hra; // House Rent Allowance
//     float da;  // Dearness Allowance
//     float net_salary;
// };
// int main() {
//     int n, i;
//     printf("=== Salary Management System ===\n");
//     printf("Enter number of employee payrolls to generate: ");
//     scanf("%d", &n);
//     struct Salary s[n];
//     for(i = 0; i < n; i++) {
//         printf("\nEnter details for Employee %d:\n", i + 1);
//         printf("Employee ID: ");
//         scanf("%d", &s[i].empId);
//         printf("Name: ");
//         scanf(" %[^\n]s", s[i].name);
//         printf("Basic Pay: ");
//         scanf("%f", &s[i].basic_pay);

//         // Calculations
//         s[i].hra = s[i].basic_pay * 0.20; // 20% of basic pay
//         s[i].da = s[i].basic_pay * 0.10;  // 10% of basic pay
//         s[i].net_salary = s[i].basic_pay + s[i].hra + s[i].da;
//     }
//     printf("\n--- Payroll Statement ---\n");
//     printf("%-10s %-15s %-12s %-10s %-10s %-12s\n", "Emp ID", "Name", "Basic Pay", "HRA", "DA", "Net Salary");
//     for(i = 0; i < n; i++) {
//         printf("%-10d %-15s %-12.2f %-10.2f %-10.2f %-12.2f\n", 
//                s[i].empId, s[i].name, s[i].basic_pay, s[i].hra, s[i].da, s[i].net_salary);
//     }
//     return 0;
// }

// Q108: Marksheet Generation System
#include <stdio.h>
struct Marksheet {
    int rollNo;
    char name[50];
    float sub1, sub2, sub3;
    float total;
    float percentage;
};
int main() {
    int n, i;
    printf("=== Marksheet Generation System ===\n");
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Marksheet m[n];
    for(i = 0; i < n; i++) {
        printf("\nEnter data for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &m[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]s", m[i].name);
        printf("Enter marks for Subject 1, 2 & 3 (out of 100): ");
        scanf("%f %f %f", &m[i].sub1, &m[i].sub2, &m[i].sub3);

        m[i].total = m[i].sub1 + m[i].sub2 + m[i].sub3;
        m[i].percentage = (m[i].total / 300.0) * 100.0;
    }

    // Print individual marksheets
    for(i = 0; i < n; i++) {
        printf("\n====================================\n");
        printf("            REPORT CARD             \n");
        printf("====================================\n");
        printf("Roll No: %d\tName: %s\n", m[i].rollNo, m[i].name);
        printf("------------------------------------\n");
        printf("Subject 1: %.2f / 100\n", m[i].sub1);
        printf("Subject 2: %.2f / 100\n", m[i].sub2);
        printf("Subject 3: %.2f / 100\n", m[i].sub3);
        printf("------------------------------------\n");
        printf("Total Marks: %.2f / 300\n", m[i].total);
        printf("Percentage : %.2f%%\n", m[i].percentage);
        printf("Result     : %s\n", (m[i].percentage >= 40.0) ? "PASS" : "FAIL");
        printf("====================================\n");
    }
    return 0;
}