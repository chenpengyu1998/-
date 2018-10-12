////链接：https://www.nowcoder.com/questionTerminal/7335f56d49e946c2a7cd2a93661b293b
////来源：牛客网
//
//#include <iostream>
//#include <ctype.h>
//#include <string>
//
//using namespace std;
//
//
//int main(void){
//	char str[4][61];
//	bool flag=true;
//	string days[] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
//
//	for(int i=0;i<4;i++){
//		cin >> str[i];
//	}
//	
//	for(int i=0;str[0][i]&&str[1][i];i++){
//		//first isupper identical
//		if(flag && str[0][i]>='A' &&str[0][i]<='G' && str[0][i]==str[1][i]){
//			cout << days[str[0][i]-'A'] <<" ";
//			flag=false;
//			continue;
//		}
//		//second isupper or isdigit identical
//		if(!flag && (str[0][i]>='A' &&str[0][i]<='N' || isdigit(str[0][i])) && str[0][i]==str[1][i]){
//			if(isupper(str[0][i])){
//				cout << str[0][i]-'A'+10 << ":";
//			}else if(isdigit(str[0][i])){
//				cout << "0" << str[0][i] << ":";
//			}
//			break;
//		}
//	}
//	//third the number that is identical withstr[2] str[3]
//	for(int i=0;str[2][i]&&str[3][i];i++){
//		if(str[2][i]==str[3][i] && isalpha(str[2][i])){
//			cout << i/10<<i%10<<endl;
//			break;
//		}
//	}
//	return 0;
//}