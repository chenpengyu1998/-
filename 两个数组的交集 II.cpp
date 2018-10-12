////https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/26/
////两个数组的交集 II
//
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//        vector<int> result;
//        if(!nums1.empty() && !nums2.empty()){
//            std::sort(nums1.begin(),nums1.end());
//            std::sort(nums2.begin(),nums2.end());
//            vector<int>::iterator it1 = nums1.begin();
//            vector<int>::iterator it2 = nums2.begin();
//            while(it1!=nums1.end() && it2 != nums2.end()){
//                if(*it1<*it2){
//                    it1++;
//                }else
//                if(*it2<*it1){
//                    it2++;
//                }else
//                if(*it1==*it2){
//                    result.push_back(*it1);
//                    it1++;
//                    it2++;
//                }
//            }
//        }
//        return result;
//}
//
//
//int main(){
//	vector<int> nums1;
//	vector<int> nums2;
//	vector<int> result;
//	nums1.push_back(1);
//	nums1.push_back(2);
//	nums1.push_back(2);
//	nums1.push_back(1);
//	nums2.push_back(2);
//	nums2.push_back(2);
//	result = intersect(nums1,nums2);
//	for(vector<int>::iterator it = result.begin(); it!=result.end();it++){
//		cout << *it ;
//	}
//	cout << endl;
//
//	return 0;
//}