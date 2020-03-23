package leetcode;
//https://leetcode-cn.com/problems/greatest-common-divisor-of-strings/solution/java-hen-jian-ji-yi-yan-jiu-neng-kan-ming-bai-by-s/
public class gcdPro {
	public int gcd1(int a,int b) {
		if(b==0) return a;
		else return gcd1(b,a%b);
	}
	
	public int gcd2(int a,int b) {
		return b==0?a:gcd2(b,a%b);
	}
}
