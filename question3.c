#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int achar = 'a', zchar = 'z';
	char a[10];
	printf("\nInput Characters:");
	for(int i=0; i< 10; i++){
		char tmp;
		scanf(" %c",&tmp);
		a[i] = tmp;
		printf(" ");
		
	}
	for(int i = 0; i<10 ;i++){
		int occurs = 0;
		if(a[i] >= 'a' && a[i] <= 'z'){
			 
			for(int k = 0; k<10; k++){
			if(a[k] == a[i] ){
				occurs++;
				if(occurs > 1){
					a[k] = a [k] + 99;
				}
				
			}
		}

		printf("%c occurs %d times\n", a[i], occurs);
			
		}
	}
	return 0;
}