package leetcode;

import java.util.Arrays;

import com.sun.xml.internal.bind.v2.runtime.unmarshaller.XsiNilLoader.Array;

//https://leetcode-cn.com/problems/qing-wa-tiao-tai-jie-wen-ti-lcof/
public class numWaysPro {
	
    public int numWays(int n) {
    	int[] dp = new int[n+1];
    	Arrays.fill(dp,1);
    	for(int i=2;i<n+1;i++) {
    		dp[i]=(dp[i-1]+dp[i-2])%1000000007;
    		System.out.println("dp["+i+"]: "+dp[i]);
    	}
    	return dp[n];
    }
}
