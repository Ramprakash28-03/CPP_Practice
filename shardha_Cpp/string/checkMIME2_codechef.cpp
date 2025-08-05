#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t>>n;
	map<string,string> m;
	while(t-->0){
	    string s1,s2;
	    cin>>s1>>s2;
	    m[s1]=s2;
	}
	while(n-->0)
	{   string r1,r2="";
	    cin>>r1;
	    int count = 0;
	    for(int i=r1.size()-1;i>=0;i--){
	        if(r1[i]=='.'){
	            count++;
	            break;
	        }
	        r2=r2+r1[i];
	    }
	    if(count==0) cout<<"unknown\n";
	    else{
	    reverse(r2.begin(),r2.end());
	    if(m.find(r2) != m.end()){
	        cout<<m[r2]<<endl;
	    }else{
	        cout<<"unknown\n";
	    }
	    }
	}
	return 0;

}
