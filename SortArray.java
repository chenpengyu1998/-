package leetcode;

import com.sun.scenario.effect.Merge;

public class SortArray {
    public static void merge(int[] nums1, int m, int[] nums2, int n) {
        for(int i=0;i<n;i++) {
        	nums1[m+i]=nums2[i];
        }
        
        for(int i:nums1) {
        	System.out.print(i+"  ");
        }
        num=nums1;
        quick(0,m+n-1);
        System.out.println();
        for(int i:nums1) {
        	System.out.print(i+"  ");
        }
        
    }
    private static int num[];
    
    public static void quick(int left,int right) {
    	
    	if(left>right) {
    		return;
    	}
    	int first = num[left];
    	int i=left,j=right;
    	while(i!=j) {
    		while(i<j && num[j]>=first) j--;
    		while(i<j && num[j]<=first) i++;
    		if(i<j) {
	    		int temp = num[i];
	    		num[i] = num[j];
	    		num[j] = temp;    		
    		}
    	}
    	
    	num[left]=num[i];
    	num[i]=first;
    	quick(left,i-1);
    	quick(i+1,right);
    	
    }
    
    
    public static void main(String[] args) {
		int[] nums1= {1,3,4,0,0,0};
    	int[] nums2= {2,6,5};
    	merge(nums1,3,nums2,3);
	}
    
    
}
