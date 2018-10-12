////https://www.nowcoder.com/pat/6/problem/4064
////统计通成绩学生
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(void){
//	int gread[101]={0};
//	int num_S=0,RN=0;
//
//	vector<int> result;
//
//	cin >> num_S;
//	for(int i=0;i<num_S;i++){
//		int n;
//		cin >> n;
//		gread[n]++;
//	}
//	cin >> RN;
//
//	for(int i=0;i<RN;i++){
//		int z;
//		cin >> z;
//		result.push_back(gread[z]);
//	}
//
//	for(int i=0;i<result.size();i++){
//		cout << result.at(i);
//        if(i!=result.size()-1){
//            cout << " ";
//        }
//
//	}
//
//
//	return 0;
//}