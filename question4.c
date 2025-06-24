#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int inparray[10],odd[10], even[10], evencount=0, oddcount=0;
	printf("\nInput Characters:");
	for(int i = 0; i < 10; i++){
		int tmp;
		scanf("%d", &tmp);
		inparray[i] = tmp;
	}
	for(int i = 0; i <10; i++){
		if(inparray[i] % 2 == 1){
			odd[oddcount] = inparray[i];
			oddcount++;
			
		}
		else{
			even[evencount]= inparray[i];
			evencount++;
		}
	}
	printf("\nEven Array:");
	for(int i = 0; i < evencount; i++){
		printf("%d ", even[i]);
	}
	printf("\nOdd Array:");
	for(int i = 0; i < oddcount; i++){
		printf("%d ",odd[i]);
	}
	return 0;
}