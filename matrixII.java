package leetcode;


//搜索二维矩阵 II
//https://leetcode-cn.com/explore/interview/card/top-interview-quesitons-in-2018/261/before-you-start/1108/
//[
// [1,   4,  7, 11, 15],
// [2,   5,  8, 12, 19],
// [3,   6,  9, 16, 22],
// [10, 13, 14, 17, 24],
// [18, 21, 23, 26, 30]
//]
public class matrixII {
    public boolean searchMatrix(int[][] matrix, int target) {
        int hang = matrix.length;
        if(hang==0) {
        	return false;
        }
        int lie = matrix[0].length;
        if(lie==0) {
        	return false;
        }
        int row = 0,column = lie-1;
        while(row<hang && column >= 0) {
        	if(matrix[row][column] == target) {
        		return true;
        	}else if(matrix[row][column] > target) {
        		column--;
        	}else {
        		row++;
        	}
        }
        
        return false;
        
        
    }
}
