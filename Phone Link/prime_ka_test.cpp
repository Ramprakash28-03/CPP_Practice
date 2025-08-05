#include<stdio.h>
int main()
{
	int i,num,first_num=0,second_num=1,count=0,last_num;
	printf("Give the Nth term of fabonacci series : ");
	scanf("%d",&num);
	for(i=1;count<num;i++)
	{
		first_num=second_num;
		second_num=last_num;
		last_num=first_num+second_num;
		count++;
		printf("\nThe %d term of fabonacci series is %d ",i,last_num);
	}
	
	return 0;
}
