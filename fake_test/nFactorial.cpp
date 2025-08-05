#include <iostream>
#include<vector>
using namespace std;
#define pb push_back
int multiply(int x,vector<int>& res,int res_size){
    int carry = 0;
    for(int i=0;i<res_size;i++){
        int prod = res[i]*x+carry;
        res[i] = prod % 10;
        carry = prod/10;
    }
    //cout<<carry<<endl;
    while (carry) {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}
void fact(int n){
    vector<int>res(500,0);
    res[0]=1;
    int res_size=1;
    for(int i=2;i<=n;i++){
       res_size = multiply(i,res,res_size);
    }
    for(int i=res_size-1;i>=0;i--){
        cout<<res[i];
    }
}

int main() {
	int n;
	cin>>n;
	while(n-->0){
	    int a;
	    cin>>a;
	    fact(a);
	    cout<<"\n";
	}
	return 0;

}



/**
 * #include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n-->0){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a%2 == 0){
	        cout<<a/2*b + (a/2*c)<<endl;
	    }else{
	        cout<<(a/2*b + (a/2*c))+c<<endl;
	    }
	}
	return 0;

}

 */

