
ListNode* FindFirstCommonNode(Node* l1,Node* l2){

int len1=getlength(l1);
int len2=getlength(l2);
Node* short=l1;
Node* long=l2;
int len=len2-len1;
if(len1>len2){
 
 short=l2;
 long=l1;
 len=len1-len2;
}

for(int i=0;i<len;++i){

    l2=l2->next;
}

while(l1!=nullptr && l2!=nullptr && l1!=l2){
 
 l1=l1->next;
 l2=l2->next;

}
Node* first=l1;
return l1;

}

