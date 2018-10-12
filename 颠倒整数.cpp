//////https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/5/strings/33/
//////颠倒整数
////
////
////
////
////
////#include <iostream>
////#include <math.h>
////using namespace std;
////
////
////
////    int reverse(int x) {
////        bool negative = false;
////		if(x<0){
////			negative =  true;
////			x=x*-1;
////		}
////		long result =0;
////		int num[100]={0};
////		int length=0;
////		while(x!=0){
////			num[length] = x%10;
////			x/=10;
////			length++;
////		}
////		for(int i=0;i<=length-1;i++){
////			result*=10;
////			result+=num[i];
////		}
////		if(negative){
////			result*=-1;
////			
////		}
////		if(result > INT_MAX || result < INT_MIN) return 0;
////		else return result;
////    }
////
////
////
////
////
////int main(void){
////	/*cout << reverse(-123) << endl;*/
////	cout << INT_MAX << endl;
////
////	return 0;
////}
//
//
//    int reverse(int x) {
//        long ans = 0;
//        long a[100];
//        int i = 0;
//        while(x != 0){
//            a[i] = x % 10;
//            x /= 10;
//            i ++;
//        }
//        for(int j = i - 1 , k = 1; j >= 0 ; j --){
//            ans += a[j] * k;
//            if(ans > INT_MAX || ans < INT_MIN)    return 0;
//            k *= 10;
//        }
//        return ans;
//    }
//
//---------------------
//
//本文来自 _Wihtesnake 的CSDN 博客 ，全文地址请点击：https://blog.csdn.net/qq_32805671/article/details/79966765?utm_source=copy 