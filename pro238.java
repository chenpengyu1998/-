package leetcode;

public class pro238 {
	class Solution {
	     public int[] productExceptSelf(int[] nums) {
	        int[] arrs = new int[nums.length];
	        int num=1;
	        for(int i=0;i<nums.length;i++) {
	        	num*=nums[i];
	        }
	        
	        
	        for(int i=0;i<nums.length;i++) {
	        	if(nums[i]!=0){
	                arrs[i]=num/nums[i];   
	            }else{
	                int x=1;
	                for(int a=0;a<nums.length;a++){
	                    if(a==i){
	                        continue;
	                    }else{
	                        x*=nums[a];
	                    }
	                }
	                arrs[i]=x;
	            }
	        }
	        
	        
	        return arrs;
	    }
	        

	}
}
