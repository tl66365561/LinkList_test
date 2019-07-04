ListNode* Merge(ListNode* pHead1,ListNode* pHead2){

if(pHead1==NULL)
	return pHead2;
if(pHead2==NULL)
	return pHead1;

ListNode* MergeList=NULL;
if(pHead1->val<pHead2->val){
	MergeList=pHead1;
	MergeList->next=Merge(pHead1->next,pHead2);

}
else{

    MergeList=pHead2;
	MergeList->next=Merge(pHead1,pHead2->next);
}

return MergeList;

}
