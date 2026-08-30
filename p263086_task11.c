#include <stdio.h>

int main() {
    int tea_qty = 3, samosa_qty = 4, roll_qty = 2;
    double tea_price = 60.00, samosa_price = 40.50, roll_price = 120.00;

    double tea_total = tea_qty * tea_price;
    double samosa_total = samosa_qty * samosa_price;
    double roll_total = roll_qty * roll_price;

    double subtotal = tea_total + samosa_total + roll_total;
    double gst = 0.16 * subtotal;
    double grand_total = subtotal + gst;

    printf("====================== FAST CAFETERIA RECEIPT =============\n\n");
    printf("Item\t\tQty\tUnit Price (PKR)\tSubtotal (PKR)\n");
    printf("------------------------------------------------------------\n");
    printf("Tea\t\t%d\t%.2f\t\t        %.2f\n", tea_qty, tea_price, tea_total);
    printf("Samosa\t\t%d\t%.2f\t\t        %.2f\n", samosa_qty, samosa_price, samosa_total);
    printf("Chicken Roll\t%d\t%.2f\t\t        %.2f\n", roll_qty, roll_price, roll_total);
    printf("------------------------------------------------------------\n");
    printf("\nSubtotal:\t\t\t\tPKR %.2f\n", subtotal);
    printf("GST (16%%):\t\t\t\tPKR %.2f\n", gst);
    printf("Grand Total:\t\t\t\tPKR %.2f\n", grand_total);

    printf("\n================ THANK YOU FOR YOUR VISIT ============\n");

    return 0;
}
