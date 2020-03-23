package leetcode;

public class test {
	
	
	public static int test(String[] str) {
		int length=0;
		for(String s:str) {
			length+=s.length();
		}
		
		for(int i=0;i<str.length;i++) {
			boolean[] dp = new boolean[length+1];
			dp[0]=true;
			for(int y = i+1;y<str.length;y++) {
				
			}
			
		}
		
		
		
		
		
		
		
		return 0;
	}
	
	
	
	
	
	
	
	
	public static void main(String[] args) {
		
	}
}
