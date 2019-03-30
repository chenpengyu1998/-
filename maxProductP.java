package leetcode;


//https://leetcode-cn.com/explore/interview/card/top-interview-quesitons-in-2018/264/array/1126/
//乘积最大子序列
public class maxProductP {
    public int maxProduct(int[] nums) {
    	if(nums.length==1)  return nums[0];
    	if(nums.length==0)	return 0;
    	int[] max = new int[nums.length];
    	int[] min = new int[nums.length];
    	max[0] = min[0] = nums[0];
    	for(int i=1;i<nums.length;i++) {
    		max[i]=Math.max(Math.max(max[i-1]*nums[i], min[i-1]*nums[i]), nums[i]);
    		min[i]=Math.min(Math.min(max[i-1]*nums[i], min[i-1]*nums[i]), nums[i]);
    	}
    	int result = max[0];
    	for(int i=0;i<max.length;i++) {
    		if(max[i]>result) {
    			result = max[i];
    		}
    	}
    	return result;
    }
}
