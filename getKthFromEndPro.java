package leetcode;



//https://leetcode-cn.com/problems/lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof/
public class getKthFromEndPro {
    public ListNode getKthFromEnd(ListNode head, int k) {
		ListNode start,end=head;
		for(int i=0;i<k-1;i++) end=end.next;
		start = head;
		while(end.next!=null) {
			end = end.next;
			start = start.next;
		}
		return start;
    }
}
