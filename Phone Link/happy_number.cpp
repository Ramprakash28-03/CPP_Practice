#include<stdio.h>
#include<math.h>
int main()
{
	int i,check=1,num,sum=0,count=0;
	printf("Give the number to check happy number or not :");
	scanf("%d",&num);
	int tem=num;
	loop_start:
	if(check==1 && count<1000)
	{
		for(i=1;num>0;i++)
		{
			sum=sum + pow(num%10,2);
			num=num/10;
			
		}
		if(sum==1)
		{
			check=0;
		}
		else
		{
			check=1;
			num=sum;
			sum=0;
			count++;
			goto loop_start;
		}
	}
	if(check==0){
	
	printf("This is happy number : %d\n",tem);
	printf("The number of count is : %d",count);}
	else 
	printf("This is not happy number");
	return 0;

	
}
