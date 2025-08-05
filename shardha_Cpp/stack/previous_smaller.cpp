// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// class previousSmaller{
//     public:
//     vector<int> prevSml(vector<int>& arr){
//         vector<int> sml(arr.size(),0);
//         stack<int> s;
//         for(int i=0;i<arr.size();i++){
//             while(s.size()>0 && s.top()>=arr.at(i)){
//                 s.pop();
//             }
//             if(s.empty()){
//                 sml[i]=-1;
//             }
//             else{
//                 sml[i]=s.top();
//             }
//             s.push(arr[i]);
//         }
//         return sml;
//     }

// };
// int main(){
//     vector<int> arr={1,2,3,4,2,6,7,8,9,10,11};
//     previousSmaller P;
//     for(int val : P.prevSml(arr)){
//         cout<<val<<" ";
//     }
//     return 0;
// }
#include <iostream>
#include <algorithm> // for reverse()
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Use reverse() from <algorithm>
    reverse(arr, arr + n);  // Reverses the array in place

    // Print the reversed array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<n;
    return 0;
}
