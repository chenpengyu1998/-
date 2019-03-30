//package leetcode;
//
//
////https://leetcode-cn.com/problems/longest-palindromic-substring/
////ERROR
//public class longestPalindromeP {
//    public String longestPalindrome(String s) {
//		if(s==null || s.equals("")) {
//			return "";
//		}
//		char[] charArr = s.toCharArray();
//		int max=0,len=0,index=1;
//		for(int i=1;i<s.length();i++) {
//			for(int j=1;i-j>=0 && i+j <s.length();j++) {
//				if(charArr[i-j]==charArr[i+j]) {
//					index=--i;
//					break;
//				}
//				len = 2*j+1;
//			}
//			if(max<len) {
//				
//			}
//			for(int j=1;i-j>=0 && i+j <s.length();j++) {
//				if(charArr[i-j]==charArr[i+j+1]) {
//					break;
//				}
//				len = 2*j+2;
//			}
//			max = max<len?len:max;
//		}
//		
//		
//		
//		
//		
//		
//		
//		
//		
//		
//		
//    }
//}
