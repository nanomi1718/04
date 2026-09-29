#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (void) {
    int year;

    printf("input the year : ");
    scanf("%i", &year);

    printf(" Is the year %i a leap year? : %i\n", year, ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
	
    return 0;
}
