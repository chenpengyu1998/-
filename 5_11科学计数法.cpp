////https://www.nowcoder.com/pat/6/problem/4050
//#include <iostream>
//#include <string.h>
//#include <cmath>
//
//using namespace std;
//int main(void){
//	char str[1000];
//	cin >> str;
//	if(str[0]=='-'){
//		cout << '-';
//	}
//	int nE = strchr(str,'E')-str;
//	int rightN =0;
//	
//	for(int i=0;strlen(str)-1-i>nE+1;i++){
//
//		rightN+=(str[strlen(str)-1-i]-'0')*pow(10,i);
//
//	}
//
//	if(str[nE+1]=='+'){
//		int i=0,z=0;
//		//-1.2E+10
//		cout << str[1];
//		while(str[3+i]!='E' || rightN<=0){
//			cout << str[3+i];
//			i++;
//			rightN--;
//		}
//		if(rightN>0){
//			while(rightN>0){
//				cout<< "0";
//				rightN--;
//			}
//		}else{
//			cout << "." ;
//			while(str[3+i]!='E'){
//				cout << str[1+i];
//				i++;
//			}
//		}
//
//		cout << endl;
//	}else if(str[nE+1]=='-'){
//		cout << "0.";
//		int j=1;
//		for(j=1;j<rightN;j++){
//			cout << "0";
//		}
//		for(int it=1;str[it]!='E';it++){
//			if(str[it]=='.') continue;
//			cout << str[it];
//		}
//		cout << endl;
//	}
//
//	return 0;
//}