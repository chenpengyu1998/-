////https://www.nowcoder.com/pat/6/problem/4044
//
////输出第1、2行分别给出甲、乙的胜、平、负次数，数字间以1个空格分隔。第3行给出两个字母，分别代表甲、乙获胜次数最多的手势，中间有1个空格。如果解不唯一，则输出按字母序最小的解。
//#include <iostream>
//using namespace std;
//int main(void){
//	int N;
//	cin >> N;
//	//石头C  剪子J  布B
//	//甲 0胜，1平，2负，3C赢， 4J赢，  5B赢；
//	int jia[6]={0,0,0,0,0,0};
//	int yi[6]={0,0,0,0,0,0};
//	char JIA,YI;
//	for(int i=0;i<N;i++){
//		cin >> JIA >> YI;
//		if(JIA=='C'){
//			if(YI=='C'){
//				jia[1]++;
//				yi[1]++;
//			}
//			if(YI=='J'){
//				jia[0]++;
//				yi[2]++;
//				jia[3]++;
//
//			}
//			if(YI=='B'){
//				jia[2]++;
//				yi[0]++;
//				yi[5]++;
//			}
//			
//		}
//		if(JIA=='J'){
//			if(YI=='C'){
//				jia[2]++;
//				yi[0]++;
//				yi[3]++;
//			}
//			if(YI=='J'){
//				jia[1]++;
//				yi[1]++;
//			}
//			if(YI=='B'){
//				jia[0]++;
//				yi[2]++;
//				jia[4]++;
//			}
//			
//		}
//		if(JIA=='B'){
//			if(YI=='C'){
//				jia[0]++;
//				yi[2]++;
//				jia[5]++;
//			}
//			if(YI=='J'){
//				jia[2]++;
//				yi[0]++;
//			}
//			if(YI=='B'){
//				jia[1]++;
//				yi[1]++;
//				yi[5]++;
//			}
//			
//		}
//	}
//	for(int i=0;i<3;i++){
//		if(i!=0){
//			cout << " " << jia[i];
//		}else{
//			cout << jia[i];
//		}
//	}
//	cout << endl;
//	for(int i=0;i<3;i++){
//		if(i!=0){
//			cout << " " << yi[i];
//		}else{
//			cout << yi[i];
//		}
//	}
//	cout << endl;
//	int jia_max=0,yi_max=0;
//	for(int i=3;i<6;i++){
//		if(jia_max<jia[i]){
//			jia_max=jia[i];
//		}
//		if(yi_max<yi[i]){
//			yi_max=yi[i];
//		}
//	}
//	for(int i=3;i<6;i++){
//		bool flag=true;
//		if(jia[5]==jia_max && flag){
//			cout <<'B';flag=false;
//		}else if(jia[3]==jia_max && flag){
//			cout << 'C';flag=false;
//		}else if(jia[4]==jia_max && flag){
//			cout << 'J';flag=false;
//		}
//		if(yi[5]==yi_max){
//			cout << ' '<<'B';break;
//		}else if(yi[3]==yi_max){
//			cout << ' '<<'C';break;
//		}else if(yi[4]==yi_max){
//			cout << ' '<<'J';break;
//		}
//
//
//	}
//
//
//	return 0;
//}