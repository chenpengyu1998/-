package leetcode;

public class fibPro {
    
	private int[] nums ;
	
	public int read(int num) {
		if(nums[num]==0){
			nums[num]=(read(num-1)+read(num-2))%1000000007;
		}
		return nums[num];
	}
	
	public int res(int num) {
        if(num==0) return 0;
        if(num==1 || num==2) return 1;
		return read(num);
	}
	
	
	public int fib(int n) {
		nums = new int[n+3];
		nums[0]=0;nums[1]=1;nums[2]=1;
			return res(n);
    }
}
