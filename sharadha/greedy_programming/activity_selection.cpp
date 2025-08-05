#include<iostream>
#include<vector>
using namespace std;
class activitySelection{
    public:
    int maximumActivity(vector<int> start,vector<int> end){
        int count=1,endActivity=end[0];
        for(int i=1;i<start.size();i++){
            if(endActivity<=start[i]){
                count++;
                endActivity=end[i];
            }
        }
        return count;
    }
};
int main(int argc, char const *argv[])
{
    vector<int> st={1,2,4,6,3};
    vector<int> end={2,3,6,7,9};
    activitySelection A;
    cout<<A.maximumActivity({10,12,20},{20,25,30});
    return 0;
}
