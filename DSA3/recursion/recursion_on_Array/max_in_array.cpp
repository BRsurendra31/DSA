#include<iostream>
using namespace std;

void getMax(int arr[], int size, int index, int& maxi){

    // base case
    if(index == size){
        return; 
    }

    maxi = max(maxi,arr[index]);
    getMax(arr, size, index+1, maxi);

}

int main(){
    int arr[] = {1,3,5,7};
    int size =4;
    int maxi = INT_MIN;

    getMax(arr,size,0,maxi);
    cout<<maxi<<endl;
    
    return 0;
}