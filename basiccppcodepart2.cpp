// 1 print hello world 

// #include<iostream>
// using namespace std;
// int main(){
//     //1. print hello world 
//     cout<<"Hello World "<<endl;
//     return 0;
// }


// //. 2 print number enter by user
// #include<iostream>
// using namespace std;
// int main(){
//     int number ;
//     cout<<"enter the number : "<<endl;
//     cin>>number ;
//     cout<<"you entered : "<<number <<endl;
//     return 0;
// }



// //3. add two numbers 
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter the value of a "<<endl;
//     cin>>a;
//     cout<<"enter the value of b "<<endl;
//     cin>>b;
//     int sum = a + b ;
//     cout<<"sum of "<<a<<" and " <<b << " is "<<sum<<endl;
//     return 0;
// }


// //4 . find quotient and remainder 
// #include<iostream>
// using namespace std;
// int main(){
//     int divinded , divisor , quotient , remainder ;
//     cout<<"enter the dividend : "<<endl;
//     cin>>divinded;
//     cout<<"enter the divisor: "<<endl;
//     cin>>divisor;
//     quotient = divinded / divisor;
//     remainder = divinded % divisor ;
//     cout<<divinded <<" / " << divisor <<" = "<<quotient<<endl;
//     cout<<divinded <<" % "<< divisor << " = "<< remainder<<endl;
//     return 0;
// }




// // 5 . find size of datatypes 
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     float f;
//     double d;
//     char ch;
//     cout<<"size of int datatype  = "<<sizeof(i)<<" bytes "<<endl;
//     cout<<"size of float datatype  = "<<sizeof(f)<<" bytes "<<endl;
//     cout<<"size of double datatype  = "<<sizeof(d)<<" bytes "<<endl;
//     cout<<"size of character datatype  = "<<sizeof(ch)<<" bytes "<<endl;
//     return 0;
// }



// //6 . Swap two numbers 
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5 ;
//     int b = 6 ;
//     cout<<" before swapping a is : "<<a <<endl;
//     cout<<"before swapping  b is : "<< b <<endl;
//     //swap
//     // //method 1 :- using temp variable  
//     // int temp = a;
//     // a = b ;
//     // b = temp ;

//     //method 2 : - using inbuilt function 
//     swap(a , b);
//     cout<<" after swapping a is : "<<a <<endl;
//     cout<<"after swapping  b is : "<< b <<endl;
//     return 0;
// }



// //7. check given number is even or odd 
// #include<iostream>
// using namespace std;
// int main(){
//     int number ;
//     cout<<"enter the number : "<<endl;
//     cin>>number;

//     if(number % 2 == 0 ){
//         cout<<number << " is an even number "<<endl;
//     }else{
//         cout<<number<<" is an odd number "<<endl;
//     }
//     return 0;
// }



//  //8 . check whether a character is vowel or consonant 
// #include<iostream>
// using namespace std;
// int main(){
//     char ch ;
//     cout<<"enter the character "<<endl;
//     cin>>ch;
//     //change into uppercase 
//     char c = toupper(ch);
//     if( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
//         cout<<c<<" is a vowel "<<endl;
//     }else{
//         cout<<c <<" is a consonent "<<endl;
//     }
//     return 0;
// }



// //9. find the largest number among 3 numbers 
// #include<iostream>
// using namespace std;
// int main(){
//     int a , b , c ;
//     cout<<"enter the value of a "<<endl;
//     cin>>a;
//     cout<<"enter the value ob b "<<endl;
//     cin>>b;
//     cout<<"enter the value of c "<<endl;
//     cin>>c;

//     if ( a > c && a > b ){
//         cout<<a << " is largest "<<endl;
//     }else if ( b > a && b > c  ){
//         cout<<b<<" is largest "<<endl;
//     }else{
//         cout<<c<<" is largest "<<endl;
//     }
//     return 0;
// }



// //10. find all roots of a quadratic equation 
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int a , b ,c , d;
//     //d = discriminant 
//     cout<<"enter the value of a b and c : for eqn (aX2 + bX + c = 0 )"<<endl;
//     cin>>a>>b>>c;
//     d = b * b - ( 4 * a * c );
//     if(d > 0 ){
//         int root1 = (-b + sqrt(d)) / ( 2 * a ) ;
//         int root2 = (-b - sqrt(d)) / ( 2 * a ) ;
//         cout<<"two real and distict roots are : "<<root1 <<" and "<<root2<<endl;
//     } else if ( d == 0 ){
//         int root = - b / ( 2 * a ) ;
//         cout<<"real and equal roots are "<<root <<endl;
//     }else{
//         int realpart = -b / (2 * a );
//         int imzpart = sqrt(-d) / ( 2 * a );
//         cout<<"realpart is "<<realpart <<" and imzinarypart is : "<<imzpart<<endl;
//     }
//     return 0;
// }



// //11. calculate sum of n natural numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter the n :"<<endl;
//     cin>>n;
//     int sum = 0;
//     for(int i = 1 ; i <= n ; i++ ){
//         sum = sum + i ;
//     }
//     cout<<sum<<endl;
//     return 0;
// }


// //12. program to check leap year 
// #include<iostream>
// using namespace std;
// int main(){
//     int year ;
//     cout<<"enter the year : "<<endl;
//     cin>>year;
//     if(year % 4 == 0 && year % 100 != 0 || year %400 == 0 ){
//         cout<<"leap year"<<endl;
//     }else{
//         cout<<"not a leap year "<<endl;
//     }
//     return 0;
// }



// //13. generate a multiplication table 
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter the n : "<<endl;
//     cin>>n;
//     for(int i = 1 ; i <= 10 ; i++ ){
//         cout<<n  << " * "<< i << " = "<< n * i <<endl;
//     }
//     return 0;
// }



// // 14. program to display fibonnaci series 
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter the n : "<<endl;
//     cin>>n;
//     int first = 0 ;
//     int second = 1 ;
//     cout<<"fibonnaci series upto "<<n<<endl;
//     for(int i = 0 ; i < n ; i++ ){
//         cout<<first<<" ";
//         int next = first + second;
//         first = second;
//         second = next ;
//     }
//     return 0;
// }


// //15. find HCF 
// #include<iostream>
// using namespace std;
// int hcf(int a , int b ){
//     while(b != 0 ){
//         int rem = a % b ;
//         a = b ;
//         b = rem ;
//     }
//     return a;
// }
// int main(){
//     int a , b ;
//     cout<<"enter a and b "<<endl;
//     cin>>a>>b;
//     // call the function 
//     cout<<"hcf of "<<a<<" and "<<b<<" is "<<hcf(a , b )<<endl;
//     return 0;
// }



// homework
//16 . lcm 
//17. revere a number 
  // number 123 reversednumber = 321
// 18. calculate power of a number 
// 19. ASCII value 
//20. check palindrome 
// 21. check prime 
// 22. display all prime between given range 
// 23. check armstrong number 
// 24. display armstrong number between given range 
// 25 . find factor 
// bonus ques    make a simple calculator 
