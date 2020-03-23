package leetcode;

import java.util.ArrayList;
import java.util.List;

public class isPalindromeP {
	List<List<String>> listList = new ArrayList<List<String>>();
	
	
	
	private void nextWord(String s,int index,ArrayList<String> list) {
		if(index == s.length()) {
			listList.add(new ArrayList<String>(list));
			return;
		}
		for(int i=index;i<s.length();i++) {
			String subStr = s.substring(index, i+1);
			if(isPalindrome(subStr)) {
				list.add(subStr);
				nextWord(s, i+1, list);
				list.remove(list.size()-1);
			}
			
			
		}
		
		
	}
	
	private boolean isPalindrome(String s) {
		for(int i=0;i<s.length()/2;i++) {
			if(s.charAt(i)!=s.charAt(s.length()-i-1)) {
				return false;
			}
		}
		return true;
	}
	
	
	
	
	
	
	
	public List<List<String>> partition(String s){
		nextWord(s, 0, new ArrayList<String>());
		return listList;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
