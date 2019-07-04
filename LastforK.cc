
思路一：
遍历两次链表。第一次得出链表节点数目n。第二次走n-k+1步得到倒数第K个节点。

思路二：
要求只遍历一次的话。需要用到两个指针。第一个指针先走k-1步，然后两个指针开始一起走，当第一个指针走到尾节点时，第二个指针正好指向倒数第K个节点。

//Mplayer_gtk_glade.iterar
ListNode* Find(ListNode *pHead){

if(pHead==nullptr || k==0)
	return;

ListNode* pNode1=pHead;
ListNode* pNode2=pHead;

for(int i=0;i<k-1;++i){
//k的合法性
if(pNode1->next!=NULL)
	pNode1=pNode1->next;
else
	return NULL;

}

while(pNode1->next!=NULL){
   pNode1=pNode1->next;
   pNode2=pNode2->next;

}

return pNode2;

}

--------------------- 
作者：斯蒂芬-库里 
来源：CSDN 
原文：https://blog.csdn.net/tonglin12138/article/details/93025841 
版权声明：本文为博主原创文章，转载请附上博文链接！
