package leetcode;


//https://leetcode-cn.com/problems/ju-zhen-zhong-de-lu-jing-lcof/
public class existPro {
	private char[][] board;
	private char[] str;
	
	public boolean dfs (int i,int j,int k) {
		if(i<0 || j<0 || i>=board.length || j>=board[0].length || board[i][j] != str[k])  return false;
		if(k==str.length-1) return true;
		char temp = board[i][j];
		board[i][j]=' ';
		boolean res = dfs(i+1,j,k+1) || dfs(i-1,j,k+1) || dfs(i,j+1,k+1) || dfs(i,j-1,k+1);
		board[i][j]=temp;
		return res;
	}
	
	
	
    public boolean exist(char[][] board, String word) {
    	
    	this.board=board;
    	str = word.toCharArray();
    	for(int i=0;i<board.length;i++) {
    		for(int j=0;j<board[0].length;j++) {
    			if(dfs(i,j,0)) return true;;
    		}
    	}
		return false;
    }
    
}
