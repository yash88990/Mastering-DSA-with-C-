#include<iostream>
using namespace std;
int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array) / sizeof(array[0]);
    int n = 5;
    int count = 0;
    for(int i = 0 ; i < size ; i++ ){
        if( array[i] >= n ){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}