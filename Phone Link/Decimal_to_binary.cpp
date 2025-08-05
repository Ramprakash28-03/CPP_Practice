
	
	#include<stdio.h>
int main ()
   {   int i,rem[100],num;
	printf("Give the number to find its binary :");
	scanf("%d",&num);
	for(i=1;num>0;i++)
	{
     rem[i]=num%2;
     num=num/2;
		
	} 
	for(i=i-1;i>=0;i--)
{
	printf("%d",rem[i]);
}
	return 0;
}
