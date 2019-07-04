
void DeleteNode(ListNode** pListHead,ListNode* pToBeDeleted){

if(!pListHead || !pToBeDeleted)
return;


//要删除的节点不是尾节点
if(pToBeDeleted->next!=NULL){

ListNode* next=pToBeDeleted->next;
pToBeDeleted->val=next->val;
pToBeDeleted->next=next->next;

delete next;
next=NULL;          //注意赋空，防止野指针


}
//链表只有一个节点，要删除的是尾节点（头结点）
else if(*pListHead==pToBeDeleted){
	
	delete pToBeDeleted;
	pToBeDeleted=NULL;
	*pListHead=NULL;

}
//链表有多个节点，要删除尾节点
else{
  ListNode* pNode=*pListHead;
  while(pNode->next!=pToBeDeleted){

    pNode=pNode->next;
}

pNode->next=NULL;
delete pToBeDeleted;
pToBeDeleted=NULL;
 

}

