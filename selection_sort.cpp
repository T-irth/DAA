#include<iostream>
using namespace std;
int main(){
        cout<<"Enter size of array";
    int size;
    cin>>size;

    int array [size];
    for(int ind=0;ind<size;ind++)
    {
        cout<<"Enter array element at index "<<ind;
        cin>>array[ind];
    }

    // selection sort logic
    for(int i = 0 ;i <size-1;i++){
        int min = i;
        for(int j = i+1;j<size;j++){
            if(array[min]>array[j]){
                min = j;
            }
        }
        if(i!=min){
            int temp = array[min];
            array[min] = array[i];
            array[i] = temp;
        }
    }
    return 0;
}
//wapto find out factor of given nummber by recursion
