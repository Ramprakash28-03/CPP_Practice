#include<iostream>
#include<vector>
#include<string>
using namespace std;
class pattern{
    public:
    void print(string wd){
        int row,col;
        for(row=1;row<8;row++){
            for(int i=0;i<wd.size();i++)
            {
                char ch = tolower(wd[i]);
                switch (ch)
                {
                case 'a':
                    for(col=1;col<=7; col++){                            //A
                if(row==1 || row==4 || col==1 || col==7){
            cout<<"*"; }
                else
                    cout<<" ";
            }cout<<"   ";
                    break;
                case 'b':
                    for(col=1;col<=7; col++){                            //B
            if(row==1 || row==4 || col==1 || col==7 || row==7){
        cout<<"*"; }
            else
                cout<<" ";
        }cout<<"   ";
                    break;
                case 'c':
                    for(col=1;col<=7; col++){                            //C
            if(row==1 || col==1 || row==7){
        cout<<"*"; }
            else
                cout<<" ";
        }cout<<"   ";
                    break;
                case 'd':
                    for(col=1;col<=7; col++){                            //D
            if(row==1 || col==1 || col==7 || row==7){
        cout<<"*"; }
            else
                cout<<" ";
        }cout<<"   ";
                    break;
                case 'e':
                    for(col=1;col<=7; col++){                            //E
            if(row==1 || row==4 || col==1  || row==7){
        cout<<"*"; }
            else
                cout<<" ";
        }cout<<"   ";
                    break;
                case 'f':
                    for(col=1;col<=7; col++){                            //F
            if(row==1 || row==4 || col==1 ){
        cout<<"*"; }
            else
                cout<<" ";
        }cout<<"   ";
                    break;
                case 'g':
                    for(col=1;col<=7; col++){                              //G
            if(row==1 || row==7 || row==4 && (col>=4 && col<=7 ) || row==5 && col==7  || col==1 || row==6 && col==7 )
        cout<<"*";
        else
            cout<<" ";
            } cout<<"   ";
                    break;
                case 'h':
                    for(col=1;col<=7; col++){                            //H
            if( row==4 || col==1 || col==7 ){
        cout<<"*"; }
            else
                cout<<" ";
        }cout<<"   ";
                    break;
                case 'i':
                    for(col=1;col<=7; col++){                            //I
            if(row==1 || col==4 || row==7){
        cout<<"*"; }
            else
                cout<<" ";
        }cout<<"   ";
                    break;
                case 'j':
                    for(col=1;col<=7; col++){                            //J
            if(row==1 || col==4 || row==7 && (col==1 || col==2 || col==3 ) || col==1 && ( row==6 || row==5)){
        cout<<"*"; }
            else
                cout<<" ";
        }cout<<"   ";
                    break;
                case 'k':
                    for(col=1;col<=7; col++){                              //K
            if(row==1 && col==7||  row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==5 || row==3 && col==3 || col==1)
        cout<<"*";
        else
            cout<<" ";
        }cout<<"   ";
                    break;
                case 'l':
                    for(col=1;col<=7; col++){                            //L
            if( col==1 || row==7){
        cout<<"*"; }
            else
                cout<<" ";
        }cout<<"   ";
                    break;
                case 'm':
                    for(col=1;col<=7; col++){                            //M
            if(col==1 || col==7 || row==2 && (col==2 || col==6) || row==3 && (col==3 || col==5) || row==4 && col==4 ){
        cout<<"*";}
            else
            cout<<" ";
        }cout<<"   ";
                    break;
                case 'n':
                    for(col=1;col<=7; col++){                            //N
            if(col==1 || col==7 || row==2 && (col==2) || row==3 && (col==3) || row==4 && col==4 || row==5 && col==5 || row==6 && col==6 ){
        cout<<"*";}
            else
            cout<<" ";
        }cout<<"   ";
                    break;
                case 'o':
                    for(col=1;col<=7; col++){                            //O
            if(row==1 || col==1 || col==7 || row==7){
        cout<<"*"; }
            else
                cout<<" ";
        }cout<<"   ";
                    break;
                case 'p':
                    for(col=1;col<=7; col++){                            //P
            if(row==1 || col==1 || col==7 && (row==2 || row==3) || row==4){
        cout<<"*"; }
            else
                cout<<" ";
        }cout<<"   ";
                    break;
                case 'q':
                    for(col=1;col<=7; col++){                            //Q
            if(row==1 || row==5 || col==1 && (row==2 ||row==3 || row==4 ) || col==7 && (row==2 ||row==3 || row==4) || col==6 && row==6 || col==7 && row==7){
        cout<<"*"; }
            else
                cout<<" ";
        }cout<<"   ";
                    break;
                case 'r':
                    for(col=1;col<=7; col++){                              //R
            if(row==1 || row==4 || row==5 && col==3 || row==6 && col==5 || row==7 && col==7 ||row==2 && col==7 || row==3 && col==7 || col==1)
        cout<<"*";
        else
            cout<<" ";
        }cout<<"   ";
                    break;
                case 's':
                    for(col=1;col<=7; col++){                              //S
            if(row==1 || row==4 || row==2 && col==1 || row==3 && col==1|| row==5 && col==7 ||row==6 && col==7 || row==7 )
        cout<<"*";
        else
            cout<<" ";
        }cout<<"   "; 
                    break;
                case 't':
                    for(col=1;col<=7; col++){                            //T
            if(row==1 || col==4){
        cout<<"*"; }
            else
                cout<<" ";
        }cout<<"   ";
                    break;
                case 'u':
                    for(col=1;col<=7; col++){                            //U
            if(col==1 || col==7 || row==7){
        cout<<"*"; }
            else
                cout<<" ";
        }cout<<"   ";
                    break;
                case 'v':
                    for(col=1;col<=7; col++){                              //V
            if(row==1 && col==1 || row==3 && col==2 || row==5 && col==3 || row==7 && col==4 || row==1 && col==7 || row==3 && col==6 || row==5 && col==5   )
        cout<<"*";
        else
            cout<<" ";
        }cout<<"   ";
                    break;
                case 'w':
                    for(col=1;col<=7; col++){                            //W
            if(col==1 || col==7 || row==6 && (col==2 || col==6) || row==5 && (col==3 || col==5) || row==4 && col==4 ){
        cout<<"*";}
            else
            cout<<" ";
        }cout<<"   ";
                    break;
                case 'x':
                    for(col=1;col<=7; col++){                            //X
            if(col==1 && (row==1 || row==7)|| col==2 && (row==2 || row==6 ) || col==3 && (row==3 || row==5)||row==4 && col==4 || col==7 && (row==1 || row==7)|| col==6 && (row==2 || row==6 ) || col==5 && (row==3 || row==5 )){
        cout<<"*";}
            else
            cout<<" ";
        }cout<<"   ";
                    break;
                case 'y':
                    for(col=1;col<=7; col++){                            //Y
            if(col==1 && row==1 || col==2 && row==2 || col==3 && row==3 ||(row==4 || row==5 || row==6 || row==7) && col==4 || col==5 &&  row==3 || col==6 && row==2 || col==7 && row==1 ){
        cout<<"*";}
            else
            cout<<" ";
        }cout<<"   ";
                    break;
                case 'z':
                    for(col=1;col<=7; col++){                            //Z
            if(row==1 || row==7 || row==2 && col==6 || row==3 && col==5 || row==4 && col==4 || row==5 && col==3|| row==6 && col==2 ){
        cout<<"*";}
            else
            cout<<" ";
        }cout<<"   ";
                    break;
                
                default:
                    break;
                }
            }
            cout<<endl;
        }
    }
};

int main(){
    pattern p;
    int sz;
    cout<<"Give the number of words : ";
    cin>>sz;
    vector<string> words(sz,"");
    for(int i=0;i<sz;i++){

        cin>>words[i];
    }
    for(int i=0;i<sz;i++){
        p.print(words[i]);
        cout<<endl;
    }

    return 0;
}