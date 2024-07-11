#include<iostream>
using namespace std;

int main(){
    //IF block :
    // int a,b;
    // cout<<"enter the value of  a and b:"<<endl;
    

    // cin>>a>>b;
    // if(a>b){
    //     cout<<"Answer A"<<endl;
    // }
    // if(b>a){
    //     cout<<"Answer B"<<endl;
    // }


    // IF-ELSE BLOCK

    // int a;
    // cin>>a;
    // if (a>0)
    // {
    //     cout<<"a is +ve"<<endl;
    // }
    // else
    // {
    //     cout<<"a is -ve"<<endl;
    // }

    //About Cin<<'';
    // int a,b;
    // cin>>a>>b;
    // cout<<"the values of a and b are :"<<a<<b;
    /* cin doesnt read
            >space
            >tab
            >Enter
            */

        // about cin.get() :
        /* reads 
            > space 
            >tab
            >enter
        int a;
        a=cin.get();
        cout<<"value of a is :"<<a;

      */
     // IF- ELSE IF :
     //example-1
    //  int a;
    //  cout<<"Enter the value of a "<<endl;
    //  cin>>a;

    //  if (a>0)
    //  {
    //     cout<<"a is +ve "<<endl;
    //  }
    //  else if(a<0)
    //  {
    //     cout<<"a is -ve "<<endl;
    //  }
    //  else{
    //     cout<<"a is 0 "<<endl;
    //  }
    
     //ex-2

    //  int a=2;
    //  int b=a+1;

    //  if ((a=3)==b)
    //  {
    //     cout<<a;
    //  }
    //  else{
    //     cout<<a+1;
    //  }

    // Loop :

        //1. while loop :

        // eg1. print values 1 to n ?

        // int n;
        // cin>>n;
        // int i=1;
        // while (i<=n)
        // {
        //     cout<<i<<" ";
        //     i=i+1;
        // }
        
     //eg2. sum 1- n?

        // int n;
        // cin>>n;
        // int i=1;
        // int sum=0;

        // while (i<=n)
        // {
        //     sum=sum+i;
        //     i=i+1;
        // }
        // cout<<"the value of sum is :"<<sum;

   
   // pattern :

   //eg1. print the pattern of same rows and colums of  stars ?

//    int n;
//    cin>>n;
//    int i=1;

//    while (i<=n)
//    {
//     int j=1;
//     while (j<=n)
//     {
//         cout<<"*";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//    }
    
    /*eg2. print the pattern
        1111
        2222
        3333 */

        int n;
        cin>>n;
        int i=1;
        while (i<=n)
        {
            int j=1;
            while (j<=n)
            {
                cout<<i;
                j=j+1;
            }
            cout<<endl;
            i=i+1;
        }
        

    return 0;
}