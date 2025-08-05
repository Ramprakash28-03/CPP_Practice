#include<bits/stdc++.h>
using namespace std;
class dynamic_matrix{
    public:
    void dynamicMatrix(){
    int row,col;
    cout<<"Give the number of rows";
    cin>>row;
    cout<<"Give the number of column";
    cin>>col;
    int* *matrix = new int*[row];
    for(int i=0; i<row; i++){
        matrix[i]=new int[col];
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    }
};
int main(int argc, char const *argv[])
{
    dynamic_matrix D;
    D.dynamicMatrix();
    return 0;
}
