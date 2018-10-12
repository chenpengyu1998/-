////https://www.nowcoder.com/pat/6/problem/4054
//#include <iostream>
//#include <cstdio>
//#include <string>
//using namespace std;
//
//double calc(int year,int month,int days){
//	return year*10000+month*100+days;
//}
//
//
//int main(void){
//	int year,month,days;
//	double old=20140906 , young=18140906;
//	string youngn,oldn,name;
//	int n;
//	cin >> n;
//	int num=n;
//	for(int i=0;i<n;i++){
//		cin >> name;
//		scanf("%d/%d/%d",&year,&month,&days);
//		int temp=calc(year,month,days);
//		if(temp<18140906 || temp>20140906){
//			num--;
//			continue;
//		}
//
//		if(temp>young){
//			young=temp;
//			youngn=name;
//		}
//		if(temp<old){
//			old=temp;
//			oldn=name;
//		}
//	}
//	cout << num <<" "  << oldn << " " << youngn << endl;
//
//
//	return 0;
//}