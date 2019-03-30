package sort_test;


//选择排序
public class sort_chose {
	public void sort(int[]arrs) {
		int length = arrs.length;
		for(int i=0;i<length-1;i++) {
			int minI=i;
			for(int a=i;a<length;a++) {
				if(arrs[a]<arrs[minI]) {
					minI = a;
				}else {
					continue;
				}
			}
			//change
			int temp = arrs[minI];
			arrs[minI]=arrs[i];
			arrs[i]=temp;
			
		}
	}
}
