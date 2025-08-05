#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
	int length,i,j,count=0;
	char ch[50];
	cout<<"Give the word which you want to check first non repeated letter : ";
	gets(ch);
	length=strlen(ch);
	for(i=0;i<length;i++)
	{	count=0;
		for(j=i+1;j<length;j++)
		if(ch[i]!=ch[j])
		count++;
		if(count==(length-(1+i)))
		break;
	}
	cout<<"The first non repeated character is : "<<ch[i];
	return 0;
}
