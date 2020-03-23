package leetcode;


//https://leetcode-cn.com/problems/er-jin-zhi-zhong-1de-ge-shu-lcof/
public class hammingWeightPro {
	// you need to treat n as an unsigned value
    public int hammingWeight(int n) {
    	int res=0;
    	while(n!=0) {
    		n&=n-1; res++;
    	}
    	
    	return res;
    }
}
