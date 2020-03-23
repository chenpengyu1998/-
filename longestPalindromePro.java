package leetcode;

import java.util.HashMap;
import java.util.Map;

//https://leetcode-cn.com/problems/longest-palindrome/
public class longestPalindromePro {
    public int longestPalindrome(String s) {
    	int res=0;
    	Map<String,Integer> map = new HashMap<String, Integer>();
    	char[] array = s.toCharArray();
    	for(int i=0;i<array.length;i++) {
    		if(map.get(array[i]+"")==null) map.put(array[i]+"", 1);
    		else {
    			int temp =map.get(array[i]+"")+1;
    			map.put(array[i]+"", temp);
    		}
    	}
    	boolean odd=false;
    	for(Map.Entry<String, Integer> i : map.entrySet()) {
    		int temp = i.getValue();
    		if(temp%2!=0) {
    			res+=temp-1;
    			odd=true;
    		}
    		else res+=temp;
    	}
    	if(odd) return res+1;
    	else return res;
    }
}
