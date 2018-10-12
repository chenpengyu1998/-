////https://blog.csdn.net/scholfield/article/details/2442828
////验证回文字符串
//
//
//
//#include <iostream>
//#include <typeinfo>
//#include <vector>
//using namespace std;
//
//
//    bool isPalindrome(string s) {
//
//		//if(s.empty()){
//		//	return true;
//		//}
//		
//
//		vector<char> result;
//		bool b = true;
//		for(int i=0;i<s.length();i++){
//			if(s[i]==' '){
//				continue;
//			}
//			if(s[i] >'A'-1 && s[i] <'Z'+1){
//				result.push_back(s[i]+('a'-'A'));
//			}
//			if(s[i] > 'a'-1 && s[i] < 'z'+1){
//				result.push_back(s[i]);
//			}else{
//				continue;
//			}
//		}
//
//		if(result.size()==1){
//			return false;
//		}
//
//		
//
//		for(vector<char>::iterator it = result.begin();it!=result.end();it++){
//			cout << *it;
//		}
//		cout << endl;
//
//
//		if(result.empty()){
//			return true;
//		}
//		vector<char>::iterator it1 = result.begin();
//		vector<char>::iterator it2 = result.end()-1;
//		for(;it1<it2;it1++,it2--){
//			
//			if(*it1 != *it2){
//				b=false;
//				break;
//			}
//		}
//		return b;
//    }
//	
//
//
//
//
//
//
//
//int main(void){
//
//	string s = "0p";
//	cout << isPalindrome(s)  << endl;
//
//
//	return 0;
//}