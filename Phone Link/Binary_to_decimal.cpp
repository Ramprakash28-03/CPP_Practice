#include<stdio.h>
#include <math.h>
int main()
{
	int binary_num,i,sum=0,decimal_num,flag=0;
	printf("Give the binary number to convert it into decimal ");
	scanf("%d",&binary_num);
	for(i=0;binary_num>0;i++){
		if(binary_num%10 == 0 || binary_num%10==1){
		flag=1;
		decimal_num= (binary_num%10)*pow(2,i);
		binary_num= binary_num/10;
		sum=sum+decimal_num;
	} else
{  flag=0;
	break;
}	}
	flag==1?printf("decimal number is : %d ",sum):	printf("this is not binary number");
	return 0; }
