package leetcode;

//https://leetcode-cn.com/problems/ji-qi-ren-de-yun-dong-fan-wei-lcof/
public class movingCountPro {
	private int m,n;
	private int[][] map;
    public int movingCount(int m, int n, int k) {
    	this.m=m;this.n=n;
    	map = new int[m][n];
    	
    	
		return dfs(0,0,k);
    }
    
    public int sum(int a,int b) {
    	return a%10+a/10%10+b%10+b/10%10;
    }
    
    public int dfs(int i,int j,int k) {
    	if(i<0 || i>=m || j<0 || j>=n || sum(i,j)>k || map[i][j]==1) return 0;
    	map[i][j]=1;
    	return 1+dfs(i+1,j,k)+dfs(i,j+1,k);
    }
    
    
	
    
}
