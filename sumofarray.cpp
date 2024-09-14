#include<iostream>
using namespace std;
int main(){
    int size ;
    cout<<"enter the sie of an array : "<<endl;
    cin>>size;
    int array[size];
    cout<<"enter the elements : "<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"printing the array : "<<endl;
    for(int i = 0 ; i  < size ; i++ ){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    int sum  = 0 ;
    for(int i = 0 ; i < size ; i++ ){
        sum = sum + array[i];
    }
    cout<<"sum is : "<<sum <<endl;
    return 0;
}