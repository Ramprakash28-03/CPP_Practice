#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int length,i,j;
	char word[50],remove_char;
	cout<<"Give the string : ";
	gets(word);
	cout<<"Give the character to remove : ";
	cin>>remove_char;
	length=strlen(word);
	for(i=0;i<length;i++)
	{
		if(word[i]==remove_char)
		{ 
			for(j=i;j<length;j++)
			{
				word[j]=word[j+1];
			}
		}
	}
	cout<<"The String after removing the character is : "<<word;
	return 0;
}
