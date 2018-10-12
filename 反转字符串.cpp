////https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/5/strings/32/
////·´×ª×Ö·û´®
//
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
// //   string reverseString(string s) {
//	//	string result;
//	//	int size = s.length();
//	//	char* a = (char*)malloc(sizeof(char)*size);
//	//	strcpy(a,s.c_str());
//	//	int end = s.length()-1;
//	//	int start =0;
//	//	if(s.length()%2==0){
//	//		for(;start<end;end--,start){
//	//			char temp = a[start];
//	//			a[start] = a[end];
//	//			a[end] = temp;
//	//		}
//
//	//	}else{
//	//		for(;end!=start;end--,start++){
//	//			char temp = a[start];
//	//			a[start] = a[end];
//	//			a[end] = temp;
//	//		}
//	//	}
//	//	result = a;
//	//	return result;
//	//}
//
//    string reverseString(string s) {
//		reverse(s.begin(),s.end());
//		return s;
//	}
//
//
//
//int main(void){
//	string s= "abc";
//	s = reverseString(s);
//	return 0;
//}