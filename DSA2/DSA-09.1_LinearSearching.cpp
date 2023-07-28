#include<iostream>
using namespace std;

// linear search
bool search(int arr[], int size, int key){

    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    
    int arr[10]={1,3,4,-4,5,7,8,9,2,5};

    int key;
    cout<<"Enter the element/key to search for :"<<endl;
    cin>>key;
    bool found=search(arr,10,key);
    if(found){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element is absent"<<endl;
    }

    return 0;
}

/* o/p ->

    Enter the element/key to search for :
34
Element is absent

Enter the element/key to search for :
4
Element is present */

