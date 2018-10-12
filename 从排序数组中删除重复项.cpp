//https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/21/



//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//int removeDuplicates(vector<int>& nums) {
//	bool exist[100]={false};
//	int lengs=0;
//	for(vector<int>::iterator it = nums.begin() ; it != nums.end();){
//		if(exist[*it]==false){
//			exist[*it]=true;
//			lengs++;
//			it++;
//		}else{
//			it = nums.erase(it); 
//		}
//	}
//	return lengs;
//
//}
//
//int main(void){
//	vector<int> num;
//	num.push_back(0);
//	num.push_back(0);
//	num.push_back(1);
//	num.push_back(1);
//	num.push_back(1);
//	num.push_back(2);
//	num.push_back(2);
//	num.push_back(3);
//	num.push_back(3);
//	num.push_back(4);
//	int lens = removeDuplicates(num);
//	cout << lens;
//	return 0;
//}