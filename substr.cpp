#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="shreshtha";
    int middle=str.length()/2;
    cout<<"first half: "<<str.substr(0,middle)<<" "<<"second half: "<<str.substr(middle);

    return 0;
}