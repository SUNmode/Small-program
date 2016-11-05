//A given number of decimal conversion become binary
//by - SUNmode
#include <stdio.h>
int main (void){
	unsigned long long Decimal_number = 0;
	unsigned long long Decimal_binary = 0;
	int i = 0;
	int sum = 0;
	int SUM = 0;
	printf("Enter your number:");
	scanf("%llu",&Decimal_number);
	if (Decimal_number <= 0){
		printf("error: number<0 or number=0!!!");
		return 0;
	}
		
	Decimal_binary = Decimal_number;
	
	while(Decimal_binary){
		sum++;
		Decimal_binary /= 10;
	}
	
	Decimal_binary = Decimal_number;
	while(Decimal_binary){
		Decimal_binary /=2;
		SUM++;
		i++;
	}
	
	int Binary_number [i];
	
	for(i = 0,Decimal_binary = Decimal_number;Decimal_binary > 0;i++){
		Binary_number [i] = Decimal_binary%2;
		Decimal_binary /= 2;
	}
	printf("you number is %d bit and you binary number is %d bit",sum,SUM);
	printf("\nYou Binary number is:\n",Decimal_number);
	
	for(i -= 1;i >= 0;i--){
		printf("%d",Binary_number [i]);
	}
	
	printf("\nThank you for use :-)");
	return 0;
}
