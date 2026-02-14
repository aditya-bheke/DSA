#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;//Remember that Node* here is a data type like int

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }

    public:
    Node(int data1){//it automatically sets the next to nullptr
        data=data1;
        next=nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){//return type is Node* because we are returning a Node
    Node* head=new Node(arr[0]);//set the head node as first element of array
    Node* mover=head;//mover is a traverser 
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);//store the next element from the mover(at i=1 mover = head) in temp 
        mover->next=temp;// Store the address of of temp ie. next elemnt in next of mover(at i=1 in head store next to temp) here we link the nodes
        mover=temp;// Now increment mover to temp to link the next element
    }
    return head;//return head because we should always point to the first element
}

int lengthOfLL(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

int searchInLL(Node* head,int target){
    Node* temp=head;
    int i=0;
    while(temp){
        if(temp->data==target){
            return i;
        }
        temp=temp->next;
        i++;
    }
    return -1;
}
Node* removesHead(Node* head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* removesTail(Node* head){
    if(head==nullptr) return nullptr;
    if(head->next==nullptr){
        delete head;
        return nullptr;
    }
    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;

    return head;
}
Node* removePosition(Node* head, int position){
    if(head==nullptr) return nullptr;
    if(position==1){//delete head
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=0;
    Node*temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr){
        cnt++;
        if(cnt==position){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
Node* removebyValue(Node* head, int value){
    if(head==nullptr) return nullptr;
    if(head->data==value){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr){
        if(temp->data==value){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
Node* insertAthead(Node* head,int value){
    if(head==nullptr){
        Node* temp=new Node(value);
        head=temp;
        return head;
    }
    Node* temp=new Node(value);
    temp->next=head;
    head=temp;
    return head;//You can directly return temp as well 
}
Node* insertAtTail(Node* head,int value){
    Node* newNode=new Node(value);
    if(head==nullptr) return newNode;
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newNode;
    return head;
}
Node* insertAtPosition(Node* head,int position,int value){
    if(head==nullptr){//if head is null then
        if(position==1){//only if position to be inserted is 1 and head is null
            return new Node(value);
        }
        else{
            return head;
        }
    }
    if(position==1){//insert at head
        // newNode->next=head;
        // return newNode;  this could also be done
        return new Node(value,head);//calling the function
    }
    int cnt=0;
    Node* temp=head;
    while(temp!=nullptr){
        cnt++;
        if(cnt==position-1){
            Node* newNode=new Node(value,temp->next);//first link new node to temp ka next
            temp->next=newNode;//then link temp ka next to new node orelse linking will be disturbed
            break;
        }
        temp=temp->next;
    }
    return head;
}
Node* insertBeforeElement(Node* head, int value,int elem ){//here value is the value to be inserted  elem is element before which value to be inserted
    if(head==nullptr){
        return head;
    }
    if(head->data==elem){
        return new Node(value,head);
    }
    Node* temp=head;
    while(temp->next!=nullptr){
        if(temp->next->data==elem){
            Node* newNode=new Node(value,temp->next);
            temp->next=newNode;
            break;
        }
        temp=temp->next;
    }return temp;
}

int main(){
    vector<int> arr={12,2,33,4};
    Node* head=convertArr2LL(arr);
    // head=removesHead(head);   here we have to assign head to the new head otherwise it will keep pointing to the old head
    // head=removesTail(head);    //same logic again as delete head
    // head=removePosition(head,3);
    // head=removebyValue(head,12);
    head=insertAthead(head,5);
    head=insertAtTail(head,55);
    head=insertAtPosition(head,2,63);
    head=insertBeforeElement(head,69,5);
    Node* temp=head;
    while(temp){// here it menas temp!=nullptr
        cout<<temp->data<<" ";
        temp=temp->next; 
    }
    cout<<endl;
    cout<<lengthOfLL(head)<<endl;
    cout<<searchInLL(head,2)<<endl;
    return 0;
}