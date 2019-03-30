package cpy;

import java.util.List;

public class replaceSpaceP {
    public static String replaceSpace(String str) {
    	return str.replace(" ", "%20");
    }
    
    
    
    
    public static void main(String[] args) {
		System.out.println(replaceSpace("hello world"));
	}
}
