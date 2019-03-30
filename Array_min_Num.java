package cpy;

public class Array_min_Num {
    public static int minNumberInRotateArray(int [] array) {
        if(array.length==0){
            return 0;
        }
        int min = Integer.MAX_VALUE;
        for(int i=array.length-1;i>=0;i--){
            if(min>=array[i]){
                min=array[i];
            }else{
                break;
            }
        }
        return min;
        
    }
    
    
    public static void main(String[] args) {
    	
    	int[] a= {6738,6739,6741,6742,6742,6743,6743,6747,6748,6749,6749,6754,6755,6755,6756,6759,6759,6761,6763,6764,6767,6767,6767,6768,6768,6770,6778,6782,6782,6782,6783,6783,6785,6785,6788,6791,6793,6793,6794,6795,6799,6799,6799,6804,6805,6807,6807,6807,6808,6808,6809,6810,6812,6812,6812,6814,6815,6815,6817,6817,6817,6818,6820,6822,6824,6825,6825,6825,6826,6827,6829,6831,6832,6834,68};
    	
		System.out.println(minNumberInRotateArray(a));
	}
}
