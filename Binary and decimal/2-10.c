//by--SUNmode
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int i = 0,j = 0;
int Decimal_number_three;
char Binary[50];
int Binary_number_two[100000];
unsigned long long Decimal_number = 0;


char Binary_fun (unsigned long long Decimal_number){
	unsigned long long Decimal_binary = 0;
	int sum = 0;
	int SUM = 0;
	
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

	for(i = 0,Decimal_binary = Decimal_number;Decimal_binary > 0;i++){
		Binary_number_two [i] = Decimal_binary%2;
		Decimal_binary /= 2;
	}
	printf("you number is %d bit and you binary number is %d bit",sum,SUM);
	printf("\nYou Binary number is:\n",Decimal_number);
	
	return 0;
}

int main(){
	int mode = 0;
	char try = '0'; 
	
	do{
		system("cls");
		printf("Enter you mode(1.10to2/2.2to10/3.Exit):");
		scanf("%d",&mode);
		
		switch(mode){
			case 1:
				do{
					system("cls");
					
					printf("You mode is (10to2)");
					printf("\nEnter your number:");
					scanf("%llu",&Decimal_number);
					fflush(stdin);   //清空输入区缓存
					
					Binary_fun (Decimal_number);	
					for(i -= 1;i >= 0;i--){
						printf("%d",Binary_number_two [i]);
					}
					
					printf("\ntry again? (y or n):");
					
					scanf("%c",&try);
					if(tolower(try) == 'n'){
						break;
					}
				}while(1);	
				break;
			case 2:
				do{
					system("cls");
					
					printf("You mode is (2to10)");
					printf("\nEnter you number(End with a\".\"):");
					scanf("%s",&Binary);
					fflush(stdin);
					
					for(;Binary[j] != '.';j++)
					
					j -= 1;
					
					for(; 0<=j; i++,j--){
						if (Binary[j] != 48){
							Decimal_number_three +=  pow(2,i);
						}
					}
					printf("You number is %d",Decimal_number_three);
					
					printf("try again? (y or n):");
					scanf("%c",&try);
					if(tolower(try) == 'n')
						break;
				}while(1);
				break;
			case 3:
				printf("\nThank you for use :-)");
				return 0;
			default:
				printf("Enter you mode(1~3)");
		}
		
		fflush(stdin);
		printf("Exit? (y or n):");
		scanf("%c",&try);
			if(tolower(try) == 'y')
				break;
	}while(1);

	printf("\nThank you for use :-)");
	return 0;
}