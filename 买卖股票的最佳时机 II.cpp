////https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/22/
////买卖股票的最佳时机
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//
//int maxProfit(vector<int>& prices) {
//	
//	
//	
//	
//	int profit=0;
//	if(!prices.empty()){
//		int num=*(prices.begin());
//		for(vector<int>::iterator it=prices.begin()+1;it!=prices.end();it++){
//			if(*it>num){
//				profit+=(*it-num);
//				num = *it;
//			}else{
//				num = *it;
//			}
//		}
//	}
//	return profit;
//}
//
//
//
//
//
//
//
//int main(){
//	vector<int> prices;
//	prices.push_back(7);
//	prices.push_back(1);
//	prices.push_back(5);
//	prices.push_back(3);
//	prices.push_back(6);
//	prices.push_back(4);
//	cout << maxProfit(prices) << endl;
//	return 0;
//}