package sort_test;

//冒泡排序
public class Bubble {
	public void sort(int[] a) {
		for(int i=0;i<a.length-1;i++) {
			for(int b=0;b<a.length-i-1;b++){
				if(a[b]>a[b+1]) {
					//change
					int temp=a[b];
					a[b]=a[b+1];
					a[b+1]=temp;
				}
			}
		}
		
		
	}
}
