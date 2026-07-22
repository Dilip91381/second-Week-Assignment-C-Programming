#include <stdio.h>

int main() {
    float basicSalary, hra, da, netSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    hra = basicSalary * 0.20;
    da = basicSalary * 0.40;
    netSalary = basicSalary + hra + da;

    printf("\n----- Salary Details -----\n");
    printf("Basic Salary : %.2f\n", basicSalary);
    printf("HRA (20%%)    : %.2f\n", hra);
    printf("DA (40%%)     : %.2f\n", da);
    printf("Net Salary   : %.2f\n", netSalary);

    return 0;
}