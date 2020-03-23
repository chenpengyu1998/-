package leetcode;


//https://leetcode-cn.com/problems/biao-shi-shu-zhi-de-zi-fu-chuan-lcof/
public class isNumberPro {
	
	
    public boolean isNumber(String s) {
        try {
        	System.out.println(Float.valueOf(s));
        	return true;
        }catch(NumberFormatException e) {
        	return false;
        }
    }
    
}
