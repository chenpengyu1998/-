//package leetcode;
//
//import element.TreeNode;
//
////https://leetcode-cn.com/problems/diameter-of-binary-tree/
//
//
////public class TreeNode {
////public int val;
////public TreeNode left;
////public TreeNode right;
////TreeNode(int x) { val = x; }
////}
//
//
//
//public class diameterOfBinaryTreePro {
//    
//	
//	private int res=0;
//	
//	public int diameterOfBinaryTree(TreeNode root) {
//
//		solution(root);
//		return res;
//    }
//	
//	public int solution (TreeNode node) {
//		if(node == null) return 0;
//		int left = solution(node.left);
//		int right = solution(node.right);
//		res = res>left+right?res:left+right;
//		return (left>right?left:right)+1;
//	}
//	
//	
//	
//	
//}
