package leetcode;


//https://leetcode-cn.com/problems/compress-string-lcci/

public class compressStringPro {
    public String compressString(String S) {
    	if(S.equals("")) return "";
        char[] str = S.toCharArray();
        String res="";
        char c = str[0];
        int num=1;
        
        for(int i=1;i<str.length;i++){
            if(str[i]==c) {
            	num++;continue;
            }
            res=res+c+num;
            c=str[i];num=1;
        }
        res=res+c+num;
        return res.length()<S.length()?res:S;
        
        
    }
}
