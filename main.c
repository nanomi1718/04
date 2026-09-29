#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (void) {
    int sec;
    printf("input the second : ");
    scanf("%i", &sec);

    printf(" Time is %i:%i\n", sec/60 , sec%60);
	
    return 0;
}
