////https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/5/strings/35/
////有效的字母异位词
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//    bool isAnagram(string s, string t) {
//        sort(s.begin(),s.end());
//		sort(t.begin(),t.end());
//		
//		if(s.empty() && t.empty()){
//			return true;
//		}
//		
//		if(s.length()!=t.length()){
//			return false;
//		}else{
//			for(int i=0;i<s.length();i++){
//
//				if(s[i]==t[i]){
//					continue;
//				}else{
//					return false;
//				}
//			}
//			return true;
//		}
//    }
//
//
// 
//
//int main(void){
//	string a = "a";
//	string b = "b";
//
//	bool c = isAnagram(a,b);
//	cout << c << endl;
//
//
//	return 0;
//}



//效率较低