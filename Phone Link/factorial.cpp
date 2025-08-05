#include<stdio.h>
int main ()
{
 int num,i,j=1;
 printf("give the number : ");
 scanf("%d",&num);
 for(i=1;i<=num;i++){
 	j=j*i;
 }
 printf("the factorial of the num is :");
 printf("%d",j);
 return 0;
}
