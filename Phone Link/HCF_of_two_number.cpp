#include<stdio.h>
int main()
{
	int first_num,second_num,min_num,i;
	printf("Give the first number :");
	scanf("%d",&first_num);
	printf("Give the second number : ");
	scanf("%d",&second_num);
	min_num = first_num<second_num? first_num:second_num;
	for(i=min_num;i>0;i--)
	{
		if(first_num%i == 0 && second_num%i == 0 ){
		printf("The HCF of two number is : %d",i);
		break;
	}
	}
	return 0;
}
