////https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/5/strings/34/
////字符串中的第一个唯一字符
//
//
//#include <iostream>
//using namespace std;
//
//
//    int firstUniqChar(string s) {
//		
//		if(s.empty()){
//			return -1;
//		}
//
//		int num['z'+1]={0};
//		for(int i=0;i<s.length();i++){
//			num[s[i]]++;
//		}
//		for(int i=0;i<s.length();i++){
//			if(num[s[i]]==1){
//				return i;
//			}
//			if(i==s.length()-1){
//				return -1;
//			}
//		}
//    }
//
//
//
//int main(void){
//
//	return 0;
//}