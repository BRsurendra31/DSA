#include<iostream>
using namespace std;

int main(){
    /*
    char ch = 'q';
    cout<<sizeof(ch)<<endl;//1

    char* c = &ch;
    cout<<sizeof(c)<<endl;//8

    char* q= new char;
    cout<<sizeof(q)<<" ,"<<sizeof(char);//8,14

    int j = 8;
    cout<<sizeof(j)<<endl;//4

    int* p = &j;
    cout<<sizeof(p)<<endl;//8

    int* i = new int;
    cout<<sizeof(i)<<" ,"<<sizeof(int)<<endl;//4,4 
    */

   int* arr = new int[5];
   cout<<sizeof(arr)<<" ,"<<sizeof( int);//8,4


   

    
    return 0;
}