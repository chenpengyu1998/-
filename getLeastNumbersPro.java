package leetcode;

//https://leetcode-cn.com/problems/zui-xiao-de-kge-shu-lcof/
public class getLeastNumbersPro {
    public int[] getLeastNumbers(int[] arr, int k) {
		
    	int[] res = new int[k];
    	arr = sort(arr);
    	for(int i=0;i<k;i++) {
    		res[i]=arr[i];
    	}
    	return res;
    }

    //bubble
    public int[] sort(int[] nums) {
    	for(int i=0;i<nums.length;i++) {
    		for(int j=0;j<nums.length-i-1;j++) {
    			if(nums[j]>nums[j+1]) {
    				int temp = nums[j];
    				nums[j]=nums[j+1];
    				nums[j+1]=temp;
    			}
    		}
    	}
    	return nums;
    }
    
    
    //quick
    public void Qsort(int start,int end,int[] nums) {
    	if(start>end) return;
    	int base=nums[start];
    	int left =start ;int right = end;
    	while(left<right) {
    		while(nums[right]>=base && left<right) right--;
    		while(nums[left]<=base && left<right) left++;
    		if(left<right) {
    			int temp = nums[right];
    			nums[right] = nums[left];
    			nums[left] = temp;
    		}
    	}
    	nums[start] = nums[right];
    	nums[right] = base;
    	Qsort(start,right-1,nums);
    	Qsort(right+1,end,nums);
    
    }
    
    
}
