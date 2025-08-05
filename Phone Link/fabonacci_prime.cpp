#include<stdio.h>
int main()
{
	int j,i,num,first_num=0,second_num=1,count=0,last_num,flag;
	printf("Give the Nth term of fabonacci series : ");
	scanf("%d",&num);
	for(i=1;count<num;i++)
	{  

		first_num=second_num;
		second_num=last_num;
		last_num=first_num+second_num;
			if(last_num==2)
		flag=1;
		for(j=2;j<last_num;j++)
		{
		
		if(last_num%j==0){
		flag=0;
		break;}
		else
		flag=1;
		
	} 
	if(flag==1)
{
		count++;
	printf("\n The %d number is : %d ",count,last_num);}
	
	}return 0;
}
	
