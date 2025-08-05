#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class fractionalKnapsack{
    public:
    // ye
    static bool compare(pair<double,int> ratio1,pair<double,int> ratio2){
        return ratio1.first>ratio2.first;
    }
    double knapsack(vector<int> val,vector<int> w,int capacity){
        int n=val.size();
        vector<pair<double,int>> ratio(n,make_pair(0,0));
        for(int i=0;i<n;i++){
            double ans = val[i]/(double)w[i];
            ratio[i] = make_pair(ans,i);
        }
        sort(ratio.begin(),ratio.end(),compare);
        // another method is 
        /*
        sort(ratio.begin(), ratio.end(), [](pair<double, int> a, pair<double, int> b) {
            return a.first > b.first;
        });

        */
        double ans=0 ;
        for(int i=0;i<n;i++){
            if(w[ratio[i].second]<=capacity){
                ans+=val[ratio[i].second];
                capacity-=w[ratio[i].second];
            }else{
                ans+=ratio[i].first*capacity;
                capacity = 0;
            }
        }
        return ans;
    }
};
int main()
{
    vector<int> val = {60,100,120},w={10,20,30};
    int capacity = 50;
    fractionalKnapsack f;
    cout<<"The maximum value is : "<<f.knapsack(val,w,capacity);
    return 0;
}
