#include <stdio.h>

int main() {
    float milk, bread, rice;
    float subtotal, gst, final_bill;

    // Accept prices of three products
    printf("Enter price of Milk: ");
    scanf("%f", &milk);

    printf("Enter price of Bread: ");
    scanf("%f", &bread);

    printf("Enter price of Rice: ");
    scanf("%f", &rice);

    // Calculate subtotal, GST (18%), and final bill
    subtotal = milk + bread + rice;
    gst = subtotal * 0.18;
    final_bill = subtotal + gst;

    // Display the formatted output
    printf("\n--- Final Bill ---\n");
    printf("Subtotal: %.0f\n", subtotal);
    printf("GST (18%%): %.2f\n", gst);
    printf("Final Bill: %.2f\n", final_bill);

    return 0;
}