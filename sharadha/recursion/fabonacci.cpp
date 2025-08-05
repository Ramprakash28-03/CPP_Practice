// #include<iostream>
// using namespace std;
// class fabonacci{
//     public:
//     int fb(int n){
//         if(n== 0 || n==1){
//             return n;
//         }
//         cout<<fb(n-1)+fb(n-2)<<" ";
//         return fb(n-1)+fb(n-2);
//     }
// };
// int main(int argc, char const *argv[])
// {
//     // fabonacci f;
//     // cout<<f.fb(25);
//     char a='a';
//     a=a+1;
//     cout<<a;
//     return 0;
// }



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
	{   string r1,r2;
	    cin>>r1;
	    for(int i=r1.size();i>=0;i++){
	        if(r1[i]=='.'){
	            break;
	        }
	        r2=r2+r1[i];
	    }
	    if(m.find(r2) != m.end()){
	        cout<<m[r2];
	    }
	}
	return 0;

}

    
//    #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n;
// 	cin>>n;
// 	string str;
// 	cin>>str;
// 	map<char,char> m;
// 	m['_'] = ' ';
// 	char a = 'a';
// 	    char b = 'A';
// 	for(int i=0;i<str.size();i++){
//         a=a+i;
// 	    m[a]=str[i];
// 	    b = b+i;
// 	    m[b] = toupper(str[i]);
	     
// 	}
// 	while(n-->0){
// 	    string s;
// 	    cin>>s;
// 	    for(int i=0;i<s.size();i++){
// 	    if(m.find(s[i]) != m.end()){
// 	    s[i] = m[s[i]];
// 	    }
// 	    }
// 	    	cout<<s<<endl;
// 	}
//     return 0;

// }