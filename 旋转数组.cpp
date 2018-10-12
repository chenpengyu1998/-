////https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/23/
////Ðý×ªÊý×é
//
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void rotate(vector<int>& nums, int k) {
//	for(int i=0;i<k;i++){
//		int num = *(nums.end()-1);
//		(nums.end()-1) = nums.erase((nums.end()-1));
//		nums.insert(nums.begin(),num);
//	}
//}
//
//void print(vector<int>& nums){
//	for(vector<int>::iterator it3 = nums.begin();it3!=nums.end();it3++){
//		cout << *it3 ;
//	}
//}
//
//
//
//
//int main(void){
//	vector<int> nums;
//	nums.push_back(1);
//	nums.push_back(2);
//	nums.push_back(3);
//	nums.push_back(4);
//	nums.push_back(5);
//	nums.push_back(6);
//	nums.push_back(7);
//	int k=3;
//	rotate(nums,k);
//	print(nums);
//	return 0;
//}