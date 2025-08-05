#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<list>
#include<limits>
#include<climits>
using namespace std;
class max_sub_array_sum{
    public:
    int max_sum(vector<int> arr){
        int mmax=0;
        for(int i=0;i<arr.size();i++){
            int cur_sum = 0;
            for(int end = i;end<arr.size();end++){
                cur_sum+=arr[end];
                mmax=max(cur_sum,mmax);
            }            
        }
        return mmax;
    }
    public:
    int max_sum_optimal(vector<int> arr){
        int cur_sum=0;
        int max_summ=0;
        for(int i=0;i<arr.size();i++){
            if(cur_sum<0){
                cur_sum=0;
            }
            cur_sum+=arr[i];
            max_summ=max(max_summ,cur_sum);
        }
        return max_summ;
    }
};
class major_element{
    public:
    int major_ele_bru(vector<int> arr){
        int count=0;
        for(int i=0;i<arr.size();i++){
            count=0;
            for(int j=0;j<arr.size();j++){
                if(arr[i]=arr[j]){
                    count++;
                }
            }
            if(count>(arr.size())/2)
            return arr[i];

        }
    }
    int major_ele_better(vector<int>& arr){
        int count=0;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]=arr[i-1]){
                count++;
            }
            else count=0;
            if(count>n/2)
            return arr[i];
        }
    }
    int major_ele_optimal(vector<int> arr){
        int ans=0,freq=0,n=arr.size();
        for(int i=0;i<n;i++){
            if(freq==0){
                ans=arr[i];
            }
            if(arr[i]==ans){
                freq++;
            }
            else freq--;
        }
        return ans;
    }
};
class x_to_power_n{
    public:
    int xPowN(int x,int n){
        int ans=1;
        while(n!=0){
            if(n%2==1){
                ans*=x;
            }
            x*=x;
            n/=2;
        }
        return ans;
    }

};
class time_to_buy{
    public:
    int max_profit(vector<int> arr){
        int profit=0,buy=arr[0];
        for(int i=0;i<arr.size();i++){
            buy=min(arr[i],buy);
            profit = max(profit,arr[i]-buy);
        }
        
        return profit;
    }
};
class productOfArrayExceptSelf{
    public:
    vector<int> products(vector<int> arr){
        vector<int> ans(arr.size(),1);
        int left =1;
        for(int i = 0 ;i < arr.size(); i++ ){
            ans[i] *= left;
            left *= arr[i];
        }
        int right = 1;
        for(int i = arr.size()-1; i >= 0; i--){
            ans[i] *= right;
            right *= arr[i];
        }
        return ans;
    }

};
class nqueensproblem{
    public:
    bool issafe(vector<string> &board,int row,int col,int n){
        //horizontal
        for(int i=0 ;i<n; i++){
            if(board[row][i] == 'Q'){
                return false;
            }
        }
        //vertical
        for(int j=0 ;j<n; j++){
            if(board[j][col] == 'Q'){
                return false;
            }
        }
        //left diagonal
        for(int i=row,j=col; i>=0  && j>=0 ; i--,j--){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
        //right diagonal
        for(int i=row,j=col; i>=0  && j<n ; i--,j++){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
        return true;   
    }
    void NQS(vector<string> &board, int row,int n,vector<vector<string>> &ans){
        if(row == n){
            ans.push_back({board});
            return ;
        }

        for(int j=0;j<n; j++){
            if(issafe(board,row,j,n)){
                board[row][j] = 'Q';
                NQS(board,row+1,n,ans);
                board[row][j] ='.';
            }
        }
    }
    public:
    vector<vector<string>> solve(int n){
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        NQS(board,0,n,ans);

        return ans;
    }

};
class rat{
    public:
    void solve(vector<vector<int>> &board,int row,int col,string path,vector<string> &ans){
        int n = board.size();
        if(row == n-1 && col == n-1 ){
            ans.push_back(path);
            return ;
        }
        if(row < 0 || col < 0 || col >=n || row >= n || board[row][col] == 0 || board[row][col] == -1){
            return ;
        }
        board[row][col] = -1;
        solve(board,row-1,col,path+"U",ans); // up
        solve(board,row+1,col,path+"D",ans); // down
        solve(board,row,col-1,path+"L",ans); // left
        solve(board,row,col+1,path+"R",ans); // right
        board[row][col] = 1;
    }
};
class merge_sort{
    void merge(vector<int> &arr, int st,int mid,int end){
        vector<int> temp;
        int i=st,j=mid+1;
        while( i <= mid && j <=end) {
            if(arr[i] >= arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else{
            temp.push_back(arr[j]);
            j++;
            }
        }
        while( i <= mid ) {
            temp.push_back(arr[i]);
            i++;
        }
        while( j <=end ) {
            temp.push_back(arr[j]);
            j++;
        }
        for(int idx=0;idx<temp.size();idx++){
            arr[st+idx] = temp[idx];
        }
    }
    public:
    void mergeSort(vector<int> &arr,int st,int end){
        int mid = st + (end-st)/2;
        if(st<end){
            mergeSort(arr,st,mid);
            mergeSort(arr,mid+1,end);
            merge(arr,st,mid,end);
        }
    }

};
class quick_sort{
    public : 
    int partition(vector<int>& arr,int st,int end){
        int idx=st-1;
        int pivot =  arr[end];
        for(int j = st; j<end ; j++){
            if(arr[j] <= pivot){
                idx++;
                swap(arr[idx],arr[j]);
            }
        }
        idx++;
        swap( arr[end],arr[idx]);
        return idx;
    }
    void quickSort(vector<int>& arr,int st,int end){
        if(st<end){
            int pivIdx = partition(arr,st,end);

            quickSort(arr,st,pivIdx-1);
            quickSort(arr,pivIdx+1,end);
        }
    }
};
class loops{
    public:
    void z_1(int n){
        bool val = true;
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1;j++){
                cout<<val;
                val = !val;
            }
            cout<<endl;
        }
    }
    void rom(int n){
        for(int i = 0; i<n; i++){
            for(int j=i+1;j<n; j++){
                cout<<" ";
            }
            for(int k=0;k<n; k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    void paladromic(int n){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                cout<<" ";
            }
            for(int j=i+1;j>0;j--){
                cout<<j;
            }
            for(int j=2;j<=i+1;j++){
               // if(j+1 == 1)continue;
                cout<<j;
            }
            cout<<endl;
        }
    }
};
class bubble_sort{
    public:
    void bbst(vector<int>& arr){
        int n = arr.size();
        for(int i=0; i<n; i++){
            bool flag = true;
            for(int j=0; j<n-i-1; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    flag = false;
                }
            }
            if(flag) break;
        }
    }
};
class selection_sort{
    public:
    void sss(vector<int> &arr){
        for(int i=0; i<arr.size()-1; i++){
            for(int j=i+1; j<arr.size(); j++){
                if(arr[i]>arr[j]){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
};
class mergee_sort{
    public:
    void merge(vector<int> &arr,int st, int mid,int end){
        vector<int> temp;
        int i=st,j=mid+1;
        while(i<=mid && j<=end){
            if(arr[i]>arr[j]){
                temp.push_back(arr[j]);
                j++;
            }
            else {
                temp.push_back(arr[i]);
                i++;
            }
        }
        while(i <= mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=end){
            temp.push_back(arr[j]);
            j++;
        }
        for(int idx=0; idx<temp.size(); idx++){
            arr[idx+st] = temp[idx];

        }
    }
    void mergeSort(vector<int>& arr,int st, int end){
        if(st<end){
            int mid = st + (end-st)/2;
            mergeSort(arr,st,mid);
            mergeSort(arr,mid+1,end);
            merge(arr,st,mid,end);
        }
    }
};
class mrg{
    public: 
    void merge(vector<int> &arr, int st, int mid, int end){
        vector<int> temp;
        int i=st,j=mid+1;
        while(i <= mid && j<=end ){
            if(arr[i]>arr[j]){
                temp.push_back(arr[j]);
                j++;
            }
            else{
                temp.push_back(arr[i]);
                i++;
            }
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=end){
            temp.push_back(arr[j]);
            j++;
        }
        for(int idx = 0; idx<temp.size(); idx++){
            arr[idx+st] = temp[idx];
        }
    }
    void mrg_srt(vector<int> &arr,int st, int end){
        if(st<end){
            int mid = st + (end-st)/2;
            mrg_srt(arr,st,mid);
            mrg_srt(arr,mid+1,end);
            merge(arr,st,mid,end);
        }
    }
};
int main(){
    mrg L;
    vector<int> arr = {1,2,3,01,-1,-5,10,4};
    L.mrg_srt(arr,0,arr.size()-1);
    for(int val : arr){
        cout<<val<<" ";
    }
    return 0;
}
  









































// bool issafe(vector<string> board,int row,int col,int n){
//     //horizontal
//     for(int i=0;i<n;i++){
//         if(board[row][i] == 'Q'){
//             return false;
//         }
//     }
//     //vertical
//     for(int j=0;j<n;j++){
//         if(board[j][col] == 'Q'){
//             return false;
//         }
//     }
//     //left diagonal
//     for(int i=row,j=col; i>=0 && j>=0; i--,j--){
//         if(board[i][j] == 'Q'){
//             return false;
//         }
//     }
//     //right diagonal
//     for(int i=row,j=col; i>=0 && j<n; i--,j++){
//         if(board[i][j] == 'Q'){
//             return false;
//         }
// }













// void solve(int n, int col, vector<string>& board,
//     vector<vector<string>>& ans, vector<int>& leftrow,
//     vector<int>& updiag, vector<int>& lowdiag) {
// if (col == n) {
//  ans.push_back(board);
//  return;
// }
// for (int row = 0; row < n; row++) {
//  if (leftrow[row] == 0 && updiag[n - 1 + col - row] == 0 &&
//      lowdiag[col + row] == 0) {
//      board[row][col] = 'Q';
//      leftrow[row] = 1;
//      updiag[n - 1 + col - row] = 1;
//      lowdiag[col + row] = 1;
//      solve(n, col + 1, board, ans, leftrow, updiag, lowdiag);
//      board[row][col] = '.';
//      leftrow[row] = 0;
//      updiag[n - 1 + col - row] = 0;
//      lowdiag[col + row] = 0;
//  }
// }
// }
// vector<vector<string>> solveNQueens(int n) {
// vector<vector<string>> ans;
// vector<string> board(n);
// string s(n, '.');
// for (int i = 0; i < n; i++)
//  board[i] = s;
// vector<int> leftrow(n, 0), updiag(2 * n - 1, 0), lowdiag(2 * n - 1, 0);
// solve(n, 0, board, ans, leftrow, updiag, lowdiag);
// return ans;
// }