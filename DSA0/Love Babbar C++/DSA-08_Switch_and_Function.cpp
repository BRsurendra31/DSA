#include<iostream>
using namespace std;

// int main(){
// Switch 
// // Calculator
// //  for operations like +,- , * , / ,%

// int a,b;
// cout<<"Enter the values of a and b :"<<endl;
// cin>>a>>b;
// char op;
// cout<<"enter the value of op :"<<endl;
// cin>>op;

// switch(op){

//     case '+': cout<<(a+b)<<endl;
//                 break;
//     case '-': cout<<(a-b)<<endl;
//                 break;
//     case '*': cout<<(a*b)<<endl;
//                 break;
//     case '/': cout<<(a/b)<<endl;
//                 break;
//     case '%': cout<<(a%b)<<endl;
//                 break;
//     default : cout<<"no operation found :"<<endl;

// }


/* total amount =1330
    how may notes of 100, 50 , 20, 1 are there ? */

    // int t;
    // cout<<"enter the total amount  :"<<endl;
    // cin>>t;
    // int notes;
    // cout<<"Enter the value of notes :"<<endl;
    // cin>>notes;

    // switch(notes){

    //     case 100 : cout<<"No. of notes of 100 in 1330 :"<<(t/notes)<<endl;
    //                 break;
    //     case 50 : cout<<"No. of notes of 5o in 1330 :"<<(t/notes)<<endl;13
    //                   break;
    //     case 20 : cout<<"No. of notes of 20 in 1330 :"<<(t/notes)<<endl;
    //                   break;
    //     case 1 : cout<<"No. of notes of 1 in 1330 :"<<(t/notes)<<endl;
    //                   break;
    //     default : cout<<"Enter valid notes"<<endl;
    // }



// Function :

// eg 1.

// int power(int a, int b){

//     int ans=1;
//     for(int i=1; i<=b; i++){
//         ans=ans*a;
//     }
//     return ans;
// }

// int main(){

//     int num1, num2;
//     cin>>num1>>num2;
//     int answer=power(num1, num2);
//     cout<<"Answer is :"<<answer<<endl; 
//     return 0;
// }
//      o/p -> 2 3 ->8

//}



//eg 2.

// int power(){
//     int a,b;
//     cin>>a>>b;
//     int ans=1;
//     for(int i=1; i<=b; i++){
//         ans=ans*a;
//     }
//     return ans;
// }
// int main(){
//     int ans=power();
//     cout<<"answer is :"<<ans<<endl;
    
//     return 0;
// }
//          o/p -> 4 2 -> 16

// eg 3.

// Combination :
//nCr

// int factorial(int n){
//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact = fact * i;
//     }
//     return fact;

// }
// int nCr(int n, int r){
//     int num=factorial(n);
//     int denum=factorial(r)* factorial(n-r);

//     return num/denum;
// }
// int main(){
//     int n, r;
//     cin>>n>>r;
//     cout<<"Answer is :"<<nCr(n,r);
    
    
    
//     return 0;
// } // o/p -> 8 2
//            // Answer is : 28
//             //13 0
//             //Answer is :1

// eg 4.

    // func. signature
// void PrintCounting(int n){
    // func. body
//     for(int i=1; i<=n; i++){
//         cout<<i<<" ";
//     }
// }
// int main(){
//     int n;
//     cin>>n;
        // func. call
//     PrintCounting(n);
//     return 0;
// }
/* o/p -> 4
    1 2 3 4
    */


// eg. 5 

//0 -> Not a prime nunber
//1 -> prime number 
// bool isPrime(int n){
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             return 0;
//         }
//         else{
//             return 1;
//         }
    
        
//     }
   
// }
// int main(){
//     int n;
//     cin>>n;
//     if(isPrime(n)){
//         cout<<"is a prime number";
//     }
// else{
// cout<<"not a prime number";
// }
//     return 0;
// }
// /* o/p ->
//     5
//     not a prime number
//     16
//     is a prime number */


// H.W 
// 1. Ap=3*n +7

// int AP(int n){

//     int a=3*n + 7;
//     return a;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<"AP is :"<<AP(n);
    
//     return 0;
// }

// 2. Fibonacci series 

// Pass by value :

// void dummy(int n){
//     n++;
//     cout<<"n is :"<<n<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     dummy(n);
//     cout<<"number n is :"<<n<<endl;
//     return 0;

// }


// H.W
    //1. 

// void update(int a){
//     a=a/2;
// }
// int main(){
//     int a=10;
//     update(a);
//     cout<<a<<endl;

//     return 0;
// }

//2.


int update(int a){
    a -=5;
    return a;
}
int main(){
    int a=15;
    update(a);
    cout<<a<<endl;

    return 0;
}

