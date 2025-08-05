#include<iostream>
using namespace std;
class convert{
    public:
    void toUpper(char arr[],int n){
        for(int i=0;i<n;i++){
            if(arr[i]>='a' && arr[i]<='z')
            arr[i]=arr[i]-'a' + 'A';
        }
    }
};
int main(){
    char arr[12]="Ram prakash";
    convert C;
    C.toUpper(arr,12);
    cout<<arr;
    return 0;
}