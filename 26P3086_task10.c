#include <stdio.h>

int main() {
    float pf_marks = 88.0, pf_credits = 3;
    float calc_marks = 76.5, calc_credits = 3;
    float phy_marks = 82.0, phy_credits = 2;

    float total_score = (pf_marks * pf_credits) + (calc_marks * calc_credits) + (phy_marks * phy_credits);
    float total_credits = pf_credits + calc_credits + phy_credits;
    float weighted_avg = total_score / total_credits;

    printf("================ SEMESTER ACADEMIC REPORT =========================\n");
    printf("Course\t\t\tCredit Hours\tObtained Marks\n");
    printf("--------------------------------------------------------------------\n");
    printf("Programming Fund.\t%.0f\t\t%.2f\n", pf_credits, pf_marks);
    printf("Calculus\t\t%.0f\t\t%.2f\n", calc_credits, calc_marks);
    printf("Applied Physics\t\t%.0f\t\t%.2f\n", phy_credits, phy_marks);
    printf("--------------------------------------------------------------------\n");
    printf("\nTotal Credits: %.0f\tWeighted Average: %.2f%%\n", total_credits, weighted_avg);

    return 0;
}
