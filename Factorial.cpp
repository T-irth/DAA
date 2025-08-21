#include<iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }else{
        return n * fact(n-1);
    }
}
int main(){
    cout<<"Enter x";
    int x;
    cin>>x;

    cout<<"factorial of "<<x<<": "<<fact(x);
    return 0;
}
//wap find out sum of frist n natural number
