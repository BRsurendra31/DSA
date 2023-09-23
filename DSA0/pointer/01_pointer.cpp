#include <iostream>
using namespace std;


int main(){
    
//     int num =5;
//     int *p = &num;

//     cout<<"before :" <<num<<endl;

//     (*p)++;
//     cout<<"after :" << num<<endl;
// //     before :5
// // after :6


    // int num =5;
    // int *p = &num;
     
    //  cout<<(*p)<<endl;//5
    //  cout<<num<<endl;//5

    //  (*p)++;
    //  cout<<(*p)<<endl;//6
    //  cout<<num<<endl;//6
    //  cout<<p<<endl; // 0x61ff0c
    //  cout<<&p<<endl;//0x61ff08

     
    int i =9;
    int *t = &i;

    *t = *t + 1;
    cout<< *t <<endl; //10
   
    cout<<"before t :" <<t<<endl; // before t :0x61ff08

    t = t+1;
    cout<<"after t :"<<t<<endl; //after t :0x61ff0c (8> 9, a, b,c i.e after 4 byte)
    



    


    
    return 0;
}