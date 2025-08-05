#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int length,i,j,k,count;
	char word[50],ch;
	cout<<"Give the string : ";
	gets(word);
	length=strlen(word);
	for(i=0;i<length;i++)
	{	
		count=0;
		for(j=i+1;j<length;j++)
		{	if(word[i]==word[j])
			{	word[j]=0;
				ch=word[i];
				count++;
			}
		}
		if(count>0 && word[i]!=0)
		cout<<"The duplicate character is : "<<ch<<" The count is : "<<count<<" times"<<endl;
	}
	return 0;
}
