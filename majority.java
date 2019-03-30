package leetcode;

import java.util.HashMap;
import java.util.Map;

public class majority {
//    public int majorityElement(int[] nums) {
//        int RN=0;
//        Map<Integer,Integer> map= new HashMap<Integer,Integer>();
//        int n = nums.length;
//        for(int num:nums) {
//        	Integer count = map.get(num);
//        	if(count == null) {
//        		count=1;
//        	}else {
//        		count++;
//        	}
//        	map.put(num, count);
//            if(map.get(num) > n/2)
//                return num;
//        }
//        
//        
//        return RN;
//    }
	
	
	
    public int majorityElement(int[] nums) {
    	int count = 1;
    	int num = nums[0];
    	for(int i=0;i<nums.length;i++) {
    		if(num==nums[i]) {
    			count++;
    		}else {
    			count--;
    			if(count==0) {
    				num=nums[i+1];
    			}
    		}
    	}
    	return num;
    }
}
