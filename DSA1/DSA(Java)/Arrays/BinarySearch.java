

public class BinarySearch {


    public static int binarySearch(int numbers[], int key){

        int start = 0, end = numbers.length - 1;
       // int mid = (start + end) / 2;
        
        while(start <= end ){
            int mid = (start + end) / 2;
            if(numbers[mid] == key){ // key found 
                return mid;
            }
            if(numbers[mid] < key){ // right 
                start = mid +1;
            } else{ // left

                end = mid - 1;
            }
        }
        return -1; // not found
    }
    public static void main(String a[]){

        int numbers[] = {23, 45, 73,88, 98,100};
        int key = 73;

        System.out.println(" index of key is  : " + binarySearch(numbers, key));
    }
    
}

// index of key is  : 2
