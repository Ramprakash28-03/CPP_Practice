// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// class nextGreater{
//     public:
//     vector<int> nxtgtr(vector<int>& arr){
//         vector<int> gtr(arr.size(),0);
//         stack<int> s;
//         for(int i=arr.size()-1;i>=0;i--){
//             while(s.size()>0 && s.top()<=arr[i]){
//                 s.pop();

//             }
//             if(s.empty()){
//                 gtr[i] = -1;
//             }
//             else{
//                 gtr[i]=s.top();
//             }
//             s.push(arr[i]);
//         }
//         for(int i=0;i<gtr.size();i++)
//         cout<<gtr[i]<<" ";
//         return gtr;
//     }
// };
// int main(){
//     vector<int> arr={1,2,2,343,141,5,1,51,13,5};
//     nextGreater N;
//     N.nxtgtr(arr);
//     return 0;
// }


#include <vector>

#include <stack>

#include <iostream>

using namespace std;

vector < int > next_higher_peak(vector < int > & arr) {
    vector < int > gtr(arr.size(),0);
    stack < int > s;
    for (int i = arr.size() - 1; i >= 0; i--) {
        while (s.size() > 0 && s.top() <= arr[i]) {
            s.pop();

        }
        if (s.empty()) {
            gtr[i] = -1;
        }
        else {
            gtr[i] = s.top();
        }
        s.push(arr[i]);
    }
    return gtr;
}

int main() {
    int n;

    cin >> n; // Read the number of peaks from the user

    vector < int > heights(n);

    for (int i = 0; i < n; ++i) {
        cin >> heights[i]; // Read each peak height from the user
    }

    vector < int > result = next_higher_peak(heights); // Call the function to get the result

    // Print result

    for (int height: result) {
        cout << height << " "; // Output each element in the result vector
    }
    cout << endl;

    return 0;
}
