// Agar hum kisi bhi class ke variable ko static declar kar de to wo sirt ek war declear hoga chahe hum kitne hi bar object banaye 
// wo bar bar declare nahi hoga bar bar object banane par bhi
#include<iostream>
using namespace std;
class nums{
    public:
  int count = 0;
    void utilization(){
        cout<<count<<"\n";
    }
};
int main(int argc, char const *argv[])
{
    nums N;
    nums n2;
    nums n3;
    cout<<++N.count;

    return 0;
}
