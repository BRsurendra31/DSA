#include<iostream>
#include<math.h>
using namespace std;


// sum of n natural no.
// method-1
// int main(){
    
//     int n;
//     cin>>n;
//    int sum=0;
//     for(int i=1; i<=n; i++)
//     sum=sum+i;
//     cout<<sum;

//     return 0;
// }

 
//  


// method-2

// int sum(int n){
//     int sum=0;
//     for(int i=0; i<=n; i++){
//         sum = sum + i;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n);
//     return 0;
// }

// method 3

// int main(){
    
//     int n;
//     cin>>n;
//     int sum = n*(n + 1) /2 ;
//     cout<<sum;
//     return 0;
// }

// int sum(int n){
//     return n * (n+1) /2 ;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n);
// }



// fahrenheit to Celsius , F TO C 
// method 1

// float FtoC(float f){
//     return (5.0/9.0) *(f-32.0);
// }
// int main(){
//     float f;
//     cout<<"Entr the temperature in fahrenheit : "<<endl;
//     cin>>f;
//     cout<<"Temperature in celsius : "<<FtoC(f);
// }

// method 2

// int main(){
//     float f;
//     cout<<"Enter the temperature in fahrenheit, f :"<<endl;
//     cin>>f;
//     float c = (5.0 / 9.0) *( f-32) ;
//     cout<<"temperature in celsius : "<<c;
    
//     return 0;
// }

// A number prime or not 

//  int main(){
//     int n;
//     cin>>n;
//     int count = 0;
//     for(int i=2; i<=n-1; i++){
//         if(n%i ==0) 
//            count++; // count=count +1;
        
//     }
//     if(count>0) cout<<"notprime";
//     else cout<<" prime";
//     return 0;
//  }



// Pattern 


//Q1.

// 123
// 123
// 123

// int main(){
   
//    int n;
//    cin>>n;

//    for(int i=1; i<=n; i++){
//       for(int j=1; j<=n; j++){
//          cout<<j;
//       }
//       cout<<endl;
//    }
//    return 0;
// }

//Q2. 
// 123
// 456
// 789

// int main(){
//    int n;
//    cin>>n;
//    int count =1;

//    for(int i=1; i<=n; i++){
//       for(int j=1; j<=n; j++){
//          cout<<count<<" ";
//          count++;
//       }
//       cout<<endl;
//    }
//    return 0;
// }

//Q3.

// *
// **
// ***
// ****

// int main(){
   
   
//           int n;
//            cin>>n;
//            int row=1;
//            while (row<=n)
//            {
//                 int col=1;
//                 while (col<=row)
//                 {
//                     cout<<"*"<<" ";
//                     col=col+1;
//                 }
//                 cout<<endl;
//                 row=row+1;
//            }
           
//    return 0;
// }


// Q4.

// 1
// 22
// 333
// 4444 have to print row

// int main(){
    
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//Q5
// 1
// 12
// 123
// 1234

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }


//Q6.
// 1
// 23
// 345
// 4567  have to print row by storing it in count variable and incremeting count

// int main(){
    
//     int n;
//     cin>>n;
    
//     for(int i=1; i<=n; i++){
//         int count=i;
//         for(int j=1; j<=i; j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// int mai(){
//     int arr[5]={2, -24, 6, 7, 9};
//     int n=5;
//     for(int i=0; i<n; i++){
        
//     }
//     return 0;
// }


void reverse(int arr[], int n){
    
    int s=0;
    int e= n-1;
    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
 void printArray(int arr[], int n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
}


int main(){
    
    int arr[3]={6,4,5};
    int brr[4]={5, 7, 4, 9};
    reverse(arr,3);
    reverse(brr, 4);
    printArray(arr,3);
    printArray(brr,4);

    return 0;
}