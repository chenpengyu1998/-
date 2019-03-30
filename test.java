package sort_test;


//https://www.cnblogs.com/onepixel/articles/7674659.html
//参考文档


public class test {
	private static int[] arrs= {1,9,2,8,7,3,4,6,5,0};
	
	public static  void print() {
		for(int i=0;i<arrs.length;i++) {
			System.out.print(arrs[i]+"\t");
		}
	}
	
	
	
	public static void main(String[] args) {
		quick test = new quick();
		test.setA(arrs);
		test.sort(0,arrs.length-1);
		arrs=test.getA();
		print();
		
	}
	
	
	
}
