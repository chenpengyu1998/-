package leetcode;


//https://leetcode-cn.com/problems/water-and-jug-problem/
public class canMeasureWaterPro {
    public boolean canMeasureWater(int x, int y, int z) {
    	if(z==0) return true;
    	if(x+y<z) return false;
    	if(x>y) {
    		int temp = x;
    		x=y;
    		y=temp;
    	}
    	if(x==0) return y==z;
    	return z%gcd(x,y)==0;
    	
    }
    
    
    
    public int gcd(int x,int y) {
    	if(y==0) return x;
    	return gcd(y,x%y);
    }
    
//    public boolean dps(int x,int y,int z) {
//    	if(z==0) return true;
//    	if(z<0) return false;
//    	if(x<y) {
//    		int temp;
//    		temp = x;
//    		x = y;
//    		y = temp;
//    	}
//    	boolean Dx = false;
//    	if(x!=0) Dx = dps(x,y,z-x);
//    	boolean Dy = false;
//    	if(y!=0) Dx = dps(x,y,z-y);
//    	boolean Dxy = false;
//    	if(x-y!=0) Dxy = dps(x,y,z-x+y);
//    	
//    	return Dx || Dy || Dxy;
//    }
    
    
}
