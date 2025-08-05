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
