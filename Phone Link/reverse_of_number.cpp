#include<stdio.h>
int main()
{
	int num,rem,add=0,i,j;
	printf("Give the number to check palindrome :");
	scanf("%d",&num);
	for(i=1;num!=0;i++)
	{
		rem=num%10;
		add=add*10;
		add=rem+add;
		num=num/10;
		
		
		
	}
	printf("the reverse of number is :");
	printf("%d",add);
	return 0;
	
}
