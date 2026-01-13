#include<iostream>
using namespace std;

class a {
    // int b;
    char c;  //size 1 byte
    char a;  //size 1 byte 
    int f;  //size 4 byte
    double e;  // size 8 byte
};
int main(){

    a obj;
    cout<<sizeof(obj)<<" ";
}

//padding