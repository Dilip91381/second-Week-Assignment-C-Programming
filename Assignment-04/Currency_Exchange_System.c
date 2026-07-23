#include <stdio.h>

int main() {
    float inr, usd;

    printf("Enter amount in INR: ");
    scanf("%f", &inr);

    usd = inr / 96.36; // Assuming 1 USD = 96.36 INR
    printf("\n----- Currency Conversion -----\n");
    printf("INR : %.2f\n", inr);
    printf("USD : %.2f\n", usd);

    return 0;
}