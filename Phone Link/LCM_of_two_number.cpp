#include<stdio.h>
int main()
{
	int first_number,second_number,max_num,i,product;
	printf("Give the first number :");
	scanf("%d",&first_number);
	printf("Give the second number : ");
	scanf("%d",&second_number);
	max_num = first_number>second_number?first_number:second_number;
	product = first_number*second_number;
	for(i=max_num;i<=product;i++)
{
	if(i%first_number==0 && i%second_number==0)
	{
		printf("The LCM  of the numbers is : %d", i);
		break;
	}
}return 0;

}
