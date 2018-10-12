////https://www.nowcoder.com/pat/6/problem/4049
//#include <iostream>
//using namespace std;
//
//int main(void){
//	int num_input[10];
//	int num[50];
//	int zero=0;
//	for(int i=0;i<10;i++){
//		cin >> num_input[i];
//	}
//	int len=0;
//	for(int i=0;i<10;i++){
//		
//		for(int j=0;j<num_input[i];j++){
//			num[len+j]=i;
//		}
//		len+=num_input[i];
//	}
//
//
//	for(int i=0;i<len;i++){
//		for(int j=0;j<len-i-1;j++){
//			if(num[j]>num[j+1]){
//				int temp=num[j];
//				num[j]=num[j+1];
//				num[j+1]=temp;
//			}
//		}
//	}
//	bool flag=true;
//	for(int i=0;i<len;i++){
//		
//		if(num[i]==0){
//			zero++;
//			continue;
//		}else if(flag){
//			cout <<num[i];
//			for(int j=0;j<zero;j++){
//				cout << 0;
//			}
//			flag=false;
//			continue;
//		}
//		cout << num[i];
//	}
//
//	return 0;
//}