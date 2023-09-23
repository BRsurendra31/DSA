#include<iostream>
using namespace std;


void update(int **p2){

    p2 = p2 +1;
}
int main(){
    
    int num = 5;
    int* p = &num;
    int** p2 = &p;

    cout<<"Before :"<<p2<<endl; //0x61ff08
    update(p2);
    cout<<"After :"<<p2<<endl;//0x61ff08 , No change
    
    
    
    return 0;
}