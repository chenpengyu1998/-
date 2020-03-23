package leetcode;

import java.util.Stack;

//https://leetcode-cn.com/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof/


public class CQueue {
	private Stack<Integer> st1 ;
	private Stack<Integer> st2 ;
    public CQueue() {
    	st1= new Stack<Integer>();
    	st2 = new Stack<Integer>();
    }
    
    public void appendTail(int value) {
    	st1.push(value);
    }
    
    public int deleteHead() {
		if(st2.size()==0) {
			if(st1.size()!=0) {
				int size = st1.size();
		    	for(int i=0;i<size;i++) {
					st2.push(st1.pop());
				}
	    	
			}
		}
		if(st2.size()==0) return -1;
		return st2.pop();
    }
	
	
}
