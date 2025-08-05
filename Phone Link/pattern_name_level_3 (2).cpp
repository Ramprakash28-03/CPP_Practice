#include<iostream>
#include<string>
using namespace std;
int main ()
{
	start:
	int num,row,col,i=0,newword=0;
	string  A,B,C,D,E,F,G,H,I,J;
	B.clear(); C.clear(); D.clear(); E.clear(); F.clear(); G.clear(); H.clear(); I.clear(); J.clear(); 
	cout<<"Give the number of words less than or equal to 10 : ";
	cin>>num;
	if(num>0 && num<=10)
{
	if(num>=1)
	{
	cout<<"Give the first word :";
	cin>>A;
	}
	if(num>=2)
	{
	cout<<"Give the second word :";
	cin>>B;
	}
	if(num>=3)
	{
	cout<<"Give the third word :";
	cin>>C;
	}
	if(num>=4)
	{
	cout<<"Give the forth word :";
	cin>>D;
	}
	if(num>=5)
	{
	cout<<"Give the fifth word :";
	cin>>E;
	}
	if(num>=6)
	{
	cout<<"Give the sixth word :";
	cin>>F;
	}
	if(num>=7)
	{
	cout<<"Give the seventh word :";
	cin>>G;
	}
	if(num>=8)
	{
	cout<<"Give the Eighth word :";
	cin>>H;
	}
	if(num>=9)
	{
	cout<<"Give the Ninth word :";
	cin>>I;
	}
	if(num>=10)
	{
	cout<<"Give the tenth word :";
	cin>>J;
	}
	
	new_word:
	for(row=1;row<=7;row++) 
	{ i=0;	
	check:
		if(A[i]=='a' || A[i]=='A')
		{
			 for(col=1;col<=7; col++){                            //A
        if(row==1 || row==4 || col==1 || col==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		}
		 else if(A[i]=='b' || A[i]=='B')
		 {
		 	 for(col=1;col<=7; col++){                            //B
        if(row==1 || row==4 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='c' || A[i]=='C')
		 {
		 		 for(col=1;col<=7; col++){                            //C
        if(row==1 || col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='d' || A[i]=='D')
		 {
		 		 for(col=1;col<=7; col++){                            //D
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='e' || A[i]=='E')
		 {
		 		 for(col=1;col<=7; col++){                            //E
        if(row==1 || row==4 || col==1  || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='f' || A[i]=='F')
		 {
		 		 for(col=1;col<=7; col++){                            //F
        if(row==1 || row==4 || col==1 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='g' || A[i]=='G')
		 {
		 	for(col=1;col<=7; col++){                              //G
        if(row==1 || row==7 || row==4 && (col>=4 && col<=7 ) || row==5 && col==7  || col==1 || row==6 && col==7 )
       cout<<"*";
       else
        cout<<" ";
    } cout<<"   ";
		 }
		 else if(A[i]=='h' || A[i]=='H')
		 {
		 		 for(col=1;col<=7; col++){                            //H
        if( row==4 || col==1 || col==7 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='i' || A[i]=='I')
		 {
		 		 for(col=1;col<=7; col++){                            //I
        if(row==1 || col==4 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='j' || A[i]=='J')
		 {
		 		 for(col=1;col<=7; col++){                            //J
        if(row==1 || col==4 || row==7 && (col==1 || col==2 || col==3 ) || col==1 && ( row==6 || row==5)){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='k' || A[i]=='K')
		 {
		 	for(col=1;col<=7; col++){                              //K
        if(row==1 && col==7||  row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==5 || row==3 && col==3 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[i]=='l' || A[i]=='L')
		 {
		 		 for(col=1;col<=7; col++){                            //L
        if( col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='m' || A[i]=='M')
		 {
		 	for(col=1;col<=7; col++){                            //M
        if(col==1 || col==7 || row==2 && (col==2 || col==6) || row==3 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='n' || A[i]=='N')
		 {
		 	for(col=1;col<=7; col++){                            //N
        if(col==1 || col==7 || row==2 && (col==2) || row==3 && (col==3) || row==4 && col==4 || row==5 && col==5 || row==6 && col==6 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='o' || A[i]=='O')
		 {
		 		 for(col=1;col<=7; col++){                            //O
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='p' || A[i]=='P')
		 {
		 		 for(col=1;col<=7; col++){                            //P
        if(row==1 || col==1 || col==7 && (row==2 || row==3) || row==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='q' || A[i]=='Q')
		 {
		 		 for(col=1;col<=7; col++){                            //Q
        if(row==1 || row==5 || col==1 && (row==2 ||row==3 || row==4 ) || col==7 && (row==2 ||row==3 || row==4) || col==6 && row==6 || col==7 && row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='r' || A[i]=='R')
		 {
		 	 for(col=1;col<=7; col++){                              //R
        if(row==1 || row==4 || row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==7 || row==3 && col==7 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[i]=='s' || A[i]=='S')
		 {
		 	for(col=1;col<=7; col++){                              //S
        if(row==1 || row==4 || row==2 && col==1 || row==3 && col==1|| row==5 && col==7 ||row==6 && col==7 || row==7 )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   "; 
		 }
		 else if(A[i]=='t' || A[i]=='T')
		  {
		 		 for(col=1;col<=7; col++){                            //T
        if(row==1 || col==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='u' || A[i]=='U')
		  {
		 		 for(col=1;col<=7; col++){                            //U
        if(
		
		 col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='v' || A[i]=='V')
		 {
		 	for(col=1;col<=7; col++){                              //V
        if(row==1 && col==1 || row==3 && col==2 || row==5 && col==3 || row==7 && col==4 || row==1 && col==7 || row==3 && col==6 || row==5 && col==5   )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[i]=='w' || A[i]=='W')
		 {
		 	for(col=1;col<=7; col++){                            //W
        if(col==1 || col==7 || row==6 && (col==2 || col==6) || row==5 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='x' || A[i]=='X')
		 {
		 	for(col=1;col<=7; col++){                            //X
        if(col==1 && (row==1 || row==7)|| col==2 && (row==2 || row==6 ) || col==3 && (row==3 || row==5)||row==4 && col==4 || col==7 && (row==1 || row==7)|| col==6 && (row==2 || row==6 ) || col==5 && (row==3 || row==5 )){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='y' || A[i]=='Y')
		 {
		 	for(col=1;col<=7; col++){                            //Y
        if(col==1 && row==1 || col==2 && row==2 || col==3 && row==3 ||(row==4 || row==5 || row==6 || row==7) && col==4 || col==5 &&  row==3 || col==6 && row==2 || col==7 && row==1 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[i]=='z' || A[i]=='Z')
		 {
		 	for(col=1;col<=7; col++){                            //Z
        if(row==1 || row==7 || row==2 && col==6 || row==3 && col==5 || row==4 && col==4 || row==5 && col==3|| row==6 && col==2 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 i++;
		 if(i<15)
		 goto check;
		 cout<<endl;
		 
	
	}
	cout<<endl;
	
	if(num>2 && num<11)
	{    for ( i = 0; i < 15; ++i) {
          A[i]=' ';
        }
    
		A=B;
		num=num+10;
		goto new_word;
	}	
	else if(num==2)
	{
	     for ( i = 0; i < 15; ++i) {
          A[i]=' ';
        }
	    A=B;
		num=num+100;
		goto new_word;	
	}
		if(num>10 && num<21)
	{
		 for ( i = 0; i < 15; ++i) {
           A[i]=' '; 
        }
		A=C;
		num=num+10;
		goto new_word;
	}	
	if(num==23)
	{
	     for ( i = 0; i < 15; ++i) {
          A[i]=' ';
        }
		num=num+100;
	}
		if(num>20 && num<31)
	{
	 for ( i = 0; i < 15; ++i) {
          A[i]=' ';
        }
		A=D;
		num=num+10;
		goto new_word;
	}	
if(num==34)
	{
		num=num+100;
	}
	if(num>30 && num<41)
	{
		 for ( i = 0; i < 15; ++i) {
          A[i]=' ';
        }
		A=E;
		num=num+10;
		goto new_word;
	}
	if(num==45)
	{
		num=num+100;
	}
		if(num>40 && num<51)
	{
	 for ( i = 0; i < 15; ++i) {
          A[i]=' ';
        }
		A=F;
		num=num+10;
		goto new_word;
	}
	if(num==56)
	{
		num=num+100;
	}
		if(num>50 && num<61)
	{
	 for ( i = 0; i < 15; ++i) {
          A[i]=' ';
        }
		A=G;
		num=num+10;
		goto new_word;
	}
	if(num==67)
	{
		num=num+100;
	}
		if(num>60 && num<71)
	{
	 for ( i = 0; i < 15; ++i) {
          A[i]=' ';
        }
		A=H;
		num=num+10;
		goto new_word;
	}	
	if(num==78)
	{
		num=num+100;
	}
		if(num>70 && num<81)
	{	
	 for ( i = 0; i < 15; ++i) {
          A[i]=' ';
        }
		A=I;
		num=num+10;
		goto new_word;
	}
	if(num==89)
	{
		num=num+100;
	}
		if(num>80 && num<91)
	{
		 for ( i = 0; i < 15; ++i) {
          A[i]=' ';
        }
		A=J;
		num=num+10;
		goto new_word;
	}	
cout<<" If you want to give some more words press : 1 \n else press : 0 \n ";
cin>>newword;
if (newword == 1)
goto start;
else if (newword == 0)
cout<<"Thank You";
else
cout<<"You have entered invalid entry.";
}
else
cout<<"you entered invalid quantity of words";
	
	return 0;
	
}

