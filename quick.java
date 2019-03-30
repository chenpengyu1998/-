package sort_test;

public class quick {
	
	public int a[];
	





	public void setA(int[] a) {
		this.a = a;
	}






	public int[] getA() {
		return a;
	}






	public void sort(int left,int right) {
		if(left>right) {
			return;
		}
		int temp = a[left];
		int i=left;
		int j=right;
		while(i!=j) {
			while(a[j]>=temp && i<j) j--;
			while(a[i]<=temp && i<j) i++;
			if(i<j) {
				int tempa = a[i];
				a[i] = a[j];
				a[j] = tempa;
			}
		}
		a[left]=a[i];
		a[i]=temp;
		sort(left,i-1);
		sort(i+1,right);
		
		
		
		
	}
	
	
	
	
	
	
	
	
	public void sort2(int left,int right) {
		if(left>right) {
			return ;
		}
		
		int temp = a[left];
		int l = left,r=right;
		while(l!=r) {
			while(a[r]<=temp && l<r) r--;
			while(a[l]>=temp && l<r) l++;
			if(l<r) {
				int templ = a[l];
				a[l] = a[r];
				a[r] = templ;
			}
		}
		a[left] = a[l];
		a[l] = temp;
		sort2(left,l-1);
		sort2(l+1,right);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
