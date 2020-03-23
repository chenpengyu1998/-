package leetcode;


//https://leetcode-cn.com/problems/shu-zhi-de-zheng-shu-ci-fang-lcof/
public class myPowPro {
    
	public double myPow(double x, int n) {
        
		if(n>=0) return power(x,n);
		else return 1/power(x,n*(-1));
    }
	
	public double power(double x,int n) {
		if(n==0) return 1;
		return x*power(x,n-1);
		
	}
	
}
