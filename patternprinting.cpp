//. solid rectangle 
// #include<iostream>
// using namespace std;
// int main(){
//     int row , column ;
//     cout<<"enter the rows and column : "<<endl;
//     cin>>row>>column ;
//     for(int i = 1 ; i <= row ; i++ ){
//         for(int j = 1 ; j  <= column ; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// return 0;
// }


// //2. solid square 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the n : "<<endl;
//     cin>>n ;
//     for(int i = 1 ; i <= n ; i++ ){
//         for(int j = 1 ; j  <= n ; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// return 0;
// }



// //3. number sqaure 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the n : "<<endl;
//     cin>>n ;
//     for(int i = 1 ; i <= n ; i++ ){
//         for(int j = 1 ; j  <= n ; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// return 0;
// }



// //4. Triangle (*)
// #include<iostream>
// using namespace std;
// int main(){
//     int row , column ;
//     cin>>row>>column;
//     for(int i = 1 ; i <= row;i++){
//         for(int j = 1 ; j <= i ; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }





// //5. Triangle (number)
// #include<iostream>
// using namespace std;
// int main(){
//     int row , column ;
//     cin>>row>>column;
//     for(int i = 1 ; i <= row;i++){
//         for(int j = 1 ; j <= i ; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// // 6 . start traingle ulta wala 
// #include<iostream>
// using namespace std;
// int main(){
//     int row ;
//     cin>>row;
//     for(int i = 1 ; i <= row ; i++ ){
//         for(int j = 1 ; j <= row + 1 - i ; j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// // //7. ulta number traingle
// #include<iostream>
// using namespace std;
// int main(){
//     int row ;
//     cin>>row;
//     for(int i = 1 ; i <= row ; i++ ){
//         for(int j = 1 ; j <= row + 1 - i ; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// //8. odd number traingle 
// #include<iostream>
// using namespace std;
// int main(){
//     int row ;
//     cin>>row;
//     for(int i = 1 ; i <= row;i++){
//         int a = 1 ;
//         for(int j = 1 ; j <= i ; j++){
//             cout<<a;
//             a = a+2;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// //9. alphabet sqaure
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     for(int i = 1 ; i <= n ; i++ ){
//         int a = 1 ;
//         for(int j = 1 ; j <= n ; j++ ){
//             int d = a + 64;
//             char ch = char(d);
//             cout<<ch<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// // 10 . alphbet traingle
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     for(int i = 1 ; i <= n;i++){
//         int a = 1;
//         for(int j = 1 ; j <= i ; j++){
//             int d = a + 64;  //A
//             char ch = char(d);  //typecasting 
//             cout<<ch<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
