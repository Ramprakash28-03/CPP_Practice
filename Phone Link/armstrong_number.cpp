#include<stdio.h>
int main()
{
	int i,num,rem,cube=0,sum,tem;
	printf("give the number to check armstrong or not:");
	scanf("%d",&num);
	for(i=1;num!=0;i++){
			tem=cube;
			rem=num%10;
		cube=rem*rem*rem;
		sum=sum+cube;
		num=num/10;	}
	printf("%d",sum);
	return 0;
	
}
