package leetcode;


//https://leetcode-cn.com/problems/shan-chu-lian-biao-de-jie-dian-lcof/
public class deleteNodePro {
    public ListNode deleteNode(ListNode head, int val) {
    	ListNode temp = head;
    	if(temp.val==val) temp=temp.next;
    	while(head.next!=null) {
    		if(head.next.val==val) {
        		head.next=head.next.next;
        		break;
        	}
    		head = head.next;
    	}
    	
    	return temp;
    }
}
