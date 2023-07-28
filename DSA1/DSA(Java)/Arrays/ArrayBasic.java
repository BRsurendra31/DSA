import java.util.*;




// public class ArrayBasic {

//     // array as Function arguments : 

//     public static void update(int marks[], int nonChangeable){
//         nonChangeable = 10;
//         for(int i=0; i<marks.length; i++){
//             marks[i] = marks[i] + 1;
//             //System.out.print( marks[i] + " ");
//         }
        

//     }
    

// public static void main(String a[]) {

//     int marks[] = {3, 4, 5};
//     int nonChangeable = 8;
//     update(marks, nonChangeable);

//     System.out.println(" nonChageable :" + nonChangeable);


//     // // print not updated marks
//     for(int i=0; i<marks.length; i++){
//     System.out.print(marks[i] + " ");
//     }
// }
// }

// //  nonChageable :8
// // 4 5 6


// public class ArrayBasic {

//     public static int linearSearch(int numbers[], int key){
//         for(int i=0 ; i<numbers.length; i++){
//             if(numbers[i]==key){
//                 return i;
//             }
//         }
//         return -1;
//     }

//     public static void main(String a[]){
//         int numbers[] = {4 , 6, 7, 8 ,9};
//         //int key = 10; // not found 
//         int key = 7; // found at index 2

//         int index = linearSearch(numbers, key);
//         if(index== -1){
//             System.out.println(" key not found");
//         } else{
//             System.out.println(" key is at index :" + index);
//         }


//     }

// }

// // key is at index :2


// Largest in Array

// // Q. find largest and smallest  no. in array

// public class ArrayBasic {
//     public static int getLarest(int numbers[]){
//         int largest = Integer.MIN_VALUE; // - infinity
//         int smallest = Integer.MAX_VALUE; // + infinity

//         for(int i=0; i<numbers.length; i++){
//             if(largest<numbers[i]){
//                 largest = numbers[i]; // update largest value

//             }
//             if(smallest > numbers[i] ){
//                 smallest = numbers[i];
//             }

//         }
//         System.out.println("smallest value : " + smallest);
//         return largest;
//     }



//     public static void main(String a[]){

//         int numbers[] = { 4, 6, 0, 7,1, 2};

//         System.out.println("largest value : " + getLarest(numbers));
//     }
        
// }

// // smallest value : 0
// // largest value : 7



// Reverse an Array 


// public class ArrayBasic {

//     public static void reverseArray(int numbers[]){

//         int start = 0, end = numbers.length -1;
//         while(start < end){

//             int temp = numbers[end];
//             numbers[end] = numbers[start];
//             numbers[start] = temp;
//             start++;
//             end--;
//         }
//     }
//     public static void main(String a[]){
//         int numbers[] = {2, 4, 6, 8, 10};

//         reverseArray(numbers);

//         // print 
//         for(int i=0; i <numbers.length; i++){
//             System.out.print(numbers[i] + " ");
            
//         }
//         System.out.println();
//     }

// }

// // 10 8 6 4 2



/// pairs in array :

// public class ArrayBasic {

//     public static void PairsInArray(int numbers[]){

//         int tp = 0;

//         for(int i=0; i < numbers.length; i++){
//             int current = numbers[i];

//             for(int j=i+1; j<numbers.length; j++){
//                 System.out.print("(" + current + "," + numbers[j] + ")");

//                 tp++;
//             }
//             System.out.println();

//         }
//         System.out.println(" Total pairs :" + tp);


//     }


//     public static void main(String a[]){
//         int numbers[] = {2,4,6,8,10};
//         PairsInArray(numbers);

//      }

// }


// // (2,4)(2,6)(2,8)(2,10)
// // (4,6)(4,8)(4,10)     
// // (6,8)(6,10)
// // (8,10)

// //  Total pairs :10

    
    

