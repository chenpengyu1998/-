package leetcode;
//https://leetcode-cn.com/problems/da-yin-cong-1dao-zui-da-de-nwei-shu-lcof/
public class printNumbersPro {
	
	public int power(int base,int pow) {
		int res = 1;
		while(pow>0) {
			if(pow%2==1) res*=base;
			pow/=2;
			base*=base;
		}
		return res;
	}
	
	
	
    public int[] printNumbers(int n) {
    	int[] res = new int[(int) power(10,n)-1];
        for(int i=0;i<power(10,n)-1;i++) {
        	res[i]=i+1;
        }
        return res;
    }
}
