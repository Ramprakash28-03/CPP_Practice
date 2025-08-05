#include<iostream> 
#include<string>
using namespace std; 
class Constructors{
    public:
    Constructors(string Name,int Age){
         age=Age;
         name=Name;
    }
    int age;
    string name;
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    
   
};
int main(){
    Constructors Cc("ram",30);
   cout<<Cc.getAge();
   return 0;

}