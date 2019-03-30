package leetcode;

public class greed {
	//人命币面值
	private static int[] values = { 1, 2, 5, 10, 20, 50, 100 };
	//对应的人命币币数
	private static int[] counts = { 3, 1, 2, 1, 1, 3, 5 };
	
	
	public static int[] solution(int[] RMB,int[] RMBN,int sum){
		int[] result = new int[RMB.length];
		int osum=sum;
		for(int i=RMBN.length-1;i>=0;i--) {
			int temp=RMBN[i]>(osum/RMB[i])?(osum/RMB[i]):RMBN[i];
			osum-=temp*RMB[i];
			result[i]=temp;
		}
		
		return result;
	}
	public static void main(String[] args) {
		int[] a = solution(values,counts,442);
		for(int i:a) {
			System.out.print(i+" ");
		}
	}
	
	
}
