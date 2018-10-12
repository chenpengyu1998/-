////  a ^ b, mod c问题  快速幂取模算法
////https://blog.csdn.net/dbc_121/article/details/77646508
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int function(int a, int b,int c){
//	int sum=1;
//	a=a%c;
//	while(c>0){
//		b/=2;
//		a=(a*a)%c;
//		if(b%2==1){
//			sum=(sum*a)%c;
//		}
//	}
//	return sum;
//}
//
//
//long long Mode(long long a, long long b, long long c)  
//{  
//    long long sum = 1;  
//    a = a % c;  
//      
//    while (b > 0) {  
//        if (b % 2 == 1)     //判断是否是奇数，是奇数的话将多出来的数事先乘如sum  
//            sum = (sum * a) % c;  
//      
//        b /= 2;  
//        a = (a * a) % c;// 不断的两两合并再取模，减小a和b的规模  
//    }  
//    return sum;  
//}  
//
//int function2(int a,int b,int c){
//	return int(pow(a,b))%c;
//}
//
//
//
//int main(void){
//	cout << function(2,9,11)<<endl;
//	cout << function2(2,9,11)<<endl;
//
//	return 0;
//}