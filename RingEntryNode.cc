思路：
第一步：如何确定一个链表中包含环？
定义两个指针，同时从链表的头结点出发，一个指针一次走一步，另一个指针一次走两步。如果走的快的指针追上了走的慢的指针，那么就包含环；如果走的快的指针走到了链表的额末尾都没有追上另外一个指针，那么就不包含环。

第二步：如何找到环的入口？
P1，P2都指向链表的首元节点。如果环中有n个节点，那么P1先走n步,然后两个指针一起走直到相遇。相遇的节点就是入口节点。

那么环的节点数目又从何得知？
之前判断是否存在环的时候，追上时候的节点一定是在环中。我们可以一边计数，一边从这个位置一直移动，直到下一次回到这个节点。

//Code...
ListNode* MeetingNode(ListNode* pHead){
	if(pHead==NULL)
	  return;
	  
ListNode* pSlow=pHead->next;
if(pSlow==NULL)
return;
ListNode* pFast=pSlow->next;

while(pSlow!=NULL && pFast!=NULL){

	if(pFast==pSlow)
	return pFast;

	pSlow=pSlow->next;
	pFast=pFast->next;
	if(pFast!=NULL)
	pFast=pFast->next;

}
	return NULL;

}


ListNode* EntryNodeOfLoop(ListNode* pHead){
ListNode* meetingnode=MeetingNode(pHead);
if(MeetingNode==NULL)
return NULL;
//获取环中节点的数目

int len=0;
ListNode* pNode1=meetingnode;
while(pNode1->next!=meetingnode){
pNode1=pNode1->next;
++len

}
//先移动pNode1 len 次数
pNode1=pHead;
for(int i=0;i<len;++i){
pNode1=pNode1->next;
}

//再移动pNode1和pNode2
ListNode* pNode2=pHead;
while(pNode1!=pNode2){
pNode1=pNode1->next;
pNode2=pNode2->next;

}
return pNode1;
}


