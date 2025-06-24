#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[10], sum = 0,avg, sizecount = 0;
	int b[10];
	printf("\nInput numbers:");
	for(int i=0; i< 10; i++){
		int tmp;
		scanf("%d",&tmp);
		a[i] = tmp;
		sum += tmp;
		printf(" ");
	}
	avg = sum/10;
	for(int i = 0; i<10; i++){
		if(a[i] > avg){
			b[sizecount] = a[i];
			sizecount++;
			
			
		}
	}
	for(int i = 0; i<sizecount; i++){
		printf("%d ",b[i]);
	}
	return 0;
}