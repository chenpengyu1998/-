package leetcode;

import java.util.HashMap;
import java.util.Map;

//https://leetcode-cn.com/problems/find-words-that-can-be-formed-by-characters/
public class countCharactersPro {
	
    public int countCharacters(String[] words, String chars) {
    	Map<String, Integer> c = new HashMap<String,Integer>();
    	int res=0;
    	char[] ch = chars.toCharArray();
    	for(int i=0;i<ch.length;i++) {
    		if(c.get(ch[i]+"")==null) c.put(ch[i]+"", 1);
    		else {
    			Integer in = c.get(ch[i]+"");
    			c.put(ch[i]+"", in+1);
    		}
    	}
    	
    	for(String s : words) {
    		char[] word = s.toCharArray();
    		Map<String, Integer> demo =new HashMap<String, Integer>();
    		demo.putAll(c);
    		boolean temp=false;
    		for(int i=0;i<word.length;i++) {
    			Integer o = demo.get(word[i]+"");
    			if(o==null || o==0) {
    				temp = false; break;
    			}
    			temp = true;
    			demo.put(word[i]+"", o-1);
    		}
    		if(temp==true) res+=s.length();
    		continue;
    	}
    	
    	
    	return res;
    }
    
}
