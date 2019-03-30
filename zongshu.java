package leetcode;
//求众数
//https://leetcode-cn.com/explore/interview/card/top-interview-quesitons-in-2018/264/array/1127/

import java.util.HashMap;
import java.util.Map;

public class zongshu {
//    public int majorityElement(int[] nums) {
//        Map<Integer,Integer> map = new HashMap<Integer,Integer>();
//        int result=0;
//        for(int i:nums){
//        	int num = 0;
//            if(map.get(i)==null){
//                map.put(i, 1);
//                num=1;
//            }else {
//            	num = map.get(i);
//            	map.put(i, ++num);
//            }
//            if(num>nums.length/2) {
//            	result = i;
//            }
//        }
//        return result;
//    }
    public int majorityElement(int[] nums) {
    	int result=nums[0];
    	int count=1;
    	for(int i=1;i<nums.length;i++) {
    		if(result==nums[i]) {
    			count++;
    		}else {
    			count--;
    			if(count==0) {
    				result = nums[i+1];
    				count++;
    			}
    		}
    	}
    	
        return result;
    }
}
