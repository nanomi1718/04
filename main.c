#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
int a;
	printf("input the year : ");
	scanf("%d", &a);
	printf(" is the year %d the leap year? : %d\n",a, (a%4 == 0 && a%100!=0) || a%400==0);
	return 0;
}

