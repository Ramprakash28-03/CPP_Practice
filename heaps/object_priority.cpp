// #include<iostream>
// #include<string>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;
class students{
    public:
    string name;
    int marks;
    students(string name,int marks){
        this->name = name;
        this->marks = marks;
    }

    bool operator < (const students &obj) const{
        return this->marks < obj.marks;
    }

};

int main()
{
    priority_queue<students> stu;
    stu.push(students("Ram",90));
    stu.push(students("aman",90));
    cout << stu.top().name;
    return 0;
}
