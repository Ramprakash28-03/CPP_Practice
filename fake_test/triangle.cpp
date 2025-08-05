#include <bits/stdc++.h>
using namespace std;

int main() {
	int id ,t;
	cin>>id>>t;
	while(t-->0){

	    double x1,y1,x2,y2,x3,y3;
	    cin>>x1>>y1>>x2>>y2>>x3>>y3;
	    double p1 = pow((x2-x1),2)+pow(y2-y1,2);
	    double p2 = pow((x2-x3),2)+pow(y2-y3,2);
	    double p3 = pow((x1-x3),2)+pow(y1-y3,2);
	    double a1=sqrt(p1);
	    double a2=sqrt(p2);
	    double a3=sqrt(p3);
	    double angle1 = max(p1,max(p2,p3));
	    double sum = p1+p2+p3;
	    string angle;
	    if(angle1 == (sum-angle1)) angle = "right";
	    else if(angle1>(sum-angle1)) angle = "obtuse";
	    else angle="acute";
	    
	    if((a1==a2 || a1==a3) && id == 2 ){
	        cout<<"Isosceles "<<angle<<" triangle\n";
            
	    }else if(id==2)
	    {cout<<"Scalene "<<angle<<" triangle\n";}
	    else if((a1==a2 || a1==a3) ){
	        cout<<"Isosceles triangle\n";
	    }else
	    {
            //cout<<"Scalene triangle\n";
            cout<<a1<<" "<<a2<<" "<<a3<<endl;
        
        }
	    
	}

}
