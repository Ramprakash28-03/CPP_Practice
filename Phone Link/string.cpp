#include<stdio.h>
int main()
{	int i,voble=0 ,consunent=0;
	char ch[50];
	printf("Give the name :");
	scanf("%s",&ch);
	for(i=1;i<50;i++){

	if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' ||ch[i]=='u' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' ||ch[i]=='O' || ch[i]=='U' )
	{
	voble++; }
	else if(ch[i]>='a' && ch[i]<='z' || ch[i]>='A' && ch[i]<='Z')
	consunent++;
}
printf("The number of consunent in the given name is : %d \n",consunent);
printf("The number of voble in the given name is : %d \n",voble);
	return 0;
} 
