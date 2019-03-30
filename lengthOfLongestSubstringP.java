package leetcode;

import java.util.HashMap;
import java.util.Map;

public class lengthOfLongestSubstringP {
    public int lengthOfLongestSubstring(String s) {
        if(s.equals("")){
            return 0;
        }
        if(s.length()==1){
            return 1;
        }
        char[] chars = s.toCharArray();
        int max=0;
        for(int i=0;i<chars.length;i++) {
        	Map<Character,Integer> map = new HashMap<Character, Integer>();
        	int maxi=0;
        	for(int j=i;j<chars.length;j++) {
        		
        		if(map.get(chars[j])==null) {
        			map.put(chars[j], 1);
        			maxi++;
        		}else {
        			break;
        		}
                if(maxi>max) {
        			max = maxi;
        		}
        	}
        }
        return max;
    }
}
