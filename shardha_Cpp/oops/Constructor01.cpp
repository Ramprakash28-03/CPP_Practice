// There are three types of constructor  
// 1. non-parameterized constructor
// 2. paramaterized constructor
// 3. copy constructor
// This is the non-parameterized constructor because we can not give any parameter to the constructor
#include<iostream>
#include<string>
using namespace std;
class Constructor{
   public: 
    Constructor(){
        cout<<"Hello ! I am a constructor ";
    }
    public:
    int a;
    string b;
    void getNum(int num){
        a=num;
    }
    
};
int main(){
    Constructor C;
    return 0;

}