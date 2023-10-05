// 21.Merge two sorted list
// you are given the heads of two sorted linked lists list1 and list2.
// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.
// Return the head of the merged linked list.
// examples:
// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// Input: list1 = [], list2 = []
// Output: []
// Input: list1 = [], list2 = [0]
// Output: [0]

// class ListNode {
//   int val;
//   ListNode next;
//   ListNode() {}
//   ListNode(int val) { this.val = val; }
//   ListNode(int val, ListNode next) { this.val = val; this.next = next; }
// }

class Solution {
  public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
    ListNode head = null;
    ListNode ptr = null;
    int addVal = 0;
    if (list1 == null && list2 == null) {
      return null;
    }
    while (list1 != null && list2 != null) {
      if (list1.val > list2.val) {
        addVal = list2.val;
        list2 = list2.next;
      } else if (list2.val < list1.val) {
        addVal = list1.val;
        list1 = list1.next;
      } else {
        addVal = list1.val;
        list1 = list1.next;
      }
      if (head == null) {
        head = new ListNode();
        head.val = addVal;
        head.next = null;
        ptr = head;
      } else {
        ptr.next = new ListNode();
        ptr = ptr.next;
        ptr.next = null;
        ptr.val = addVal;
      }
    }
    while (list1 != null) {
      if (head == null) {
        head = new ListNode();
        head.val = list1.val;
        head.next = null;
        ptr = head;
      } else {
        ptr.next = new ListNode();
        ptr = ptr.next;
        ptr.next = null;
        ptr.val = list1.val;
      }
      list1 = list1.next;
    }
    while (list2 != null) {
      if (head == null) {
        head = new ListNode();
        head.val = list2.val;
        head.next = null;
        ptr = head;
      } else {
        ptr.next = new ListNode();
        ptr = ptr.next;
        ptr.next = null;
        ptr.val = list2.val;
      }
      list2 = list2.next;
    }
    return head;
  }
}
