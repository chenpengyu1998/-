////https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/31/
////Ðý×ªÍ¼Ïñ
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//void rotate(vector<vector<int>>& matrix) {
//    int z=0;
//    int col = matrix.size();
//    int row = matrix[0].size();
//    vector< vector<int> > result(col,vector<int>(row,0));
//    for(z=0;z<row;z++){
//        for(int i=0;i<col;i++){
//            result[z][i]=matrix[col-1-i][z];
//        }
//    }
//	matrix = result;
//
//}
//
//
//
//
//
//int main(void){
//	vector< vector<int>> matrix;
//	matrix[0].push_back(1);
//	matrix[0].push_back(2);
//	matrix[0].push_back(3);
//	matrix[1].push_back(4);
//	matrix[1].push_back(5);
//	matrix[1].push_back(6);
//	matrix[2].push_back(7);
//	matrix[2].push_back(8);
//	matrix[2].push_back(9);
//	rotate(matrix);
//
//	return 0;
//}
//
//
