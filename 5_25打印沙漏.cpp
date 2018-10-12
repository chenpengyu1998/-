////https://www.nowcoder.com/pat/6/problem/4053
//
//#include <iostream>
//using namespace std;
//int main(void){
//	int num;
//	char shape;
//	int space=0;
//	cin >> num >> shape;
//	int line=1,sum=1;
//	while(sum<=num){
//		line+=2;
//		sum+=(line*2);
//	}
//	sum-=(line*2);
//	line-=2;
//	int difference = num-sum;
//	for(int i=line;i!=1;i-=2,space+=2){
//		for(int k=space/2;k>0;k--){
//			cout << " ";
//		}
//		for(int j=i;j>0;j--){
//			cout << shape;
//		}
//		cout << endl;
//	}
//
//	for(int i=1;i<=line;i+=2,space-=2){
//		for(int k=space/2;k>0;k--){
//			cout << " ";
//		}
//		for(int j=i;j>0;j--){
//			cout << shape;
//		}
//		cout << endl;
//	}
//	cout << difference << endl;
//
//
//
//
//	return 0;
//}
