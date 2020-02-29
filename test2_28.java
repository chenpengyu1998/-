
import java.util.Scanner;

public class test {
	
	public static int jc(int i) {
		if(i<0) {
			System.out.println("输入违规数据");
			return 0;
		}
		int sum;
		if(i==0 || i==1) {
			return 1;
		}else {
			return jc(i-1)*i;
		}
	}
	
	
	public static void main(String args[]) {
		System.out.println("请输入一个数据:");
		Scanner scanner = new Scanner(System.in);
		int num = scanner.nextInt();
		System.out.println(jc(num));
	}
	/*
		input: 5  return: 120 (大于1情况，但结果小于2的31次方)
		input: -1 return: “输入违规数据 0” (情况小于0情况即违规数据）
		input 0   return: 0
	
	
	*/
}
