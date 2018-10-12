////https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/29/
////两数之和
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> twoSum(vector<int>& nums, int target) {
//    int i =0;
//	vector<int> result;
//    for(vector<int>::iterator it = nums.begin();it!=nums.end();it++,i++){
//        int num = target - *it;
//		
//		vector<int>::iterator it2 = find(nums.begin(),nums.end(),num);
//        if(it2==nums.end()){
//			continue;			
//        }else{
//            if(it2!=it){
//                result.push_back(i);
//                result.push_back(distance(nums.begin(),it2));
//                break;
//            }else{
//                continue;
//            }
//		}
//	}
//	return result;
//}
//
//
//
//
//
//
//
//
//
//int main(void){
//
//	return 0;
//}
