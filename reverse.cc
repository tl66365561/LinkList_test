ListNode* ReverseList(ListNode* pHead){

ListNode* pReverseHead=NULL;
ListNode* pNode=pHead;
ListNode* pPreNode=NULL;

while(pNode!=NULL){
	
	ListNode* pNext=pNode->next;
 
    if(pNext==NULL){
   
   		 pReverseHead=pNode;

}
    
    pNode->next=pPreNode;
    
    pPreNode=pNode;
    pNode=pNext;

}
	
	return pReverseHead;

}

