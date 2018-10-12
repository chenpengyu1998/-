////https://www.nowcoder.com/pat/6/problem/4051
////
//#include <iostream>
//#include<algorithm>
//using namespace std;
//int main(void){
//	int first,kinds,n;
//	int MyAddress;
//	int NextAddress[100000];
//	int value[100000];
//	int sort[100000];
//	cin >>  first >> kinds >> n;
//	for(int i=0;i<kinds;i++){
//		cin >> MyAddress;
//		cin >> value[MyAddress] >> NextAddress[MyAddress];
//	}
//	int k=first;
//	int num=0;
//	while(k!=-1){
//		sort[num++]=k;
//		k=NextAddress[k];
//	}
//	int times = kinds/n;
//    for(int i=0,j=0;j<times;i=i+k,j++)
//        reverse(sort+i,sort+i+k);
//	for(int i=times*n;i<num;i++){
//		cout <<sort[i] << " " << value[sort[i]] << " " << NextAddress[sort[i]] << endl;
//	}
//	return 0;
//}
//
//
