#include<iostream>
using  namespace std;
 int main()
{ 
 int num,check,result=0,i,j;
 cout<<"give the number to check the frequency of 9 : ";
 cin>>num;
 for(j=1;num>0;j++){
	if(num%10 == 9){
		result++;
	}
	num=num/10;
	
 }

cout<<"the fequency of 9 in the number  : "<<result;
return 0;
}
