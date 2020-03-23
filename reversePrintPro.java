package leetcode;

import java.util.ArrayList;
import java.util.List;

//https://leetcode-cn.com/problems/cong-wei-dao-tou-da-yin-lian-biao-lcof/
public class reversePrintPro {
    public int[] reversePrint(ListNode head) {
        ListNode node = head;
    	List<Integer> list = new ArrayList();
    	
		while(node!=null) {
			list.add(0,node.val);
			node = node.next;
		}
		int[] res = new int[list.size()];
		for(int i=0;i<list.size();i++) {
			res[i] = list.get(i);
		}
        return res;
    }
	
}
