package leetcode;

import java.util.ArrayList;
import java.util.List;

public class word_split {
    
	
	
	public static boolean wordBreak(String s, List<String> wordDict) {
        int length = s.length();
        int left=0;
        while(left<length ) {
        	int leftF = left;
        	char str = s.charAt(left);
        	List<String> WD = new ArrayList<String>();
        	for(String S : wordDict) {
        		if(S.length()>s.length()) {
        			continue;
        		}
        		if(S.charAt(0)==str) WD.add(S);
        	}
        	if(WD.isEmpty()) {
        		return false;
        	}
        	for(String S:WD) {
        		boolean B=true;
        		for(int i=0;i<S.length();i++) {
        			if(S.charAt(i)!=s.charAt(i+left)){
        				B=false;
        				break;
        			}
        		}
        		if(B) {
        			left+=S.length();
        		}
        		
        	}
        	if(left == leftF) {
        		return false;
        	}
        	
        	
        }
        
        return true;
    }
	
	
	
	public static void main(String[] args) {
		List<String> s = new ArrayList<String>();
		String str = "leetcode";
		s.add("leet");
		s.add("code");
		if(wordBreak(str,s)) {
			System.out.println("true");
		}else {
			System.out.println("false");
		}
		
		
	}
	
}
