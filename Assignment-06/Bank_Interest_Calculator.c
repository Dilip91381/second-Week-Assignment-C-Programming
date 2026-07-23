#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (Years): ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;

    printf("\n----- Bank Interest -----\n");
    printf("Principal : %.2f\n", principal);
    printf("Rate      : %.2f%%\n", rate);
    printf("Time      : %.2f Years\n", time);
    printf("Interest  : %.2f\n", interest);

    return 0;
}
