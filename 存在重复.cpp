////https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/24/
////´æÔÚÖØ¸´
//
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////bool containsDuplicate(vector<int>& nums) {
////    bool integer[1000] ={false};
////    bool negative[1000]={false};
////	vector<int>::iterator it;
////
////
////	for(it=nums.begin();it!=nums.end();it++){
////		if(*it>=0){
////			if(integer[*it]==false){
////				integer[*it]=true;
////			}else{
////				return true;
////			}
////		}else{
////			if(negative[*it*-1]==false){
////				negative[*it*-1]=true;
////			}else{
////				return true;
////			}
////		}
////	}
////	return false;
////	
////}
//
//
//bool containsDuplicate(vector<int>& nums) {
//        std::sort(nums.begin(),nums.end());
//        vector<int>::iterator it = nums.begin();
//        if(nums.size()!=1){
//            for(;it!=nums.end();it++){
//                if(*(it+1)==*it){
//                    return true;
//                }
//            }
//            return false;
//        }else{
//            return false;
//        }
//}
//
//
//int main(void){
//
//	
//	return 0;
//}