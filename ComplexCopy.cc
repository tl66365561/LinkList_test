
ComplexListNode* Clone(ComplexListNode* pHead)
{
    CloneNodes(pHead);
    ConnectSiblingNodes(pHead);
    return ReconnectNodes(pHead);
}


//1.复制任意节点N并创建新节点N’，再把N’链接到N的后边
//2.设置复制出来的节点的m_pSibling
//3.拆分为两个链表：奇数节点组成的就是原链表，偶数部分组成的就是复制链表

CloneNodes(ComplexListNode* pHead){
  ComplexListNode* Node=pHead;
  
  while(Node!=NULL){
     ComplexListNode*  pCloned=new ComplexListNode();
     pCloned->m_pNext=Node->m_pNext;
     pCloned->m_nValue=Node->m_nValue;
     pCloned->m_pSibling=nullptr;
     
     Node->m_pNext=pCloned;
     Node=Node->m_pNext;

}

}

void ConnectSiblingNodes(ComplexListNode* pHead){
    ComplexListNode* Node=pHead;
    
    while(Node != nullptr){
        ComplexListNode*  pCloned=Node->next;
        if(Node->m_pSibling!=nullptr){
         pCloned->m_pSibling=Node->m_pSibling->m_pNext;
}
         Node=pCloned->m_pNext;
}
 
}

ComplexListNode* ReconnectNodes(ComplexListNode* pHead){
//细节处理：
//先创建一个节点接收原链表的头结点方便之后的遍历操作；
//跟着创建新链表的头；
//跟着创建一个pClonedNode方便之后的新链表的遍历

ComplexListNode* Node=pHead;
ComplexListNode* pClonedHead=nullptr;
ComplexListNode* pCloneNode=nullptr;

if(Node!=nullptr){

pClonedNode=pClonedHead=Node->m_pNext;
Node->m_pNext=pClonedNode->m_pNext;
Node=Node->m_pNext;
}

while(Node!=nullptr){

pClonedNode->m_pNext=pNode->m_pNext;
pClonedNode=pClonedNode->m_pNext;
Node->m_pNext=pClonedNode->m_pNext;
Node=Node->m_pNext;

}

return pCloneHead;

}

