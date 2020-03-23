package leetcode;


//https://leetcode-cn.com/problems/fan-zhuan-lian-biao-lcof/
public class reverseListPro {
	
	
    public ListNode reverseList(ListNode head) {
		ListNode l1 = null,l2=head;
		while(l2!=null) {
			ListNode temp = l2.next;
			l2.next = l1;
			l1=l2;
			l2 = temp;	
		}
		
		
    	return l2;
    }
    
    
}
