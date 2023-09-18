#include <stdlib.h>
#include <stdio.h>
// Defining the inner and outer index of the array.
#define YEARS 5
#define MONTHS 12

int main() {
    printf("This program will output the total amount of rainfall and each month's rainfall amount for the previous 5 years. \n");
    // Creating and initializing a 2D array of 5 rows and 12 columns to serve as YEARS and MONTHS.
    float lastFiveYears [YEARS][MONTHS] = {
        {3.26, 6.11, 4.86, 6.53, 4.45, 3.86, 8.04, 7.59, 1.48, 4.75, 7.27, 11.83},
        {6.23, 4.14, 2.17, 6.34, 2.28, 6.46, 2.06, 1.89, 0.76, 3.59, 2.68, 5.14},
        {8.01, 10.58, 7.45, 4.61, 4.19, 2.64, 2.6, 7.04, 5.67, 8.23, 2.93, 2.29},
        {3.62, 3.71, 3.77, 3.74, 5.15, 6.36, 5.98, 6.96, 3.60, 3.52, 1.16, 6.08},
        {3.37, 5.29, 6.60, 4.37, 2.43, 5.30, 4.17, 6.79, 0.99, 1.71, 4.23, 3.44}
    };
    // Initializing the total sum of rainfall per month each year.
    float total = 0;
    printf("Year     :      Total \n");
    // Loop to print out the Years and the total rainfall of each Year
    for (int i = 0; i < YEARS; i++) {
        float subtotal = 0;
        printf("%d", (2018 + i));
        for(int j = 0; j < MONTHS; j ++) {
            subtotal += lastFiveYears[i][j];
        }
        printf("\t\t%.2f\n", subtotal);
        // Calculating the total rainfall of the 5 years by summing the subtotal at the end of each loop.
        total += subtotal;
    }
    printf("Then the average rainfall of the previous 5 years is: %.2f", total/YEARS);
    printf("\nThe rainfall for each month of the 5 years accordingly: \n");
    printf("\t\tjan \t feb \t mar \t april \t may \t june \t july \t aug \t sep \t oct \t nov \t dec \t \n");
    // Loop to print out the Year and months in a table fashion with each rainfall total per month displayed.
    for (int k = 0; k < YEARS; k++) {
        printf("Year %d \t", 2018 + k);
        for(int l = 0; l < MONTHS; l++) {
            printf("%.2f \t", lastFiveYears[k][l]);
        }
        printf("\n");
    }
    return 0;
}
