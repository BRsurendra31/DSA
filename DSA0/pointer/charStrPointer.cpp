#include <iostream>
using namespace std;


int main(){

/*
    int num = 4;
    cout<<&num<<endl; //0x61fef4

    int num1[10] = {2,4,6,8};
    cout<<&num<<endl;   //0x61fef4
    cout<<&num1[1]<<endl;//0x61fed0
    cout<<&num1[2]<<endl;//0x61fed4
    cout<<&num1[3]<<endl;//0x61fed8

    char ch = 'k'; // can take ch = shfhj;
    cout<<&ch<<endl;//k
    char *p =&ch;
    cout<<p<<endl ;//k > cout<<p work same as cout<<&ch
    cout<<(void*) &ch<<endl;//0x61fecb
    cout<<static_cast<void*>(&ch)<<endl;//0x61fecb

    char c = 'fgh'; //h >  takes last char from string as main char and print till null char
    cout<<&c<<endl;
    
    char ch1[6] ={'a', 'f','r', 'h'};
    cout<<&ch1<<endl;   //0x61fec5 > add of ch1[1]
    cout<<&ch1[1]<<endl;// frh
    cout<<&ch1[2]<<endl;// rh
    cout<<&ch1[3]<<endl;// h 
                            // starts printing values from the address of given char index till null char

    cout<<(void*)&ch1[1]<<endl;//0x61fec5 
    cout<<(void*)&ch1[2]<<endl;//0x61fec6
    cout<<(void*)&ch1[3]<<endl;//0x61fec7


    string str = "abcd";
    cout<<&str<<endl; //0x61feac
    cout<<&str[0]<<endl; //abcd
    cout<<&str[1]<<endl; //bcd
    cout<<&str[2]<<endl; //cd
    cout<<&str[3]<<endl; //d

    cout<<(void*)&str[1]<<endl;//0x61feb5
    cout<<(void*)&str[2]<<endl;//0x61feb6
    cout<<(void*)&str[3]<<endl;// 0x61feb7
    cout<<static_cast<void*>(&str[1])<<endl;//0x61feb5
    cout<<static_cast<void*>(&str[2])<<endl;// 0x61feb6
    
    */

    char ch2 = 'dfdj';
    char *q = &ch2; //j
    cout<<q<<endl;
    cout<<&ch2<<endl;//j
    
    string str1 = "dfhhg";
    string *s = &str1;
    cout<<&str1<<endl;
    cout<<str1[1]<<endl;//f
    // cout<<s[1]<<endl; // not work


    string str2[6] ={"abc", "def", "ghi", "jkl"};
    //string *st = &str2; // error , cannopt be initialized 
    
    cout<<&str2<<endl; //0x61fe48
    cout<<&str2[0]<<endl;//0x61fe48
    cout<<&str2[1]<<endl;
    cout<<&str2[2]<<endl;
    cout<<&str2[3]<<endl;


    char ch1[6] ={'a', 'f','r', 'h'};
    
    cout<<&ch1<<endl;   //0x61fec5 > add of ch1[1]
    cout<<&ch1[0]<<endl;// frh
    cout<<&ch1[2]<<endl;// rh
    cout<<&ch1[3]<<endl;// h 
    
    return 0;
}