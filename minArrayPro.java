package leetcode;


//https://leetcode-cn.com/problems/xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof/
public class minArrayPro {
//    public int minArray(int[] numbers) {
//        int min = 100;
//        for(int i=0;i<numbers.length;i++) {
//        	min = Math.min(min, numbers[i]);
//        }
//    	return min;
//    }
    public int minArray(int[] numbers) {
        int i = 0, j = numbers.length - 1;
        while (i < j) {
            int m = (i + j) / 2;
            if (numbers[m] > numbers[j]) i = m + 1;
            else if (numbers[m] < numbers[j]) j = m-1;
//            else j--;
            else i++;
        }
        return numbers[i];
    }
	
	
}
