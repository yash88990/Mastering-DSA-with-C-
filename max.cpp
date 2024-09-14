#include<iostream>
using namespace std;
int main(){
    int array[] = {34,67,45,99}; 
    int size = sizeof(array) / sizeof(array[0]);
    int max = INT32_MIN;
    for(int i = 0 ; i < size ; i++ ){
        if(max < array[i] ){
            max = array[i];
        }
    }
    cout<<"max is "<<max<<endl; // 99
    return 0;
}