#include <iostream>
using namespace std;

int main(){
    int array [] = {4,8,9,7,6};
    int target = 6;
int i = 0;
    for( i = 0;i<5;i++){
        if(array[i] == target){
            // cout<<"found on index "<<i;
            // return 0;
            break;
        }
    }
    if(i==5)
    {
        cout<<"target not found";
    }else{
        cout<<"target found at"<<i;
    }
    
    return 0;
}