import java.util.Arrays;
import java.util.Scanner;

public class TestArray {
    /// Method to takes array as input and returns the sorted array
    static int[] getSortSingleArray(int[] ar) {
        Arrays.sort(ar);
        return ar;
    }
    /**
     * A non-empty array A of length n is called an array of all possibilities,
     * if it contains all numbers between 0 & A.length - 1 inclusive.
     * Write a method named isAllPossibilities that accepts an integer array and
     * returns 1 if the array is an array of all possibilities,
     * otherwise it returns 0.
     */
     static int isAllPossibilities(int[] a) {
        int isAllPossibilities = 1;
        int arrLength = a.length;
        System.out.println("Length of array is: "+arrLength);
        if (arrLength == 0){
            isAllPossibilities = 0;
            return isAllPossibilities;
        }
        for (int i : a) {
            if(i>arrLength-1){
                isAllPossibilities = 0;
                break;
            }
        }
        return isAllPossibilities;
    }
     /**
     * An array is called balanced if it's even numbered elements( a[0],a[2],...) are even
     * and it's odd numbered elements(a[1],1[3],...) are odd.
     * Write a method named isBalanced that accepts an array of integers,
     * and return 1 if the array is balanced otherwise if return 0.
     * 
     */
     static int isBalanced(int[] a) {
        for (int i = 0; i < a.length; i++) {
            if(i%2==0){
                if(a[i]%2 != 0){
                    return 0;
                }
            }else if(i%2!=0){
                if(a[i]%2 == 0){
                    return 0;
                }
            }
        }
        return 1;
    }
    public static void main(String[] args) {
        // Single Dimensional Array
        int singleDArray[] = { 0,1,2,3,4,7 };
        // For each loop
        for (int i : singleDArray) {
            System.out.println(i);
        }
        System.out.println("Is all possibilities: "+ isAllPossibilities(singleDArray));
        System.out.println("Is balanced: "+ isBalanced(singleDArray));
        // Searching position of a element of an array
        int pos = Arrays.binarySearch(singleDArray, 5);
        if (pos > 0) {
            System.out.println("Index of 5 is " + pos);
        } else {
            System.out.println("Cannot Find the element");
        }
        System.out.println("Printing sorted Single Array");
        for (int i : getSortSingleArray(singleDArray)) {
            System.out.println(i);
        }
        // Multi Dimensional Array
        Scanner sc = new Scanner(System.in);
        int multiDArray[][] = new int[3][3];
        // int multiDArray[][] = {{1,2,3},{4,5,6},{7,8,9}};
        // Input items for multi dimensional array
        System.out.println("Enter elements for multi dimensional Array");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                multiDArray[i][j] = sc.nextInt();
            }
        }
        sc.close();
        System.out.println("Entered elements are:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(multiDArray[i][j] + "\t");
            }
            System.out.println();
        }
    }
}