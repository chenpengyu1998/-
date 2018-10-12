////https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/25/
////只出现一次的数字
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int singleNumber(vector<int>& nums) {
//    std::sort(nums.begin(),nums.end());
//    vector<int>::iterator it = nums.begin();
//    if(nums.size()!=1){
//        for(;it!=nums.end();it+=2){
//            if(*(it+1)!=*it){
//                return *it;
//            }
//        }
//    }else{
//        return *it;
//    } 
//}
//
//
//int main(void){
//
//
//	return 0;
//}