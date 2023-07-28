#include<iostream>
using namespace std;

//1. swap alternate element in arrray
// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }//cout<<endl;
// }

// void swapAlternate(int arr[], int size){
//     for(int i=0; i<size; i+=2){
//         if(i+1<size){
//             swap(arr[i], arr[i+1]);
//         }
//     }
// }
// int main(){
    
//     int odd[5]={1,3,5,7,9};
//     int even[6]={1,3,5,7,8,9};


//     swapAlternate(odd,5);
//     printArray(odd, 5);

//     swapAlternate(even, 6);
//     printArray(even, 6);

//     return 0;
// }
/*
    3 1 7 5 9
3 1 7 5 9 8 */

// without swap func. "swap()" -

// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

// void swapAlternate(int arr[], int size){
//     for(int i=0; i<size; i+=2){
//         if(i+1<size){
//             int temp=arr[i+1];
//             arr[i+1]=arr[i];
//             arr[i]=temp;
//         }
//     }
// }
// int main(){
    
//     int odd[5]={1,3,5,7,9};
//     int even[6]={1,3,5,7,8,9};


//     swapAlternate(odd,5);
//     printArray(odd, 5);

//     swapAlternate(even, 6);
//     printArray(even, 6);

//     return 0;
// }

/* o/p ->
    3 1 7 5 9 
3 1 7 5 9 8 */







