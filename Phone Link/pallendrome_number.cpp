#include<stdio.h>
int main()
{
	int num,rem,add=0,i,j,check;
	printf("Give the number to check palindrome :");
	scanf("%d",&num);
	check=num;
	for(i=1;num!=0;i++)
	{
		rem=num%10;
		add=add*10;
		add=rem+add;
		num=num/10;
		
		
		
	}
if(check==add)
printf("this number is pallendrome number ");
else
printf("this is not pallendrome number");
	return 0;
	
}
