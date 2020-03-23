package leetcode;


//https://leetcode-cn.com/problems/diao-zheng-shu-zu-shun-xu-shi-qi-shu-wei-yu-ou-shu-qian-mian-lcof/
public class exchangePro {
	
	
    public int[] exchange(int[] nums) {
		int left =0,right = nums.length-1;
		while(left<right) {
			while(nums[left]%2==1 && left < right) left++;
			while(nums[right]%2==0 && left < right) right--;
			if(left<right) {
				int temp = nums[left];
				nums[left] = nums[right];
				nums[right] = temp;
			}
			continue;
		}
		return nums;
    }
    
    
}
