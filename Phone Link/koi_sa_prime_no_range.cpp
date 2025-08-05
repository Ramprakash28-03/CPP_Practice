#include<stdio.h>
int main()
{
	int i,j,start_num,end_num,flag=0;
	printf("Give the start number :");
	scanf("%d",&start_num);
	printf("Give the end number to check the prime number between these number : ");
	scanf("%d",&end_num);
	for(i=end_num;i>start_num;i--)
{
	for(j=2;j<i;j++)
	{
		if(i%j == 0)
		{
			flag = 1;
			break;
		
		}
			else 
			flag =0;
		
		}
		if(flag==0){
			printf("The largest prime number is:%d ",i);
			break;
		
		}
		} return 0;
}
