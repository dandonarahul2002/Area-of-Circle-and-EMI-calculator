/* C program to calculate EMI  */
#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time, emi;
    /* Take inputs */
    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time in year: ");
    scanf("%f", &time);
    /*calculate monthly interest*/
    rate = rate / (12 * 100);
    /*calculate monthly time period*/ 
    time = time * 12; 
    /* Calculate EMI */
    emi = (principal * rate * pow(1 + rate, time)) / (pow(1 + rate, time) - 1);

    printf("Monthly EMI is= %f\n", emi);

    return 0;
}
