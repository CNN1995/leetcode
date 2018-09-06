#ifndef LISTNODE_H_INCLUDED
#define LISTNODE_H_INCLUDED

 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

#endif // LISTNODE_H_INCLUDED
