 #include<iostream>
 using namespace std;
 int main()
 {
 
 
 int row,col,space;
    for(row=1;row<=7;row++)                     
    { for(col=1;col<=7; col++){                              //G
        if(row==1 || row==7 || row==4 && (col>=4 && col<=7 ) || row==5 && col==7  || col==1 || row==6 && col==7 )
       cout<<"*";
       else
        cout<<" ";
    } cout<<"   ";
       for(col=1;col<=7; col++){                            //A
        if(row==1 || row==4 || col==1 || col==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
          for(col=1;col<=7; col++){                              //U
        if(row==7 ||  col==1 || col==7 )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
    for(col=1;col<=7; col++){                              //R
        if(row==1 || row==4 || row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==7 || row==3 && col==7 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
    for(col=1;col<=7; col++){                            //A
        if(row==1 || row==4 || col==1 || col==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
        for(col=1;col<=7; col++){                              //v
        if(row==1 && col==1 || row==3 && col==2 || row==5 && col==3 || row==7 && col==4 || row==1 && col==7 || row==3 && col==6 || row==5 && col==5   )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
       
       
       cout<<"\n";
       
    
} cout<<"\n\n";
 for(row=1;row<=7;row++) {
                     
    for(col=1;col<=7; col++){                              //T
        if(row==1 ||  col==4  )
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
    for(col=1;col<=7; col++){                              //I
        if(row==1 ||  col==4  || row==7)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
       for(col=1;col<=7; col++){                            //W
        if(col==1 || col==7 || row==6 && (col==2 || col==6) || row==5 && (col==3 || col==5) || row==4 && col==4 ){
       cout<<"*";}
           else
           cout<<" ";
       }cout<<"   ";
       for(col=1;col<=7; col++){                            //A
        if(row==1 || row==4 || col==1 || col==7){
       cout<<"*"; }
           else
            cout<<" ";
       }cout<<"   ";
        for(col=1;col<=7; col++){                              //R
        if(row==1 || row==4 || row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==7 || row==3 && col==7 || col==1)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
    for(col=1;col<=7; col++){                              //I
        if(row==1 ||  col==4  || row==7)
       cout<<"*";
       else
        cout<<" ";
    }cout<<"   ";
       
       cout<<"\n";
       
    
}
return 0;
}
