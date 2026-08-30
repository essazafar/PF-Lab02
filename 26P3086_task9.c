#include <stdio.h>

int main() {
    double basic_salary = 85000.00;

    double hra = 0.20 * basic_salary;   
    double ma = 0.10 * basic_salary;    
    double gross = basic_salary + hra + ma;
    double tax = 0.05 * gross;      
    double net = gross - tax;           

    printf("================ MONTHLY SALARY SLIP ================\n");
    printf("Basic Salary:\t                PKR %.2f\n", basic_salary);
    printf("House Rent Allowance (20%):\tPKR %.2f\n", hra);
    printf("Medical Allowance (10%):\tPKR %.2f\n", ma);
    printf("----------------------------------------------------\n");
    printf("Gross Salary:\t                PKR %.2f\n", gross);
    printf("Tax Deduction (5%%):\t        PKR %.2f\n", tax);
    printf("----------------------------------------------------\n");
    printf("Net Payable Salary:\t        PKR %.2f\n", net);
    printf("=====================================================\n");
    return 0;
}
