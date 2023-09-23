#include<iostream>
using namespace std;

int main(){
    /*1,2.
        1 2 3
        1 2 3
        1 2 3   */

        // int n;
        // cin>>n;
        // int i=1;
        // while (i<=n)
        // {
        //     int j=1;
        //     while (j<=n)
        //     {
        //         //cout<<j;
        //         cout<<n-j+1<<" "; // " " for spacing
        //          j=j+1;
        //     }
        //     cout<<endl;
        //     i=i+1;
        // }

        /*3.
            1 2 3 4
            5 6 7 8
            9 10 11 */
            // int n;
            // cin>>n;
            // int i=1;
            // int count=1;
            // while (i<=n)
            // {
            //     int j=1;
            //     while (j<=n)
            //     {
            //         cout<<count<<" ";
            //         count=count+1;
            //         j=j+1;

            //     }
            //     cout<<endl;
            //     i=i+1;
            // }
            
        /* 4.
            *
            * *
            * * *
            * * * *         */

        //    int n;
        //    cin>>n;
        //    int row=1;
        //    while (row<=n)
        //    {
        //         int col=1;
        //         while (col<=row)
        //         {
        //             cout<<"*"<<" ";
        //             col=col+1;
        //         }
        //         cout<<endl;
        //         row=row+1;
        //    }
           
    /* 5.
        1
        2 2
        3 3 3
        4 4 4 4   */ // row print karana hai

        // int n;
        //    cin>>n;
        //    int row=1;
        //    while (row<=n)
        //    {
        //         int col=1;
        //         while (col<=row)
        //         {
        //             cout<<row<<" ";
        //             col=col+1;
        //         }
        //         cout<<endl;
        //         row=row+1;
                
        //    }

    /* 6.
        1 
        1 2
        1 2 3
        1 2 3 4  */ // column print karana hai

        // int n;
        //    cin>>n;
        //    int row=1;
        //    while (row<=n)
        //    {
        //         int col=1;
        //         while (col<=row)
        //         {
        //             cout<<col<<" ";
        //             col=col+1;
        //         }
        //         cout<<endl;
        //         row=row+1;
                
        //    }
    /* 7.
        1
        2 3 
        3 4 5
        5 6 7 8 */ 
//

    /* 8.
        1 
        2 1
        3 2 1
        4 3 2 1  */

        // int n;
        // cin>>n;
        // int i=1;
        // while (i<=n)
        // {
        //     int j=1;
        //     while (j<=i)
        //     {
        //         cout<<i-j+1<<" ";
        //         j=j+1;

        //     }
        //     cout<<endl;
        //     i=i+1;

        // }
        
    /* 9.
         A 
         B B  
        C  C C */ 
    //  int n;
    //  cin>>n;
    //  int i=1;
    //  while (i<=n)
    //  {
    //     int j=1;
    //     while (j<=i)
    //     {
    //         char ch='A'+i-1;
    //         cout<<ch;
    //         j=j+1;
    //         /* code */
    //     }
    //     cout<<endl;
    //     i=i+1;

        
    //     /* code */
    //  }
     
/*10
    AAA
    BBB
    CCC  */

//     int n;
//      cin>>n;
//      int i=1;
//      while (i<=n)
//      {
//         int j=1;
//         while (j<=n)
//         {
//             char ch='A'+i-1;
//             cout<<ch;
//             j=j+1;
//             /* code */
//         }
//         cout<<endl;
//         i=i+1;

        
//         /* code */
//      }
     
// 11. 
// ABCD
// EFGH
// IJKL
    int n;
    cin>>n;

    int i = 1;
    int j = 1;
    while(i<=n){

        char start=0;
        int j =1;

        while(j<=n){
             start ='A';
            cout<<start;
            start=start+1;
            j++;

        }
        cout<<endl;
        start=start+1;
     i++;
        
    }
    



        
    return 0;
}