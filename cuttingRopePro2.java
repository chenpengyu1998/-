package leetcode;

//https://leetcode-cn.com/problems/jian-sheng-zi-ii-lcof/
public class cuttingRopePro2 {
    public int cuttingRope(int n) {
        if(n<3) return n-1;
    	int a=n/3;int b=n%3;
        if(b==2) return (int)Math.pow(3, a)*2%1000000008;
        if(b==1) return (int)Math.pow(3, a-1)*4%1000000008;
        return (int)Math.pow(3, a)%1000000008;
    }
}
