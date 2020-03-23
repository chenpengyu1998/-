package leetcode;


//https://leetcode-cn.com/problems/partition-array-into-three-parts-with-equal-sum/
public class canThreePartsEqualSumPro {
	
	
    public boolean canThreePartsEqualSum(int[] A) {
    	int num=A.length/3,sum=0,count=0,temp=0;
    	for(int i=0;i<A.length;i++) sum+=A[i];
    	sum/=3;
    	for(int i=0;i<A.length;i++) {
    		temp+=A[i];
    		if(temp>sum) {temp=0;continue;}
    		if(temp==sum) {temp=0;count++;continue;}
    	}
    	if(count>=3) return true;
    	else return false;
    }
    
}
