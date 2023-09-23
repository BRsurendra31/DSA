#include<iostream>
using namespace std;

int main(){

   /* Bitwise Operators  :
      1.AND &
      2. OR |
      3. NOR ~
      4  XOR ^
      */
    // int a=2;
    // int b=4;

    // cout<<"a&b:"<<(a&b);
    // cout<<"a|b:"<<(a|b);
    // cout<<"a^b:"<<(a^b);
    // cout<<"~b:"<<(~b);

    // //Shift left and shift Right Operator :

    // cout<<(7<<2)<<endl;
    // cout<<(7<<1)<<endl;
    // cout<<(7<<3)<<endl;
    // cout<<(5>>1)<<endl;
    // cout<<(5>>3)<<endl;
    // cout<<(5>>4)<<endl;

    // Increment and decrement :

    // int i=4;
    // cout<<(++i)<<endl;// i=4+1=5 ,then print=5
    // cout<<(i++)<<endl;// print=5 , then inc. i=5+1=6
    // cout<<(--i)<<endl;// i=6-1=5 , p=5
    // cout<<(i--)<<endl;// p=5 , i=5-1=4
    // cout<<(i--)<<endl;// p=4 , i=4-1=3

    // // For loop :
      // 1. counting from 1 to n

    // int n;
    // cout<<"enter the value of n : ";
    // cin>>n;
    // for ( int i=1; i<=n; i++)
    // {
    //     cout<<"printing count from 1 to n :"<<i<<endl;
    //}

    /* output :
      n=5
      1
      2
      3
      4
      5
      */
    
      
        
    
     // 
  //   int n;
  //   cin>>n;
  //   int i=1;

  //   for (;;)
  //  if (i<=n)
  //   {
  //       cout<<i<<endl;
  //       i++;
       
  //   }
  // printing the values a b c 

    // for (int a=1,b=2,c=3; a>=0,b>=1,c>=2; a--,b--,c--)
    // {
    //     cout<<a<<b<<c<<endl; //code body
    // }

    /* output :
      123
      012
      */
    // 3. printing sum of 1 to n usin For loop 

    //  int n;
    //  cin>>n;
    //  int sum=0;

    //  for (int i=1 ;i<=n; i++)
    //  {
    //   sum=sum + i;
      
    //  }
    //  cout<<sum;


    // printing n fibonacci series from starting (0 1 1 2 3 5 8 13 .....)

    // int n;
    // cin>>n;
    // int a=0;
    // int b=1;
    // cout<<a<<""<<b<<"";
    //  for (int i =1; i <=n; i++)
    //  {
      
    //   int nextNumber=a+b;
    //   cout<<nextNumber;
    //   a=b;
    //   b=nextNumber;
      
    //  }
     
     // Continue :

    // 1.
    // for ( int i = 0; i <5;i++ )
    //  {
    //   cout<<"HELLO"<<endl;
    //   cout<<"HI"<<endl;
    //   //continue;
    //  cout<<"hey"<<endl;

    //  }
//    output :
      //HELLO
      //HI
      //HELLO
      //HI
      //HELLO
      //HI
      //HELLO
      //HI
      //HELLO
      //HI
      // HEY will not be printed bcz of continue.
    // H.W
    // 2.
    // for(int i=0; i<=5; i++){
    //   cout<<i<<" ";
    //   i++;
    // }
    //  // o/p -> 0 2 4
// 3. 
    // for(int i=0; i<=5; i--){
    //   cout<<i<<" ";
    //   i++;
    // }
  // o/p > 0 0 0 0 ......

  // 4. 

  // for(int i=0; i<=15; i+=2){
  //   cout<<i<<" ";

  //   if(i&1){
  //     continue; // doubt in if and cont.
  //   }
  //   i++;
  // }
  // o/p -> 0 3  5 7 9 11 13 15

  // 5. 

  // for(int i=0; i<5; i++){
  //   for(int j=i; j<=5; j++){
  //     cout<<i<<" "<<j<<endl;

  //   }
  // }
  
/* o/p ->
  0 1
  0 2
  0 3
  0 4
  0 5
  1 1
  1 2
  1 3
  1 4
  1 5
  2 2
  2 3
  2 4
  2 5
  3 3
  3 4
  3 5
  4 4
  4 5
  */
 // variable and scope -> note book
 // operator precedence -> note book

  
      return 0;

}