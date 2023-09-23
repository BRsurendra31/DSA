#include <iostream>
using namespace std;

void update(int *p){

    p = p+1;
    

}
int main(){
    
    int value = 5;
    int *p = &value;

    cout<<"before :"<<p<<endl; //0x61ff08
    update(p);
    cout<<"After :"<<p<<endl; // 0x61ff08  both same 





    
    
    return 0;
}