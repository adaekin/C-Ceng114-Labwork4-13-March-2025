#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arraysize, max, secmax = 0;
	printf("\nInput array size:");
	scanf("%d", &arraysize);
	int a[arraysize];
	printf("\nInput numbers:");
	for(int i=0; i< arraysize; i++){
		int tmp;
		scanf("%d",&tmp);
		a[i] = tmp;
		printf(" ");
	}
	max = a[0];
	for(int i = 1; i<arraysize; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	for(int i = 0; i <arraysize; i++){
		if(a[i] < max && a[i] > secmax){
			secmax = a[i];
		}
	}
	printf("Largest number: %d ,Second Largest Number: %d", max,secmax);
	return 0;
}