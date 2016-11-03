#include <stdio.h>
#include <math.h>

int main (void){
	char Binary[50];
	int Decimal_number = 0;
	int i = 0,j = 0;
	
	printf("Enter you number:");
	scanf("%s",&Binary);
	for(;Binary[j] != '.';j++){
	}
	
	j -= 1;
	for(; 0<=j; i++,j--){
		if (Binary[j] != 48){
			Decimal_number = Decimal_number + pow(2,i);
		}
	}
	printf("\nYou number is %d",Decimal_number);

	return 0;
}


