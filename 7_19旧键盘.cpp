////https://www.nowcoder.com/pat/6/problem/4055
//#include <iostream>
//#include <string>
//using namespace std;
//int main(void){
//	string error;
//	string input;
//	bool NotSame = true;
//	char keys[80]={"\0"};
//	int klength=0;
//	cin >> input;
//	cin >> error;
//	
//	for(int i=0,j=0;i<input.length();i++){
//		//全部设置为大写
//		input[i] = toupper(input[i]);
//		if(i<=error.length())
//			error[i] = toupper(error[i]);
//		//
//		if(input[i]==error[j]){
//			if(j==error.length()){
//				break;
//			}
//			j++;
//		}else if(input[i]!=error[j]){
//			for(int z=0;z<klength;z++){
//				if(keys[z] == input[i]){
//					NotSame = false;
//					break;
//				}
//			}
//			if(NotSame){
//				keys[klength]=input[i];
//				++klength;
//			}
//			
//			NotSame=true;
//		}
//	}
//
//	//输出错误的按键所对应的字符
//
//	for(int i=0;i<klength;i++){
//		cout << keys[i];
//	}
//	cout << endl;
//
//
//	return 0;
//}
