package leetcode;

import java.util.Arrays;
import java.util.Random;

public class BreakArrays {
    private int arr1[];
    private int arr2[];
    public BreakArrays(int[] nums) {
        arr1 = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    public int[] reset() {
        return arr1;
    }
    
    /** Returns a random shuffling of the array. */
    public int[] shuffle() {
        arr2 = Arrays.copyOf(arr1,arr1.length);
        Random rd = new Random();
        for(int i=arr1.length-1;i>0;i--) {
        	int num =  rd.nextInt(i+1);
        	
        	int temp = arr2[num];
        	arr2[num]=arr2[i];
        	arr2[i]=temp;
        }
        return arr2;
    }
}
