#include<iostream>
using namespace std;
int main(){
    int array[] = { 1,2,3,4,5};
    int n = sizeof(array) / sizeof(array[0]);
    int newarray[n];
    for(int i = 0 ; i < n ; i++ ){
        newarray[i] = array[n - 1 - i ];
    }
    for(int i = 0 ; i < n ; i++){
        cout<<newarray[i]<<" ";
    }
    cout<<endl;
    return 0;
}