#include<stdio.h>
int main    ()
{
	int number;
	printf("Enter a number");
	scanf("%d",&number);
	if((number%5 == 0)&&(number%11 == 0))
	{
		printf("The number is devided by 5& 11");
	}
	else{
		printf("The number is not devided by 5&11");
	}

	return 0;
	}
