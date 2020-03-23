package leetcode;

import java.util.Arrays;

//https://leetcode-cn.com/problems/longest-increasing-subsequence/
public class lengthOfLISPro {

    public int lengthOfLIS(int[] nums) {
    	if(nums.length==0) return 0;
    	int res=1;
    	int[] dp = new int[nums.length];
    	Arrays.fill(dp, 1);   //给这个数组全部赋值为1
    	for(int i=0;i<nums.length;i++) {
    		for(int j=0;j<i;j++) {
    			if(nums[i]>nums[j]) dp[i]=Math.max(dp[i], dp[j]+1);
    		}
    		res = Math.max(res, dp[i]);
    	}
    	return res;
    }
	
	
}
