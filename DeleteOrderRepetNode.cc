//有可能删除头结点
void Delete(ListNode **pHead){

if(pHead==NULL || *pHead==NULL)
	return;

ListNode pPreNode=NULL;
ListNode pNode=*pHead;
while(pNode!=NULL){

	ListNode *pNext=pNode->next;
	bool flag=0;

if(pNext!=NULL && pNode->val==pNext->val)
	flag=1;

if(!flag){

	pPreNode=pNode;
	pNode=pNode->next;
}
else{
int val=pNode->val;
ListNode *ToBeDel=pNode;

while(ToBeDel!=NULL && ToBeDel->val=val){

	pNext=ToBeDel->next;
	delete ToBeVal;
	ToBeDel=NULL;
	ToBeDel=pNext;
}

//如果第一个节点被删除了
if(pPreNode==NULL){
	*pHead=pNext;
}
else{
	pPreNode->next=pNext;
}
	pNode=pNext;

}
}

}

