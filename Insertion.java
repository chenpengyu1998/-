package sort_test;

//插入排序
public class Insertion {
	public void sort(int[] a) {
		int length=a.length;
		for(int i=1;i<length;i++) {
			int index = i-1;
			int value=a[i];
			while(index>=0 && a[index]>value) {
				a[index+1]=a[index];
				index--;
			}
			a[index+1]=value;
		}
	}
}
