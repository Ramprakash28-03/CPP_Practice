#include<iostream>
#include<string>
using namespace std;
int main ()
{
	int num,row,col;
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
	{	
			if(A[0]=='a' || A[0]=='A')
		{
			 for(col=1;col<=7; col++){                            //A
        if(row==1 || row==4 || col==1 || col==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		}
		 else if(A[0]=='b' || A[0]=='B')
		 {
		 	 for(col=1;col<=7; col++){                            //B
        if(row==1 || row==4 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='c' || A[0]=='C')
		 {
		 		 for(col=1;col<=7; col++){                            //C
        if(row==1 || col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='d' || A[0]=='D')
		 {
		 		 for(col=1;col<=7; col++){                            //D
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='e' || A[0]=='E')
		 {
		 		 for(col=1;col<=7; col++){                            //E
        if(row==1 || row==4 || col==1  || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='f' || A[0]=='F')
		 {
		 		 for(col=1;col<=7; col++){                            //F
        if(row==1 || row==4 || col==1 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='g' || A[0]=='G')
		 {
		 	for(col=1;col<=7; col++){                              //G
        if(row==1 || row==7 || row==4 && (col>=4 && col<=7 ) || row==5 && col==7  || col==1 || row==6 && col==7 )
       cout<<"*";
       else
        cout<<" ";
    } cout<<"   ";
		 }
		 else if(A[0]=='h' || A[0]=='H')
		 {
		 		 for(col=1;col<=7; col++){                            //H
        if( row==4 || col==1 || col==7 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='i' || A[0]=='I')
		 {
		 		 for(col=1;col<=7; col++){                            //I
        if(row==1 || col==4 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='j' || A[0]=='J')
		 {
		 		 for(col=1;col<=7; col++){                            //J
        if(row==1 || col==4 || row==7 && (col==1 || col==2 || col==3 ) || col==1 && ( row==6 || row==5)){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='k' || A[0]=='K')
		 {
		 	for(col=1;col<=7; col++){                              //K
        if(row==1 && col==7||  row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==5 || row==3 && col==3 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[0]=='l' || A[0]=='L')
		 {
		 		 for(col=1;col<=7; col++){                            //L
        if( col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='m' || A[0]=='M')
		 {
		 	for(col=1;col<=7; col++){                            //M
        if(col==1 || col==7 || row==2 && (col==2 || col==6) || row==3 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='n' || A[0]=='N')
		 {
		 	for(col=1;col<=7; col++){                            //N
        if(col==1 || col==7 || row==2 && (col==2) || row==3 && (col==3) || row==4 && col==4 || row==5 && col==5 || row==6 && col==6 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='o' || A[0]=='O')
		 {
		 		 for(col=1;col<=7; col++){                            //O
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='p' || A[0]=='P')
		 {
		 		 for(col=1;col<=7; col++){                            //P
        if(row==1 || col==1 || col==7 && (row==2 || row==3) || row==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='q' || A[0]=='Q')
		 {
		 		 for(col=1;col<=7; col++){                            //Q
        if(row==1 || row==5 || col==1 && (row==2 ||row==3 || row==4 ) || col==7 && (row==2 ||row==3 || row==4) || col==6 && row==6 || col==7 && row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='r' || A[0]=='R')
		 {
		 	 for(col=1;col<=7; col++){                              //R
        if(row==1 || row==4 || row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==7 || row==3 && col==7 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[0]=='s' || A[0]=='S')
		 {
		 	for(col=1;col<=7; col++){                              //S
        if(row==1 || row==4 || row==2 && col==1 || row==3 && col==1|| row==5 && col==7 ||row==6 && col==7 || row==7 )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   "; 
		 }
		 else if(A[0]=='t' || A[0]=='T')
		  {
		 		 for(col=1;col<=7; col++){                            //T
        if(row==1 || col==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='u' || A[0]=='U')
		  {
		 		 for(col=1;col<=7; col++){                            //U
        if(
		
		 col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='v' || A[0]=='V')
		 {
		 	for(col=1;col<=7; col++){                              //V
        if(row==1 && col==1 || row==3 && col==2 || row==5 && col==3 || row==7 && col==4 || row==1 && col==7 || row==3 && col==6 || row==5 && col==5   )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[0]=='w' || A[0]=='W')
		 {
		 	for(col=1;col<=7; col++){                            //W
        if(col==1 || col==7 || row==6 && (col==2 || col==6) || row==5 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='x' || A[0]=='X')
		 {
		 	for(col=1;col<=7; col++){                            //X
        if(col==1 && (row==1 || row==7)|| col==2 && (row==2 || row==6 ) || col==3 && (row==3 || row==5)||row==4 && col==4 || col==7 && (row==1 || row==7)|| col==6 && (row==2 || row==6 ) || col==5 && (row==3 || row==5 )){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='y' || A[0]=='Y')
		 {
		 	for(col=1;col<=7; col++){                            //Y
        if(col==1 && row==1 || col==2 && row==2 || col==3 && row==3 ||(row==4 || row==5 || row==6 || row==7) && col==4 || col==5 &&  row==3 || col==6 && row==2 || col==7 && row==1 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[0]=='z' || A[0]=='Z')
		 {
		 	for(col=1;col<=7; col++){                            //Z
        if(row==1 || row==7 || row==2 && col==6 || row==3 && col==5 || row==4 && col==4 || row==5 && col==3|| row==6 && col==2 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		
		if(A[1]=='a' || A[1]=='A')
		{
			 for(col=1;col<=7; col++){                            //A
        if(row==1 || row==4 || col==1 || col==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		}
		 else if(A[1]=='b' || A[1]=='B')
		 {
		 	 for(col=1;col<=7; col++){                            //B
        if(row==1 || row==4 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='c' || A[1]=='C')
		 {
		 		 for(col=1;col<=7; col++){                            //C
        if(row==1 || col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='d' || A[1]=='D')
		 {
		 		 for(col=1;col<=7; col++){                            //D
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='e' || A[1]=='E')
		 {
		 		 for(col=1;col<=7; col++){                            //E
        if(row==1 || row==4 || col==1  || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='f' || A[1]=='F')
		 {
		 		 for(col=1;col<=7; col++){                            //F
        if(row==1 || row==4 || col==1 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='g' || A[1]=='G')
		 {
		 	for(col=1;col<=7; col++){                              //G
        if(row==1 || row==7 || row==4 && (col>=4 && col<=7 ) || row==5 && col==7  || col==1 || row==6 && col==7 )
       cout<<"*";
       else
        cout<<" ";
    } cout<<"   ";
		 }
		 else if(A[1]=='h' || A[1]=='H')
		 {
		 		 for(col=1;col<=7; col++){                            //H
        if( row==4 || col==1 || col==7 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='i' || A[1]=='I')
		 {
		 		 for(col=1;col<=7; col++){                            //I
        if(row==1 || col==4 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='j' || A[1]=='J')
		 {
		 		 for(col=1;col<=7; col++){                            //J
        if(row==1 || col==4 || row==7 && (col==1 || col==2 || col==3 ) || col==1 && ( row==6 || row==5)){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='k' || A[1]=='K')
		 {
		 	for(col=1;col<=7; col++){                              //K
        if(row==1 && col==7||  row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==5 || row==3 && col==3 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[1]=='l' || A[1]=='L')
		 {
		 		 for(col=1;col<=7; col++){                            //L
        if( col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='m' || A[1]=='M')
		 {
		 	for(col=1;col<=7; col++){                            //M
        if(col==1 || col==7 || row==2 && (col==2 || col==6) || row==3 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='n' || A[1]=='N')
		 {
		 	for(col=1;col<=7; col++){                            //N
        if(col==1 || col==7 || row==2 && (col==2) || row==3 && (col==3) || row==4 && col==4 || row==5 && col==5 || row==6 && col==6 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='o' || A[1]=='O')
		 {
		 		 for(col=1;col<=7; col++){                            //O
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='p' || A[1]=='P')
		 {
		 		 for(col=1;col<=7; col++){                            //P
        if(row==1 || col==1 || col==7 && (row==2 || row==3) || row==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='q' || A[1]=='Q')
		 {
		 		 for(col=1;col<=7; col++){                            //Q
        if(row==1 || row==5 || col==1 && (row==2 ||row==3 || row==4 ) || col==7 && (row==2 ||row==3 || row==4) || col==6 && row==6 || col==7 && row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='r' || A[1]=='R')
		 {
		 	 for(col=1;col<=7; col++){                              //R
        if(row==1 || row==4 || row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==7 || row==3 && col==7 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[1]=='s' || A[1]=='S')
		 {
		 	for(col=1;col<=7; col++){                              //S
        if(row==1 || row==4 || row==2 && col==1 || row==3 && col==1|| row==5 && col==7 ||row==6 && col==7 || row==7 )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   "; 
		 }
		 else if(A[1]=='t' || A[1]=='T')
		  {
		 		 for(col=1;col<=7; col++){                            //T
        if(row==1 || col==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='u' || A[1]=='U')
		  {
		 		 for(col=1;col<=7; col++){                            //U
        if(
		
		 col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='v' || A[1]=='V')
		 {
		 	for(col=1;col<=7; col++){                              //V
        if(row==1 && col==1 || row==3 && col==2 || row==5 && col==3 || row==7 && col==4 || row==1 && col==7 || row==3 && col==6 || row==5 && col==5   )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[1]=='w' || A[1]=='W')
		 {
		 	for(col=1;col<=7; col++){                            //W
        if(col==1 || col==7 || row==6 && (col==2 || col==6) || row==5 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='x' || A[1]=='X')
		 {
		 	for(col=1;col<=7; col++){                            //X
        if(col==1 && (row==1 || row==7)|| col==2 && (row==2 || row==6 ) || col==3 && (row==3 || row==5)||row==4 && col==4 || col==7 && (row==1 || row==7)|| col==6 && (row==2 || row==6 ) || col==5 && (row==3 || row==5 )){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='y' || A[1]=='Y')
		 {
		 	for(col=1;col<=7; col++){                            //Y
        if(col==1 && row==1 || col==2 && row==2 || col==3 && row==3 ||(row==4 || row==5 || row==6 || row==7) && col==4 || col==5 &&  row==3 || col==6 && row==2 || col==7 && row==1 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[1]=='z' || A[1]=='Z')
		 {
		 	for(col=1;col<=7; col++){                            //Z
        if(row==1 || row==7 || row==2 && col==6 || row==3 && col==5 || row==4 && col==4 || row==5 && col==3|| row==6 && col==2 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 
		 	if(A[2]=='a' || A[2]=='A')
		{
			 for(col=1;col<=7; col++){                            //A
        if(row==1 || row==4 || col==1 || col==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		}
		 else if(A[2]=='b' || A[2]=='B')
		 {
		 	 for(col=1;col<=7; col++){                            //B
        if(row==1 || row==4 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='c' || A[2]=='C')
		 {
		 		 for(col=1;col<=7; col++){                            //C
        if(row==1 || col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='d' || A[2]=='D')
		 {
		 		 for(col=1;col<=7; col++){                            //D
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='e' || A[2]=='E')
		 {
		 		 for(col=1;col<=7; col++){                            //E
        if(row==1 || row==4 || col==1  || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='f' || A[2]=='F')
		 {
		 		 for(col=1;col<=7; col++){                            //F
        if(row==1 || row==4 || col==1 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='g' || A[2]=='G')
		 {
		 	for(col=1;col<=7; col++){                              //G
        if(row==1 || row==7 || row==4 && (col>=4 && col<=7 ) || row==5 && col==7  || col==1 || row==6 && col==7 )
       cout<<"*";
       else
        cout<<" ";
    } cout<<"   ";
		 }
		 else if(A[2]=='h' || A[2]=='H')
		 {
		 		 for(col=1;col<=7; col++){                            //H
        if( row==4 || col==1 || col==7 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='i' || A[2]=='I')
		 {
		 		 for(col=1;col<=7; col++){                            //I
        if(row==1 || col==4 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='j' || A[2]=='J')
		 {
		 		 for(col=1;col<=7; col++){                            //J
        if(row==1 || col==4 || row==7 && (col==1 || col==2 || col==3 ) || col==1 && ( row==6 || row==5)){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='k' || A[2]=='K')
		 {
		 	for(col=1;col<=7; col++){                              //K
        if(row==1 && col==7||  row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==5 || row==3 && col==3 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[2]=='l' || A[2]=='L')
		 {
		 		 for(col=1;col<=7; col++){                            //L
        if( col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='m' || A[2]=='M')
		 {
		 	for(col=1;col<=7; col++){                            //M
        if(col==1 || col==7 || row==2 && (col==2 || col==6) || row==3 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='n' || A[2]=='N')
		 {
		 	for(col=1;col<=7; col++){                            //N
        if(col==1 || col==7 || row==2 && (col==2) || row==3 && (col==3) || row==4 && col==4 || row==5 && col==5 || row==6 && col==6 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='o' || A[2]=='O')
		 {
		 		 for(col=1;col<=7; col++){                            //O
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='p' || A[2]=='P')
		 {
		 		 for(col=1;col<=7; col++){                            //P
        if(row==1 || col==1 || col==7 && (row==2 || row==3) || row==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='q' || A[2]=='Q')
		 {
		 		 for(col=1;col<=7; col++){                            //Q
        if(row==1 || row==5 || col==1 && (row==2 ||row==3 || row==4 ) || col==7 && (row==2 ||row==3 || row==4) || col==6 && row==6 || col==7 && row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='r' || A[2]=='R')
		 {
		 	 for(col=1;col<=7; col++){                              //R
        if(row==1 || row==4 || row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==7 || row==3 && col==7 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[2]=='s' || A[2]=='S')
		 {
		 	for(col=1;col<=7; col++){                              //S
        if(row==1 || row==4 || row==2 && col==1 || row==3 && col==1|| row==5 && col==7 ||row==6 && col==7 || row==7 )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   "; 
		 }
		 else if(A[2]=='t' || A[2]=='T')
		  {
		 		 for(col=1;col<=7; col++){                            //T
        if(row==1 || col==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='u' || A[2]=='U')
		  {
		 		 for(col=1;col<=7; col++){                            //U
        if(
		
		 col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='v' || A[2]=='V')
		 {
		 	for(col=1;col<=7; col++){                              //V
        if(row==1 && col==1 || row==3 && col==2 || row==5 && col==3 || row==7 && col==4 || row==1 && col==7 || row==3 && col==6 || row==5 && col==5   )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[2]=='w' || A[2]=='W')
		 {
		 	for(col=1;col<=7; col++){                            //W
        if(col==1 || col==7 || row==6 && (col==2 || col==6) || row==5 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='x' || A[2]=='X')
		 {
		 	for(col=1;col<=7; col++){                            //X
        if(col==1 && (row==1 || row==7)|| col==2 && (row==2 || row==6 ) || col==3 && (row==3 || row==5)||row==4 && col==4 || col==7 && (row==1 || row==7)|| col==6 && (row==2 || row==6 ) || col==5 && (row==3 || row==5 )){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='y' || A[2]=='Y')
		 {
		 	for(col=1;col<=7; col++){                            //Y
        if(col==1 && row==1 || col==2 && row==2 || col==3 && row==3 ||(row==4 || row==5 || row==6 || row==7) && col==4 || col==5 &&  row==3 || col==6 && row==2 || col==7 && row==1 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[2]=='z' || A[2]=='Z')
		 {
		 	for(col=1;col<=7; col++){                            //Z
        if(row==1 || row==7 || row==2 && col==6 || row==3 && col==5 || row==4 && col==4 || row==5 && col==3|| row==6 && col==2 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 
		 	if(A[3]=='a' || A[3]=='A')
		{
			 for(col=1;col<=7; col++){                            //A
        if(row==1 || row==4 || col==1 || col==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		}
		 else if(A[3]=='b' || A[3]=='B')
		 {
		 	 for(col=1;col<=7; col++){                            //B
        if(row==1 || row==4 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='c' || A[3]=='C')
		 {
		 		 for(col=1;col<=7; col++){                            //C
        if(row==1 || col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='d' || A[3]=='D')
		 {
		 		 for(col=1;col<=7; col++){                            //D
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='e' || A[3]=='E')
		 {
		 		 for(col=1;col<=7; col++){                            //E
        if(row==1 || row==4 || col==1  || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='f' || A[3]=='F')
		 {
		 		 for(col=1;col<=7; col++){                            //F
        if(row==1 || row==4 || col==1 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='g' || A[3]=='G')
		 {
		 	for(col=1;col<=7; col++){                              //G
        if(row==1 || row==7 || row==4 && (col>=4 && col<=7 ) || row==5 && col==7  || col==1 || row==6 && col==7 )
       cout<<"*";
       else
        cout<<" ";
    } cout<<"   ";
		 }
		 else if(A[3]=='h' || A[3]=='H')
		 {
		 		 for(col=1;col<=7; col++){                            //H
        if( row==4 || col==1 || col==7 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='i' || A[3]=='I')
		 {
		 		 for(col=1;col<=7; col++){                            //I
        if(row==1 || col==4 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='j' || A[3]=='J')
		 {
		 		 for(col=1;col<=7; col++){                            //J
        if(row==1 || col==4 || row==7 && (col==1 || col==2 || col==3 ) || col==1 && ( row==6 || row==5)){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='k' || A[3]=='K')
		 {
		 	for(col=1;col<=7; col++){                              //K
        if(row==1 && col==7||  row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==5 || row==3 && col==3 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[3]=='l' || A[3]=='L')
		 {
		 		 for(col=1;col<=7; col++){                            //L
        if( col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='m' || A[3]=='M')
		 {
		 	for(col=1;col<=7; col++){                            //M
        if(col==1 || col==7 || row==2 && (col==2 || col==6) || row==3 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='n' || A[3]=='N')
		 {
		 	for(col=1;col<=7; col++){                            //N
        if(col==1 || col==7 || row==2 && (col==2) || row==3 && (col==3) || row==4 && col==4 || row==5 && col==5 || row==6 && col==6 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='o' || A[3]=='O')
		 {
		 		 for(col=1;col<=7; col++){                            //O
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='p' || A[3]=='P')
		 {
		 		 for(col=1;col<=7; col++){                            //P
        if(row==1 || col==1 || col==7 && (row==2 || row==3) || row==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='q' || A[3]=='Q')
		 {
		 		 for(col=1;col<=7; col++){                            //Q
        if(row==1 || row==5 || col==1 && (row==2 ||row==3 || row==4 ) || col==7 && (row==2 ||row==3 || row==4) || col==6 && row==6 || col==7 && row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='r' || A[3]=='R')
		 {
		 	 for(col=1;col<=7; col++){                              //R
        if(row==1 || row==4 || row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==7 || row==3 && col==7 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[3]=='s' || A[3]=='S')
		 {
		 	for(col=1;col<=7; col++){                              //S
        if(row==1 || row==4 || row==2 && col==1 || row==3 && col==1|| row==5 && col==7 ||row==6 && col==7 || row==7 )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   "; 
		 }
		 else if(A[3]=='t' || A[3]=='T')
		  {
		 		 for(col=1;col<=7; col++){                            //T
        if(row==1 || col==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='u' || A[3]=='U')
		  {
		 		 for(col=1;col<=7; col++){                            //U
        if(
		
		 col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='v' || A[3]=='V')
		 {
		 	for(col=1;col<=7; col++){                              //V
        if(row==1 && col==1 || row==3 && col==2 || row==5 && col==3 || row==7 && col==4 || row==1 && col==7 || row==3 && col==6 || row==5 && col==5   )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[3]=='w' || A[3]=='W')
		 {
		 	for(col=1;col<=7; col++){                            //W
        if(col==1 || col==7 || row==6 && (col==2 || col==6) || row==5 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='x' || A[3]=='X')
		 {
		 	for(col=1;col<=7; col++){                            //X
        if(col==1 && (row==1 || row==7)|| col==2 && (row==2 || row==6 ) || col==3 && (row==3 || row==5)||row==4 && col==4 || col==7 && (row==1 || row==7)|| col==6 && (row==2 || row==6 ) || col==5 && (row==3 || row==5 )){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='y' || A[3]=='Y')
		 {
		 	for(col=1;col<=7; col++){                            //Y
        if(col==1 && row==1 || col==2 && row==2 || col==3 && row==3 ||(row==4 || row==5 || row==6 || row==7) && col==4 || col==5 &&  row==3 || col==6 && row==2 || col==7 && row==1 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[3]=='z' || A[3]=='Z')
		 {
		 	for(col=1;col<=7; col++){                            //Z
        if(row==1 || row==7 || row==2 && col==6 || row==3 && col==5 || row==4 && col==4 || row==5 && col==3|| row==6 && col==2 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 
		 	if(A[4]=='a' || A[4]=='A')
		{
			 for(col=1;col<=7; col++){                            //A
        if(row==1 || row==4 || col==1 || col==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		}
		 else if(A[4]=='b' || A[4]=='B')
		 {
		 	 for(col=1;col<=7; col++){                            //B
        if(row==1 || row==4 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='c' || A[4]=='C')
		 {
		 		 for(col=1;col<=7; col++){                            //C
        if(row==1 || col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='d' || A[4]=='D')
		 {
		 		 for(col=1;col<=7; col++){                            //D
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='e' || A[4]=='E')
		 {
		 		 for(col=1;col<=7; col++){                            //E
        if(row==1 || row==4 || col==1  || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='f' || A[4]=='F')
		 {
		 		 for(col=1;col<=7; col++){                            //F
        if(row==1 || row==4 || col==1 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='g' || A[4]=='G')
		 {
		 	for(col=1;col<=7; col++){                              //G
        if(row==1 || row==7 || row==4 && (col>=4 && col<=7 ) || row==5 && col==7  || col==1 || row==6 && col==7 )
       cout<<"*";
       else
        cout<<" ";
    } cout<<"   ";
		 }
		 else if(A[4]=='h' || A[4]=='H')
		 {
		 		 for(col=1;col<=7; col++){                            //H
        if( row==4 || col==1 || col==7 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='i' || A[4]=='I')
		 {
		 		 for(col=1;col<=7; col++){                            //I
        if(row==1 || col==4 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='j' || A[4]=='J')
		 {
		 		 for(col=1;col<=7; col++){                            //J
        if(row==1 || col==4 || row==7 && (col==1 || col==2 || col==3 ) || col==1 && ( row==6 || row==5)){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='k' || A[4]=='K')
		 {
		 	for(col=1;col<=7; col++){                              //K
        if(row==1 && col==7||  row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==5 || row==3 && col==3 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[4]=='l' || A[4]=='L')
		 {
		 		 for(col=1;col<=7; col++){                            //L
        if( col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='m' || A[4]=='M')
		 {
		 	for(col=1;col<=7; col++){                            //M
        if(col==1 || col==7 || row==2 && (col==2 || col==6) || row==3 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='n' || A[4]=='N')
		 {
		 	for(col=1;col<=7; col++){                            //N
        if(col==1 || col==7 || row==2 && (col==2) || row==3 && (col==3) || row==4 && col==4 || row==5 && col==5 || row==6 && col==6 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='o' || A[4]=='O')
		 {
		 		 for(col=1;col<=7; col++){                            //O
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='p' || A[4]=='P')
		 {
		 		 for(col=1;col<=7; col++){                            //P
        if(row==1 || col==1 || col==7 && (row==2 || row==3) || row==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='q' || A[4]=='Q')
		 {
		 		 for(col=1;col<=7; col++){                            //Q
        if(row==1 || row==5 || col==1 && (row==2 ||row==3 || row==4 ) || col==7 && (row==2 ||row==3 || row==4) || col==6 && row==6 || col==7 && row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='r' || A[4]=='R')
		 {
		 	 for(col=1;col<=7; col++){                              //R
        if(row==1 || row==4 || row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==7 || row==3 && col==7 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[4]=='s' || A[4]=='S')
		 {
		 	for(col=1;col<=7; col++){                              //S
        if(row==1 || row==4 || row==2 && col==1 || row==3 && col==1|| row==5 && col==7 ||row==6 && col==7 || row==7 )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   "; 
		 }
		 else if(A[4]=='t' || A[4]=='T')
		  {
		 		 for(col=1;col<=7; col++){                            //T
        if(row==1 || col==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='u' || A[4]=='U')
		  {
		 		 for(col=1;col<=7; col++){                            //U
        if(
		
		 col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='v' || A[4]=='V')
		 {
		 	for(col=1;col<=7; col++){                              //V
        if(row==1 && col==1 || row==3 && col==2 || row==5 && col==3 || row==7 && col==4 || row==1 && col==7 || row==3 && col==6 || row==5 && col==5   )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[4]=='w' || A[4]=='W')
		 {
		 	for(col=1;col<=7; col++){                            //W
        if(col==1 || col==7 || row==6 && (col==2 || col==6) || row==5 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='x' || A[4]=='X')
		 {
		 	for(col=1;col<=7; col++){                            //X
        if(col==1 && (row==1 || row==7)|| col==2 && (row==2 || row==6 ) || col==3 && (row==3 || row==5)||row==4 && col==4 || col==7 && (row==1 || row==7)|| col==6 && (row==2 || row==6 ) || col==5 && (row==3 || row==5 )){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='y' || A[4]=='Y')
		 {
		 	for(col=1;col<=7; col++){                            //Y
        if(col==1 && row==1 || col==2 && row==2 || col==3 && row==3 ||(row==4 || row==5 || row==6 || row==7) && col==4 || col==5 &&  row==3 || col==6 && row==2 || col==7 && row==1 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[4]=='z' || A[4]=='Z')
		 {
		 	for(col=1;col<=7; col++){                            //Z
        if(row==1 || row==7 || row==2 && col==6 || row==3 && col==5 || row==4 && col==4 || row==5 && col==3|| row==6 && col==2 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 
		 	if(A[5]=='a' || A[5]=='A')
		{
			 for(col=1;col<=7; col++){                            //A
        if(row==1 || row==4 || col==1 || col==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		}
		 else if(A[5]=='b' || A[5]=='B')
		 {
		 	 for(col=1;col<=7; col++){                            //B
        if(row==1 || row==4 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='c' || A[5]=='C')
		 {
		 		 for(col=1;col<=7; col++){                            //C
        if(row==1 || col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='d' || A[5]=='D')
		 {
		 		 for(col=1;col<=7; col++){                            //D
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='e' || A[5]=='E')
		 {
		 		 for(col=1;col<=7; col++){                            //E
        if(row==1 || row==4 || col==1  || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='f' || A[5]=='F')
		 {
		 		 for(col=1;col<=7; col++){                            //F
        if(row==1 || row==4 || col==1 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='g' || A[5]=='G')
		 {
		 	for(col=1;col<=7; col++){                              //G
        if(row==1 || row==7 || row==4 && (col>=4 && col<=7 ) || row==5 && col==7  || col==1 || row==6 && col==7 )
       cout<<"*";
       else
        cout<<" ";
    } cout<<"   ";
		 }
		 else if(A[5]=='h' || A[5]=='H')
		 {
		 		 for(col=1;col<=7; col++){                            //H
        if( row==4 || col==1 || col==7 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='i' || A[5]=='I')
		 {
		 		 for(col=1;col<=7; col++){                            //I
        if(row==1 || col==4 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='j' || A[5]=='J')
		 {
		 		 for(col=1;col<=7; col++){                            //J
        if(row==1 || col==4 || row==7 && (col==1 || col==2 || col==3 ) || col==1 && ( row==6 || row==5)){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='k' || A[5]=='K')
		 {
		 	for(col=1;col<=7; col++){                              //K
        if(row==1 && col==7||  row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==5 || row==3 && col==3 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[5]=='l' || A[5]=='L')
		 {
		 		 for(col=1;col<=7; col++){                            //L
        if( col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='m' || A[5]=='M')
		 {
		 	for(col=1;col<=7; col++){                            //M
        if(col==1 || col==7 || row==2 && (col==2 || col==6) || row==3 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='n' || A[5]=='N')
		 {
		 	for(col=1;col<=7; col++){                            //N
        if(col==1 || col==7 || row==2 && (col==2) || row==3 && (col==3) || row==4 && col==4 || row==5 && col==5 || row==6 && col==6 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='o' || A[5]=='O')
		 {
		 		 for(col=1;col<=7; col++){                            //O
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='p' || A[5]=='P')
		 {
		 		 for(col=1;col<=7; col++){                            //P
        if(row==1 || col==1 || col==7 && (row==2 || row==3) || row==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='q' || A[5]=='Q')
		 {
		 		 for(col=1;col<=7; col++){                            //Q
        if(row==1 || row==5 || col==1 && (row==2 ||row==3 || row==4 ) || col==7 && (row==2 ||row==3 || row==4) || col==6 && row==6 || col==7 && row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='r' || A[5]=='R')
		 {
		 	 for(col=1;col<=7; col++){                              //R
        if(row==1 || row==4 || row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==7 || row==3 && col==7 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[5]=='s' || A[5]=='S')
		 {
		 	for(col=1;col<=7; col++){                              //S
        if(row==1 || row==4 || row==2 && col==1 || row==3 && col==1|| row==5 && col==7 ||row==6 && col==7 || row==7 )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   "; 
		 }
		 else if(A[5]=='t' || A[5]=='T')
		  {
		 		 for(col=1;col<=7; col++){                            //T
        if(row==1 || col==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='u' || A[5]=='U')
		  {
		 		 for(col=1;col<=7; col++){                            //U
        if(
		
		 col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='v' || A[5]=='V')
		 {
		 	for(col=1;col<=7; col++){                              //V
        if(row==1 && col==1 || row==3 && col==2 || row==5 && col==3 || row==7 && col==4 || row==1 && col==7 || row==3 && col==6 || row==5 && col==5   )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[5]=='w' || A[5]=='W')
		 {
		 	for(col=1;col<=7; col++){                            //W
        if(col==1 || col==7 || row==6 && (col==2 || col==6) || row==5 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='x' || A[5]=='X')
		 {
		 	for(col=1;col<=7; col++){                            //X
        if(col==1 && (row==1 || row==7)|| col==2 && (row==2 || row==6 ) || col==3 && (row==3 || row==5)||row==4 && col==4 || col==7 && (row==1 || row==7)|| col==6 && (row==2 || row==6 ) || col==5 && (row==3 || row==5 )){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='y' || A[5]=='Y')
		 {
		 	for(col=1;col<=7; col++){                            //Y
        if(col==1 && row==1 || col==2 && row==2 || col==3 && row==3 ||(row==4 || row==5 || row==6 || row==7) && col==4 || col==5 &&  row==3 || col==6 && row==2 || col==7 && row==1 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[5]=='z' || A[5]=='Z')
		 {
		 	for(col=1;col<=7; col++){                            //Z
        if(row==1 || row==7 || row==2 && col==6 || row==3 && col==5 || row==4 && col==4 || row==5 && col==3|| row==6 && col==2 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 
		 	if(A[6]=='a' || A[6]=='A')
		{
			 for(col=1;col<=7; col++){                            //A
        if(row==1 || row==4 || col==1 || col==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		}
		 else if(A[6]=='b' || A[6]=='B')
		 {
		 	 for(col=1;col<=7; col++){                            //B
        if(row==1 || row==4 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='c' || A[6]=='C')
		 {
		 		 for(col=1;col<=7; col++){                            //C
        if(row==1 || col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='d' || A[6]=='D')
		 {
		 		 for(col=1;col<=7; col++){                            //D
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='e' || A[6]=='E')
		 {
		 		 for(col=1;col<=7; col++){                            //E
        if(row==1 || row==4 || col==1  || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='f' || A[6]=='F')
		 {
		 		 for(col=1;col<=7; col++){                            //F
        if(row==1 || row==4 || col==1 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='g' || A[6]=='G')
		 {
		 	for(col=1;col<=7; col++){                              //G
        if(row==1 || row==7 || row==4 && (col>=4 && col<=7 ) || row==5 && col==7  || col==1 || row==6 && col==7 )
       cout<<"*";
       else
        cout<<" ";
    } cout<<"   ";
		 }
		 else if(A[6]=='h' || A[6]=='H')
		 {
		 		 for(col=1;col<=7; col++){                            //H
        if( row==4 || col==1 || col==7 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='i' || A[6]=='I')
		 {
		 		 for(col=1;col<=7; col++){                            //I
        if(row==1 || col==4 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='j' || A[6]=='J')
		 {
		 		 for(col=1;col<=7; col++){                            //J
        if(row==1 || col==4 || row==7 && (col==1 || col==2 || col==3 ) || col==1 && ( row==6 || row==5)){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='k' || A[6]=='K')
		 {
		 	for(col=1;col<=7; col++){                              //K
        if(row==1 && col==7||  row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==5 || row==3 && col==3 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[6]=='l' || A[6]=='L')
		 {
		 		 for(col=1;col<=7; col++){                            //L
        if( col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='m' || A[6]=='M')
		 {
		 	for(col=1;col<=7; col++){                            //M
        if(col==1 || col==7 || row==2 && (col==2 || col==6) || row==3 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='n' || A[6]=='N')
		 {
		 	for(col=1;col<=7; col++){                            //N
        if(col==1 || col==7 || row==2 && (col==2) || row==3 && (col==3) || row==4 && col==4 || row==5 && col==5 || row==6 && col==6 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='o' || A[6]=='O')
		 {
		 		 for(col=1;col<=7; col++){                            //O
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='p' || A[6]=='P')
		 {
		 		 for(col=1;col<=7; col++){                            //P
        if(row==1 || col==1 || col==7 && (row==2 || row==3) || row==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='q' || A[6]=='Q')
		 {
		 		 for(col=1;col<=7; col++){                            //Q
        if(row==1 || row==5 || col==1 && (row==2 ||row==3 || row==4 ) || col==7 && (row==2 ||row==3 || row==4) || col==6 && row==6 || col==7 && row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='r' || A[6]=='R')
		 {
		 	 for(col=1;col<=7; col++){                              //R
        if(row==1 || row==4 || row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==7 || row==3 && col==7 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[6]=='s' || A[6]=='S')
		 {
		 	for(col=1;col<=7; col++){                              //S
        if(row==1 || row==4 || row==2 && col==1 || row==3 && col==1|| row==5 && col==7 ||row==6 && col==7 || row==7 )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   "; 
		 }
		 else if(A[6]=='t' || A[6]=='T')
		  {
		 		 for(col=1;col<=7; col++){                            //T
        if(row==1 || col==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='u' || A[6]=='U')
		  {
		 		 for(col=1;col<=7; col++){                            //U
        if(
		
		 col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='v' || A[6]=='V')
		 {
		 	for(col=1;col<=7; col++){                              //V
        if(row==1 && col==1 || row==3 && col==2 || row==5 && col==3 || row==7 && col==4 || row==1 && col==7 || row==3 && col==6 || row==5 && col==5   )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[6]=='w' || A[6]=='W')
		 {
		 	for(col=1;col<=7; col++){                            //W
        if(col==1 || col==7 || row==6 && (col==2 || col==6) || row==5 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='x' || A[6]=='X')
		 {
		 	for(col=1;col<=7; col++){                            //X
        if(col==1 && (row==1 || row==7)|| col==2 && (row==2 || row==6 ) || col==3 && (row==3 || row==5)||row==4 && col==4 || col==7 && (row==1 || row==7)|| col==6 && (row==2 || row==6 ) || col==5 && (row==3 || row==5 )){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='y' || A[6]=='Y')
		 {
		 	for(col=1;col<=7; col++){                            //Y
        if(col==1 && row==1 || col==2 && row==2 || col==3 && row==3 ||(row==4 || row==5 || row==6 || row==7) && col==4 || col==5 &&  row==3 || col==6 && row==2 || col==7 && row==1 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[6]=='z' || A[6]=='Z')
		 {
		 	for(col=1;col<=7; col++){                            //Z
        if(row==1 || row==7 || row==2 && col==6 || row==3 && col==5 || row==4 && col==4 || row==5 && col==3|| row==6 && col==2 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 
		 	if(A[7]=='a' || A[7]=='A')
		{
			 for(col=1;col<=7; col++){                            //A
        if(row==1 || row==4 || col==1 || col==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		}
		 else if(A[7]=='b' || A[7]=='B')
		 {
		 	 for(col=1;col<=7; col++){                            //B
        if(row==1 || row==4 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='c' || A[7]=='C')
		 {
		 		 for(col=1;col<=7; col++){                            //C
        if(row==1 || col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='d' || A[7]=='D')
		 {
		 		 for(col=1;col<=7; col++){                            //D
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='e' || A[7]=='E')
		 {
		 		 for(col=1;col<=7; col++){                            //E
        if(row==1 || row==4 || col==1  || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='f' || A[7]=='F')
		 {
		 		 for(col=1;col<=7; col++){                            //F
        if(row==1 || row==4 || col==1 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='g' || A[7]=='G')
		 {
		 	for(col=1;col<=7; col++){                              //G
        if(row==1 || row==7 || row==4 && (col>=4 && col<=7 ) || row==5 && col==7  || col==1 || row==6 && col==7 )
       cout<<"*";
       else
        cout<<" ";
    } cout<<"   ";
		 }
		 else if(A[7]=='h' || A[7]=='H')
		 {
		 		 for(col=1;col<=7; col++){                            //H
        if( row==4 || col==1 || col==7 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='i' || A[7]=='I')
		 {
		 		 for(col=1;col<=7; col++){                            //I
        if(row==1 || col==4 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='j' || A[7]=='J')
		 {
		 		 for(col=1;col<=7; col++){                            //J
        if(row==1 || col==4 || row==7 && (col==1 || col==2 || col==3 ) || col==1 && ( row==6 || row==5)){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='k' || A[7]=='K')
		 {
		 	for(col=1;col<=7; col++){                              //K
        if(row==1 && col==7||  row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==5 || row==3 && col==3 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[7]=='l' || A[7]=='L')
		 {
		 		 for(col=1;col<=7; col++){                            //L
        if( col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='m' || A[7]=='M')
		 {
		 	for(col=1;col<=7; col++){                            //M
        if(col==1 || col==7 || row==2 && (col==2 || col==6) || row==3 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='n' || A[7]=='N')
		 {
		 	for(col=1;col<=7; col++){                            //N
        if(col==1 || col==7 || row==2 && (col==2) || row==3 && (col==3) || row==4 && col==4 || row==5 && col==5 || row==6 && col==6 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='o' || A[7]=='O')
		 {
		 		 for(col=1;col<=7; col++){                            //O
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='p' || A[7]=='P')
		 {
		 		 for(col=1;col<=7; col++){                            //P
        if(row==1 || col==1 || col==7 && (row==2 || row==3) || row==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='q' || A[7]=='Q')
		 {
		 		 for(col=1;col<=7; col++){                            //Q
        if(row==1 || row==5 || col==1 && (row==2 ||row==3 || row==4 ) || col==7 && (row==2 ||row==3 || row==4) || col==6 && row==6 || col==7 && row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='r' || A[7]=='R')
		 {
		 	 for(col=1;col<=7; col++){                              //R
        if(row==1 || row==4 || row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==7 || row==3 && col==7 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[7]=='s' || A[7]=='S')
		 {
		 	for(col=1;col<=7; col++){                              //S
        if(row==1 || row==4 || row==2 && col==1 || row==3 && col==1|| row==5 && col==7 ||row==6 && col==7 || row==7 )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   "; 
		 }
		 else if(A[7]=='t' || A[7]=='T')
		  {
		 		 for(col=1;col<=7; col++){                            //T
        if(row==1 || col==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='u' || A[7]=='U')
		  {
		 		 for(col=1;col<=7; col++){                            //U
        if(
		
		 col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='v' || A[7]=='V')
		 {
		 	for(col=1;col<=7; col++){                              //V
        if(row==1 && col==1 || row==3 && col==2 || row==5 && col==3 || row==7 && col==4 || row==1 && col==7 || row==3 && col==6 || row==5 && col==5   )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[7]=='w' || A[7]=='W')
		 {
		 	for(col=1;col<=7; col++){                            //W
        if(col==1 || col==7 || row==6 && (col==2 || col==6) || row==5 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='x' || A[7]=='X')
		 {
		 	for(col=1;col<=7; col++){                            //X
        if(col==1 && (row==1 || row==7)|| col==2 && (row==2 || row==6 ) || col==3 && (row==3 || row==5)||row==4 && col==4 || col==7 && (row==1 || row==7)|| col==6 && (row==2 || row==6 ) || col==5 && (row==3 || row==5 )){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='y' || A[7]=='Y')
		 {
		 	for(col=1;col<=7; col++){                            //Y
        if(col==1 && row==1 || col==2 && row==2 || col==3 && row==3 ||(row==4 || row==5 || row==6 || row==7) && col==4 || col==5 &&  row==3 || col==6 && row==2 || col==7 && row==1 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[7]=='z' || A[7]=='Z')
		 {
		 	for(col=1;col<=7; col++){                            //Z
        if(row==1 || row==7 || row==2 && col==6 || row==3 && col==5 || row==4 && col==4 || row==5 && col==3|| row==6 && col==2 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 
		 	if(A[8]=='a' || A[8]=='A')
		{
			 for(col=1;col<=7; col++){                            //A
        if(row==1 || row==4 || col==1 || col==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		}
		 else if(A[8]=='b' || A[8]=='B')
		 {
		 	 for(col=1;col<=7; col++){                            //B
        if(row==1 || row==4 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='c' || A[8]=='C')
		 {
		 		 for(col=1;col<=7; col++){                            //C
        if(row==1 || col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='d' || A[8]=='D')
		 {
		 		 for(col=1;col<=7; col++){                            //D
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='e' || A[8]=='E')
		 {
		 		 for(col=1;col<=7; col++){                            //E
        if(row==1 || row==4 || col==1  || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='f' || A[8]=='F')
		 {
		 		 for(col=1;col<=7; col++){                            //F
        if(row==1 || row==4 || col==1 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='g' || A[8]=='G')
		 {
		 	for(col=1;col<=7; col++){                              //G
        if(row==1 || row==7 || row==4 && (col>=4 && col<=7 ) || row==5 && col==7  || col==1 || row==6 && col==7 )
       cout<<"*";
       else
        cout<<" ";
    } cout<<"   ";
		 }
		 else if(A[8]=='h' || A[8]=='H')
		 {
		 		 for(col=1;col<=7; col++){                            //H
        if( row==4 || col==1 || col==7 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='i' || A[8]=='I')
		 {
		 		 for(col=1;col<=7; col++){                            //I
        if(row==1 || col==4 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='j' || A[8]=='J')
		 {
		 		 for(col=1;col<=7; col++){                            //J
        if(row==1 || col==4 || row==7 && (col==1 || col==2 || col==3 ) || col==1 && ( row==6 || row==5)){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='k' || A[8]=='K')
		 {
		 	for(col=1;col<=7; col++){                              //K
        if(row==1 && col==7||  row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==5 || row==3 && col==3 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[8]=='l' || A[8]=='L')
		 {
		 		 for(col=1;col<=7; col++){                            //L
        if( col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='m' || A[8]=='M')
		 {
		 	for(col=1;col<=7; col++){                            //M
        if(col==1 || col==7 || row==2 && (col==2 || col==6) || row==3 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='n' || A[8]=='N')
		 {
		 	for(col=1;col<=7; col++){                            //N
        if(col==1 || col==7 || row==2 && (col==2) || row==3 && (col==3) || row==4 && col==4 || row==5 && col==5 || row==6 && col==6 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='o' || A[8]=='O')
		 {
		 		 for(col=1;col<=7; col++){                            //O
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='p' || A[8]=='P')
		 {
		 		 for(col=1;col<=7; col++){                            //P
        if(row==1 || col==1 || col==7 && (row==2 || row==3) || row==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='q' || A[8]=='Q')
		 {
		 		 for(col=1;col<=7; col++){                            //Q
        if(row==1 || row==5 || col==1 && (row==2 ||row==3 || row==4 ) || col==7 && (row==2 ||row==3 || row==4) || col==6 && row==6 || col==7 && row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='r' || A[8]=='R')
		 {
		 	 for(col=1;col<=7; col++){                              //R
        if(row==1 || row==4 || row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==7 || row==3 && col==7 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[8]=='s' || A[8]=='S')
		 {
		 	for(col=1;col<=7; col++){                              //S
        if(row==1 || row==4 || row==2 && col==1 || row==3 && col==1|| row==5 && col==7 ||row==6 && col==7 || row==7 )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   "; 
		 }
		 else if(A[8]=='t' || A[8]=='T')
		  {
		 		 for(col=1;col<=7; col++){                            //T
        if(row==1 || col==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='u' || A[8]=='U')
		  {
		 		 for(col=1;col<=7; col++){                            //U
        if(
		
		 col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='v' || A[8]=='V')
		 {
		 	for(col=1;col<=7; col++){                              //V
        if(row==1 && col==1 || row==3 && col==2 || row==5 && col==3 || row==7 && col==4 || row==1 && col==7 || row==3 && col==6 || row==5 && col==5   )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[8]=='w' || A[8]=='W')
		 {
		 	for(col=1;col<=7; col++){                            //W
        if(col==1 || col==7 || row==6 && (col==2 || col==6) || row==5 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='x' || A[8]=='X')
		 {
		 	for(col=1;col<=7; col++){                            //X
        if(col==1 && (row==1 || row==7)|| col==2 && (row==2 || row==6 ) || col==3 && (row==3 || row==5)||row==4 && col==4 || col==7 && (row==1 || row==7)|| col==6 && (row==2 || row==6 ) || col==5 && (row==3 || row==5 )){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='y' || A[8]=='Y')
		 {
		 	for(col=1;col<=7; col++){                            //Y
        if(col==1 && row==1 || col==2 && row==2 || col==3 && row==3 ||(row==4 || row==5 || row==6 || row==7) && col==4 || col==5 &&  row==3 || col==6 && row==2 || col==7 && row==1 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[8]=='z' || A[8]=='Z')
		 {
		 	for(col=1;col<=7; col++){                            //Z
        if(row==1 || row==7 || row==2 && col==6 || row==3 && col==5 || row==4 && col==4 || row==5 && col==3|| row==6 && col==2 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 
		 	if(A[9]=='a' || A[9]=='A')
		{
			 for(col=1;col<=7; col++){                            //A
        if(row==1 || row==4 || col==1 || col==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		}
		 else if(A[9]=='b' || A[9]=='B')
		 {
		 	 for(col=1;col<=7; col++){                            //B
        if(row==1 || row==4 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='c' || A[9]=='C')
		 {
		 		 for(col=1;col<=7; col++){                            //C
        if(row==1 || col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='d' || A[9]=='D')
		 {
		 		 for(col=1;col<=7; col++){                            //D
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='e' || A[9]=='E')
		 {
		 		 for(col=1;col<=7; col++){                            //E
        if(row==1 || row==4 || col==1  || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='f' || A[9]=='F')
		 {
		 		 for(col=1;col<=7; col++){                            //F
        if(row==1 || row==4 || col==1 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='g' || A[9]=='G')
		 {
		 	for(col=1;col<=7; col++){                              //G
        if(row==1 || row==7 || row==4 && (col>=4 && col<=7 ) || row==5 && col==7  || col==1 || row==6 && col==7 )
       cout<<"*";
       else
        cout<<" ";
    } cout<<"   ";
		 }
		 else if(A[9]=='h' || A[9]=='H')
		 {
		 		 for(col=1;col<=7; col++){                            //H
        if( row==4 || col==1 || col==7 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='i' || A[9]=='I')
		 {
		 		 for(col=1;col<=7; col++){                            //I
        if(row==1 || col==4 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='j' || A[9]=='J')
		 {
		 		 for(col=1;col<=7; col++){                            //J
        if(row==1 || col==4 || row==7 && (col==1 || col==2 || col==3 ) || col==1 && ( row==6 || row==5)){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='k' || A[9]=='K')
		 {
		 	for(col=1;col<=7; col++){                              //K
        if(row==1 && col==7||  row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==5 || row==3 && col==3 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[9]=='l' || A[9]=='L')
		 {
		 		 for(col=1;col<=7; col++){                            //L
        if( col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='m' || A[9]=='M')
		 {
		 	for(col=1;col<=7; col++){                            //M
        if(col==1 || col==7 || row==2 && (col==2 || col==6) || row==3 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='n' || A[9]=='N')
		 {
		 	for(col=1;col<=7; col++){                            //N
        if(col==1 || col==7 || row==2 && (col==2) || row==3 && (col==3) || row==4 && col==4 || row==5 && col==5 || row==6 && col==6 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='o' || A[9]=='O')
		 {
		 		 for(col=1;col<=7; col++){                            //O
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='p' || A[9]=='P')
		 {
		 		 for(col=1;col<=7; col++){                            //P
        if(row==1 || col==1 || col==7 && (row==2 || row==3) || row==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='q' || A[9]=='Q')
		 {
		 		 for(col=1;col<=7; col++){                            //Q
        if(row==1 || row==5 || col==1 && (row==2 ||row==3 || row==4 ) || col==7 && (row==2 ||row==3 || row==4) || col==6 && row==6 || col==7 && row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='r' || A[9]=='R')
		 {
		 	 for(col=1;col<=7; col++){                              //R
        if(row==1 || row==4 || row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==7 || row==3 && col==7 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[9]=='s' || A[9]=='S')
		 {
		 	for(col=1;col<=7; col++){                              //S
        if(row==1 || row==4 || row==2 && col==1 || row==3 && col==1|| row==5 && col==7 ||row==6 && col==7 || row==7 )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   "; 
		 }
		 else if(A[9]=='t' || A[9]=='T')
		  {
		 		 for(col=1;col<=7; col++){                            //T
        if(row==1 || col==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='u' || A[9]=='U')
		  {
		 		 for(col=1;col<=7; col++){                            //U
        if(
		
		 col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='v' || A[9]=='V')
		 {
		 	for(col=1;col<=7; col++){                              //V
        if(row==1 && col==1 || row==3 && col==2 || row==5 && col==3 || row==7 && col==4 || row==1 && col==7 || row==3 && col==6 || row==5 && col==5   )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[9]=='w' || A[9]=='W')
		 {
		 	for(col=1;col<=7; col++){                            //W
        if(col==1 || col==7 || row==6 && (col==2 || col==6) || row==5 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='x' || A[9]=='X')
		 {
		 	for(col=1;col<=7; col++){                            //X
        if(col==1 && (row==1 || row==7)|| col==2 && (row==2 || row==6 ) || col==3 && (row==3 || row==5)||row==4 && col==4 || col==7 && (row==1 || row==7)|| col==6 && (row==2 || row==6 ) || col==5 && (row==3 || row==5 )){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='y' || A[9]=='Y')
		 {
		 	for(col=1;col<=7; col++){                            //Y
        if(col==1 && row==1 || col==2 && row==2 || col==3 && row==3 ||(row==4 || row==5 || row==6 || row==7) && col==4 || col==5 &&  row==3 || col==6 && row==2 || col==7 && row==1 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[9]=='z' || A[9]=='Z')
		 {
		 	for(col=1;col<=7; col++){                            //Z
        if(row==1 || row==7 || row==2 && col==6 || row==3 && col==5 || row==4 && col==4 || row==5 && col==3|| row==6 && col==2 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 
		 	if(A[10]=='a' || A[10]=='A')
		{
			 for(col=1;col<=7; col++){                            //A
        if(row==1 || row==4 || col==1 || col==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		}
		 else if(A[10]=='b' || A[10]=='B')
		 {
		 	 for(col=1;col<=7; col++){                            //B
        if(row==1 || row==4 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='c' || A[10]=='C')
		 {
		 		 for(col=1;col<=7; col++){                            //C
        if(row==1 || col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='d' || A[10]=='D')
		 {
		 		 for(col=1;col<=7; col++){                            //D
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='e' || A[10]=='E')
		 {
		 		 for(col=1;col<=7; col++){                            //E
        if(row==1 || row==4 || col==1  || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='f' || A[10]=='F')
		 {
		 		 for(col=1;col<=7; col++){                            //F
        if(row==1 || row==4 || col==1 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='g' || A[10]=='G')
		 {
		 	for(col=1;col<=7; col++){                              //G
        if(row==1 || row==7 || row==4 && (col>=4 && col<=7 ) || row==5 && col==7  || col==1 || row==6 && col==7 )
       cout<<"*";
       else
        cout<<" ";
    } cout<<"   ";
		 }
		 else if(A[10]=='h' || A[10]=='H')
		 {
		 		 for(col=1;col<=7; col++){                            //H
        if( row==4 || col==1 || col==7 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='i' || A[10]=='I')
		 {
		 		 for(col=1;col<=7; col++){                            //I
        if(row==1 || col==4 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='j' || A[10]=='J')
		 {
		 		 for(col=1;col<=7; col++){                            //J
        if(row==1 || col==4 || row==7 && (col==1 || col==2 || col==3 ) || col==1 && ( row==6 || row==5)){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='k' || A[10]=='K')
		 {
		 	for(col=1;col<=7; col++){                              //K
        if(row==1 && col==7||  row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==5 || row==3 && col==3 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[10]=='l' || A[10]=='L')
		 {
		 		 for(col=1;col<=7; col++){                            //L
        if( col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='m' || A[10]=='M')
		 {
		 	for(col=1;col<=7; col++){                            //M
        if(col==1 || col==7 || row==2 && (col==2 || col==6) || row==3 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='n' || A[10]=='N')
		 {
		 	for(col=1;col<=7; col++){                            //N
        if(col==1 || col==7 || row==2 && (col==2) || row==3 && (col==3) || row==4 && col==4 || row==5 && col==5 || row==6 && col==6 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='o' || A[10]=='O')
		 {
		 		 for(col=1;col<=7; col++){                            //O
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='p' || A[10]=='P')
		 {
		 		 for(col=1;col<=7; col++){                            //P
        if(row==1 || col==1 || col==7 && (row==2 || row==3) || row==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='q' || A[10]=='Q')
		 {
		 		 for(col=1;col<=7; col++){                            //Q
        if(row==1 || row==5 || col==1 && (row==2 ||row==3 || row==4 ) || col==7 && (row==2 ||row==3 || row==4) || col==6 && row==6 || col==7 && row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='r' || A[10]=='R')
		 {
		 	 for(col=1;col<=7; col++){                              //R
        if(row==1 || row==4 || row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==7 || row==3 && col==7 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[10]=='s' || A[10]=='S')
		 {
		 	for(col=1;col<=7; col++){                              //S
        if(row==1 || row==4 || row==2 && col==1 || row==3 && col==1|| row==5 && col==7 ||row==6 && col==7 || row==7 )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   "; 
		 }
		 else if(A[10]=='t' || A[10]=='T')
		  {
		 		 for(col=1;col<=7; col++){                            //T
        if(row==1 || col==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='u' || A[10]=='U')
		  {
		 		 for(col=1;col<=7; col++){                            //U
        if(
		
		 col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='v' || A[10]=='V')
		 {
		 	for(col=1;col<=7; col++){                              //V
        if(row==1 && col==1 || row==3 && col==2 || row==5 && col==3 || row==7 && col==4 || row==1 && col==7 || row==3 && col==6 || row==5 && col==5   )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[10]=='w' || A[10]=='W')
		 {
		 	for(col=1;col<=7; col++){                            //W
        if(col==1 || col==7 || row==6 && (col==2 || col==6) || row==5 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='x' || A[10]=='X')
		 {
		 	for(col=1;col<=7; col++){                            //X
        if(col==1 && (row==1 || row==7)|| col==2 && (row==2 || row==6 ) || col==3 && (row==3 || row==5)||row==4 && col==4 || col==7 && (row==1 || row==7)|| col==6 && (row==2 || row==6 ) || col==5 && (row==3 || row==5 )){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='y' || A[10]=='Y')
		 {
		 	for(col=1;col<=7; col++){                            //Y
        if(col==1 && row==1 || col==2 && row==2 || col==3 && row==3 ||(row==4 || row==5 || row==6 || row==7) && col==4 || col==5 &&  row==3 || col==6 && row==2 || col==7 && row==1 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[10]=='z' || A[10]=='Z')
		 {
		 	for(col=1;col<=7; col++){                            //Z
        if(row==1 || row==7 || row==2 && col==6 || row==3 && col==5 || row==4 && col==4 || row==5 && col==3|| row==6 && col==2 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 
		 	if(A[11]=='a' || A[11]=='A')
		{
			 for(col=1;col<=7; col++){                            //A
        if(row==1 || row==4 || col==1 || col==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		}
		 else if(A[11]=='b' || A[11]=='B')
		 {
		 	 for(col=1;col<=7; col++){                            //B
        if(row==1 || row==4 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='c' || A[11]=='C')
		 {
		 		 for(col=1;col<=7; col++){                            //C
        if(row==1 || col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='d' || A[11]=='D')
		 {
		 		 for(col=1;col<=7; col++){                            //D
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='e' || A[11]=='E')
		 {
		 		 for(col=1;col<=7; col++){                            //E
        if(row==1 || row==4 || col==1  || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='f' || A[11]=='F')
		 {
		 		 for(col=1;col<=7; col++){                            //F
        if(row==1 || row==4 || col==1 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='g' || A[11]=='G')
		 {
		 	for(col=1;col<=7; col++){                              //G
        if(row==1 || row==7 || row==4 && (col>=4 && col<=7 ) || row==5 && col==7  || col==1 || row==6 && col==7 )
       cout<<"*";
       else
        cout<<" ";
    } cout<<"   ";
		 }
		 else if(A[11]=='h' || A[11]=='H')
		 {
		 		 for(col=1;col<=7; col++){                            //H
        if( row==4 || col==1 || col==7 ){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='i' || A[11]=='I')
		 {
		 		 for(col=1;col<=7; col++){                            //I
        if(row==1 || col==4 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='j' || A[11]=='J')
		 {
		 		 for(col=1;col<=7; col++){                            //J
        if(row==1 || col==4 || row==7 && (col==1 || col==2 || col==3 ) || col==1 && ( row==6 || row==5)){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='k' || A[11]=='K')
		 {
		 	for(col=1;col<=7; col++){                              //K
        if(row==1 && col==7||  row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==5 || row==3 && col==3 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[11]=='l' || A[11]=='L')
		 {
		 		 for(col=1;col<=7; col++){                            //L
        if( col==1 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='m' || A[11]=='M')
		 {
		 	for(col=1;col<=7; col++){                            //M
        if(col==1 || col==7 || row==2 && (col==2 || col==6) || row==3 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='n' || A[11]=='N')
		 {
		 	for(col=1;col<=7; col++){                            //N
        if(col==1 || col==7 || row==2 && (col==2) || row==3 && (col==3) || row==4 && col==4 || row==5 && col==5 || row==6 && col==6 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='o' || A[11]=='O')
		 {
		 		 for(col=1;col<=7; col++){                            //O
        if(row==1 || col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='p' || A[11]=='P')
		 {
		 		 for(col=1;col<=7; col++){                            //P
        if(row==1 || col==1 || col==7 && (row==2 || row==3) || row==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='q' || A[11]=='Q')
		 {
		 		 for(col=1;col<=7; col++){                            //Q
        if(row==1 || row==5 || col==1 && (row==2 ||row==3 || row==4 ) || col==7 && (row==2 ||row==3 || row==4) || col==6 && row==6 || col==7 && row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='r' || A[11]=='R')
		 {
		 	 for(col=1;col<=7; col++){                              //R
        if(row==1 || row==4 || row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==7 || row==3 && col==7 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[11]=='s' || A[11]=='S')
		 {
		 	for(col=1;col<=7; col++){                              //S
        if(row==1 || row==4 || row==2 && col==1 || row==3 && col==1|| row==5 && col==7 ||row==6 && col==7 || row==7 )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   "; 
		 }
		 else if(A[11]=='t' || A[11]=='T')
		  {
		 		 for(col=1;col<=7; col++){                            //T
        if(row==1 || col==4){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='u' || A[11]=='U')
		  {
		 		 for(col=1;col<=7; col++){                            //U
        if(
		
		 col==1 || col==7 || row==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='v' || A[11]=='V')
		 {
		 	for(col=1;col<=7; col++){                              //V
        if(row==1 && col==1 || row==3 && col==2 || row==5 && col==3 || row==7 && col==4 || row==1 && col==7 || row==3 && col==6 || row==5 && col==5   )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
		 }
		 else if(A[11]=='w' || A[11]=='W')
		 {
		 	for(col=1;col<=7; col++){                            //W
        if(col==1 || col==7 || row==6 && (col==2 || col==6) || row==5 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='x' || A[11]=='X')
		 {
		 	for(col=1;col<=7; col++){                            //X
        if(col==1 && (row==1 || row==7)|| col==2 && (row==2 || row==6 ) || col==3 && (row==3 || row==5)||row==4 && col==4 || col==7 && (row==1 || row==7)|| col==6 && (row==2 || row==6 ) || col==5 && (row==3 || row==5 )){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='y' || A[11]=='Y')
		 {
		 	for(col=1;col<=7; col++){                            //Y
        if(col==1 && row==1 || col==2 && row==2 || col==3 && row==3 ||(row==4 || row==5 || row==6 || row==7) && col==4 || col==5 &&  row==3 || col==6 && row==2 || col==7 && row==1 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 else if(A[11]=='z' || A[11]=='Z')
		 {
		 	for(col=1;col<=7; col++){                            //Z
        if(row==1 || row==7 || row==2 && col==6 || row==3 && col==5 || row==4 && col==4 || row==5 && col==3|| row==6 && col==2 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
		 }
		 
		 cout<<endl;
		 
	
	}
	cout<<endl;
	
	if(num>2 && num<11)
	{
		A=B;
		num=num+10;
		goto new_word;
	}	
	else if(num==2)
	{
	A=B;
		num=num+100;
		goto new_word;	
	}
		if(num>10 && num<21)
	{
		A.clear();
		A=C;
		num=num+10;
		goto new_word;
	}	
	if(num==23)
	{
		num=num+100;
	}
		if(num>20 && num<31)
	{
		A.clear();
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
		A.clear();
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
		A.clear();
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
		A.clear();
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
		A.clear();
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
		A.clear();
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
		A.clear();
		A=J;
		num=num+10;
		goto new_word;
	}	
}
else
cout<<"you entered invalid quantity of words";
	
	return 0;
	
}

