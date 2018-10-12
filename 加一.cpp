////https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/27/
////º”“ª
//
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> plusone(vector<int>& digits){
//	vector<int> num;
//	reverse(digits.begin(),digits.end());
//	vector<int>::iterator it1 = digits.begin();
//	vector<int>::iterator it2;
//	int flag=0,num_f=0;
//	num_f = (*it1)+1;
//
//		if(num_f>10||num_f==10){
//			flag++;
//			num_f-=10;
//		}
//		num.push_back(num_f);
//		it1++;
//		for(;it1!=digits.end();it1++){
//			int index=*it1;
//			if(flag==1){
//				flag--;
//				index +=1;
//			}
//			if(index>10||index==10){
//				flag++;
//				index-=10;
//			}
//			num.push_back(index);
//		}
//		if(flag==1){
//			num.push_back(1);
//		}
//
//	reverse(num.begin(),num.end());
//	return num;
//}
//
//
//int main(void){
//	vector<int> num1;
//	vector<int> num2;
//	num1.push_back(1);
//	num1.push_back(2);
//	num1.push_back(3);
//	num1.push_back(9);
//	num2 = plusone(num1);
//	for(vector<int>::iterator it1 = num2.begin();it1!=num2.end();it1++){
//		cout<< *it1;
//	}
//	cout << endl;
//	return 0;
//}