#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="shreshtha";
    int middle=str.length()/2;
    cout<<"first half is: "<<str.substr(0,middle)<<" "<<"second half is: "<<str.substr(middle);

    return 0;
}