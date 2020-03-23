package leetcode;

import java.util.LinkedList;
import java.util.Queue;

//https://leetcode-cn.com/problems/max-area-of-island/

public class maxAreaOfIslandPro {
    int[][] graph;
	
	public int maxAreaOfIsland(int[][] grid) {
    	graph = grid;
    	int res=0;
    	for(int i=0;i<graph.length;i++) {
    		for(int j=0;j<graph[0].length;j++) {
    			res = Math.max(res, dfs(i,j));
    		}
    	}
    	return res;
    }
    
    public int dfs(int i,int j) {
    	if(i<0 || j<0 || i>=graph.length || j >= graph[0].length || graph[i][j]==0) return 0;
    	int sum =1;
    	graph[i][j]=0;
    	sum+=dfs(i-1,j);
    	sum+=dfs(i+1,j);
    	sum+=dfs(i,j-1);
    	sum+=dfs(i,j+1);
    	return sum;
    }
    
	
	
	
}
