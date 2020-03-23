package leetcode;


//https://leetcode-cn.com/problems/minimum-increment-to-make-array-unique/
public class minIncrementForUniquePro {
    public int minIncrementForUnique(int[] A) {
    	boolean[] anum = new boolean[40000];
    	int res=0;
    	for(int i : A) {
    		if(anum[i]==false) {
    			anum[i]=true;
    		}else {
    			int temp = i;
    			while(anum[i]!=false) {
    				i++;
    				res++;
    			}
    			anum[i]=true;
    		}
    	}
    	return res;
    }
}
