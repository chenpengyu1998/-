////查验身份证
////https://www.nowcoder.com/pat/6/problem/4057
//#include <iostream>
//#include <string>
//using namespace std;
//
//
//bool CalcWeight(int * p){
//	int calcNum[17] ={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
//	int Num[11]={1,0,-1, 9, 8, 7, 6, 5, 4, 3, 2};  //将X换为-1
//	int result=0, N=0;
//	for(int i=0;i<17;i++){
//		result += calcNum[i]*(*(p+i));
//	}
//	N = result%11;
//
//	if(Num[N] == -1){
//		if(*(p+17) != 'x'){
//			return false;
//		}else{
//			return true;
//		}
//	}else{
//		if(*(p+17) != Num[N]){
//			return false;
//		}else{
//			return true;
//		}
//	}
//}
//
//
//
//
//int main(void){
//	bool boolean=true;
//	int it = 0;
//	string input;
//	string error[20];
//	int e=0;
//	int p[18]={0};
//	cin >> it;
//	for(int i=0;i<it;i++){
//		cin >> input;
//		for(int j=0;j<18;j++){
//			p[j] = int(input[j])-48;
//		}
//		if(!CalcWeight(p)){
//			boolean = false;
//			error[e]=input;
//			e++;
//		}
//	}
//	if(boolean){
//		cout << "All passed" << endl;
//	}else{
//		for(int i=0;i<e;i++){
//			cout << error[i] << endl;
//		}
//	}
//
//
//	return 0;
//}