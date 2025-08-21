#include<iostream>
using namespace std;

int main(){
    cout<<"Tirth_D_08";
    cout<<"Enter size of array";
    int size;
    cin>>size;

    int array [size];
    for(int ind=0;ind<size;ind++)
    {
        cout<<"Tirth_D_08";
        cout<<"Enter array element at index "<<ind;
        cin>>array[ind];
    }
    bool flag = false;
    for(int pass=0;pass<size;pass++){
        for(int ele = 0;ele<size-1-pass;ele++){
            if(array[ele]>array[ele+1])
            {
                int temp = array[ele];
                array[ele] = array[ele+1];
                array[ele+1] = temp;
                flag = true;
            }

        }
        if(!flag) break;
    }


    return 0;
}
