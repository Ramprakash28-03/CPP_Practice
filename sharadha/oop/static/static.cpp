#include<iostream>
using namespace std;
class staticVariable{
    public:
    // Static variable is the type of variable which declared only once in the life time of the code then it can not be declared in any line of the code
    void countVariable(){
        static int count=0;
        count++;
        cout<<count<<"\n";
    }
};
int main(int argc, char const *argv[])
{
    staticVariable S;
    S.countVariable();
    S.countVariable();
    S.countVariable();
    return 0;
}
