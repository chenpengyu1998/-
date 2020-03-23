package leetcode;


//https://leetcode-cn.com/problems/ti-huan-kong-ge-lcof/
public class replaceSpacePro {
	
	
	public String replaceSpace(String s) {
		String out="";
		for(int i=0;i<s.length();i++) { 
			if(s.charAt(i)==' ') {out+="%20";}
			else out+=s.charAt(i);
		}
		return out;
		
	}
	
	
}
