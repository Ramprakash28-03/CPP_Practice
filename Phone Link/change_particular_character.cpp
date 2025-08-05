#include<iostream>
#include<string.h>
using namespace std;
int main()
{	int i,length;
	char word[50],ch,place;
	cout<<"Give the string ";
	gets(word);
	cout<<"Give the character you want to change in the string :";
	cin>>place;
	cout<<"Give the new character in the place of " <<place<<" : ";
	cin>>ch;
	length=strlen(word);
	for(i=0;i<length;i++)
{
	if(word[i]==place)
	{
		word[i]=ch;
		break;
	}
}
cout<<"The new word is :";
cout<<word;
return 0;
	
	
	
}
