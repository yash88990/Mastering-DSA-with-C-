#include<iostream>
using namespace std;
int main(){
    int array[] = {34,67,45,99}; 
    int size = sizeof(array) / sizeof(array[0]);
    int min = INT32_MAX;
    for(int i = 0 ; i < size ; i++ ){
        if(min  > array[i] ){
            min = array[i];
        }
    }
    cout<<"min is "<<min<<endl; // 99
    return 0;
}