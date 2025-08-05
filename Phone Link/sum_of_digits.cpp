#include<stdio.h>

int main()
{
	int num,sum=0,rem;
	printf("give the num to find the sum of digits : ");
	scanf("%d",&num);
	for(int i=1;num!=0; i++)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
		
	}
	printf("The sum of digits is :%d ",sum);
	
	return 0; 
}
