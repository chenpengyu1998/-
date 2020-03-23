package leetcode;



//https://leetcode-cn.com/problems/majority-element/
public class majorityElementPro {
    
	
	
	public int majorityElement(int[] nums) {
		int res=nums[0];
		int num=0;
		for(int i : nums) {
			if(i==res) num++;
			else {
				num--;
				if(num<0) {
					num=0;
					res=i;
				}
			}
		}
		return res;
    }
	
	
	
}
