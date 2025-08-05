#include<stdio.h>
int main()
{
	int first_num=0,second_num=1,next_num,num,i;
	printf("give the nth term of fabonacci series :");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{	
		next_num= first_num + second_num;
		first_num= second_num;
		second_num= next_num;
			printf("the %d  number is %d \n ",i,first_num);
	}
	printf("the nth  number is %d ",first_num);
		return 0;
}
