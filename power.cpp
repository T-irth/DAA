#include <iostream>
using namespace std;

double powerr(int a,int n){
    if(n>=0)
    {
        if(n==0)return 1;
    return a * powerr(a,n-1);
    }
    else{
        return 1/powerr(a,(-1)*n);
    }

}

//wap to find out sum of digit of even nummber  using recution
