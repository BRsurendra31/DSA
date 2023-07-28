import java.util.*;
// methods 

// public class JavaB {

//     public static int  calculateProduct(int num1, int num2){
//         int product = num1*num2 ;
//         return product;
//     }
//      public static void main(String[] args) {

//         Scanner sc = new Scanner(System.in);
//         int a = sc.nextInt();
//         int b = sc.nextInt();
//        int product = calculateProduct(a, b);
//         System.out.println(product);
        
//      }

// }

// // output : 

// 99
// 9
// 891



// public class JavaB {

//     public static int  calculateProduct(int num1, int num2){
//         int product = num1*num2 ;
//         return product;
//     }
//      public static void main(String[] args) {

//        int product = calculateProduct(10, 14);
//         System.out.println(product);
//         int pro = calculateProduct(12, 14);
//         System.out.println(pro);
//         int pr = calculateProduct(10, 14);
//         System.out.println(pro);
//      }

// }

// // output : 

// 140
// 168
// 168


// factorial of a number 

// public class JavaB {

//     public static int  fact(int n){
//         int f = 1;
//         for(int i=1; i<=n; i++){
//             f = f * i;
//         }
//         return f;
//     }
//      public static void main(String[] args) {
//         System.out.println(fact(6));
//         System.out.println(fact(7));
//         System.out.println(fact(8));


      
//      }


//     }

    // output:

//     720
// 5040
// 40320

// BInomial Cofficient :

// public class JavaB {

//     public static int  factorial(int n){
//         int f = 1;
//         for(int i=1; i<=n; i++){
//             f = f * i;
//         }
//         return f;
//     }

//     public static int binCoff(int n , int r){
//         int fac_n = factorial(n);
//         int fac_r = factorial(r);
//         int fac_nmr = factorial(n-r);
//         int binCoff = fac_n / (fac_r * fac_nmr);
//         return binCoff ;

//     }
//      public static void main(String[] args) {
//         System.out.println(binCoff(5,2));
//         System.out.println(binCoff(5,3));
//         System.out.println(binCoff(5,4));
//     }
// }

// output :

// 10
// 10
// 5 

// Method Overloading 
   
// sum calculation 

// public class JavaB {

//     public static int  sum(int a , int b){
//         // int sum = a + b;
//         return a + b; // sum
//         }

//         public static int  sum(int a , int b , int c){
//            // int sum = a + b + c ;
//             return a + b + c;
//             }
//             public static int  sum(int a , int b, int c, int d){
//                 // int sum = a + b + c + d ;
//                 return a + b + c + d ;
//                 }
//     public static void main(String[] args) {
//         System.out.println(sum(3, 4));
//         System.out.println(sum(3, 4, 5));
//         System.out.println(sum(3, 4, 6, 7));
        
//     }
// }

// output :

// 7
// 12
// 20

// using datatypes 

// public class JavaB {

//     public static int  sum(int a , int b){
//         // int sum = a + b;
//         return a + b; // sum
//         }

//         public static float  sum(float a , float b){
//            // int sum = a + b + c ;
//             return a + b ;
//             }
           
//     public static void main(String[] args) {
//         System.out.println(sum(3, 4));
//         System.out.println(sum(3.5f, 4.7f));
        
        
//     }
// }

// 7
// 8.2


/// Prime or not 

// public class JavaB {

//     public static boolean isPrime(int n){
//         boolean isPrime = true;
//         for(int i=2; i<n ; i++){
//             if(n%i ==0){
//                 isPrime = false;
//                 break ;
//             }
//         }
//         return isPrime;
//     }

//     public static void main (String ar[]){
//         System.out.println(isPrime(8));
//     }
// }

// // false 


// optimized 

// public class JavaB {

//         public static boolean isPrime(int n){
//             boolean isPrime = true;
//             for(int i=2; i<Math.sqrt(n) ; i++){
//                 if(n%i ==0){
//                     isPrime = false;
//                     break ;
//                 }
//             }
//             return isPrime;
//         }
    
//         public static void main (String ar[]){
//             System.out.println(isPrime(2));
//         }
//     }
    
// true


// /// Print primes in range n 

// public class JavaB {

// public static boolean isPrime(int n){
//     boolean isPrime = true;
//     for(int i=2; i<=Math.sqrt(n); i++){
//         if(n%i==0){ // not prime 
//             isPrime = false;
//             break;

//         } 
        
//     }
//     return isPrime;
// }
//  public static void primesInRange(int n) 
// {
//     for(int i=2; i<=n; i++){
//         if(isPrime(i)){
//             System.out.print(i+ " ");
//         }
//     }    
//     System.out.println();
// }

// public static void main(String arg[]){
// primesInRange(20);

// }
// }

// // 2 3 5 7 11 13 17 19


// Binari to Decimal 
// public class JavaB {

// public static void binToDeci(int binNum){
//     int myNum = binNum;
//     int pow = 0;
//     int decNum = 0;

//     while(binNum > 0){
//         int lastDigit = binNum % 10 ;
//         decNum = decNum + (lastDigit * (int)Math.pow(2,pow) );
//         pow++;
//         binNum = binNum / 10;
//     }
//     System.out.println("Decimal no. of "+ myNum + "="+ decNum);
// }

// public static void main(String arg[]){
//     binToDeci(111);
// }
// }

// // 7


