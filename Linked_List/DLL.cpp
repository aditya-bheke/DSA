#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node* convertarr2DLL(vector<int>arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);//here we set temp ka back as prev
        prev->next=temp;//here we set prev ka net is temp
        prev=temp;//we increment prev to temp
    }
    return head;
}
void print(Node* head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;//no need of temp here as we not modifying main head
    }cout<<endl;
}
Node* deletehead(Node* head){
    if(head==nullptr) return nullptr;
    if(head->next==nullptr){
        delete head;
        return nullptr;
    }
    Node* prev=head;
    head=head->next;
    head->back=nullptr; 
    delete prev;
    return head;
}

Node* deletetail(Node* head){
    if(head==nullptr) return nullptr;
    if(head->next==nullptr){
        delete head;
        return nullptr; 
    }
    Node* tail=head;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    Node* newtail=tail->back;
    newtail->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;
    // Node* temp=head;
    // while(temp->next->next!=nullptr){
    //     temp=temp->next;
    // }
    // temp->next->back=nullptr;
    // delete temp->next;
    // temp->next=nullptr;
    // return head;
}

Node* deleteAtposition(Node* head,int position){
    if(head==nullptr) return nullptr;
    int cnt=0;
    Node* temp=head;
    while(temp!=nullptr){
        cnt++;
        if(cnt==position){
            break;
        }
        temp=temp->next;
    }
    Node* prev=temp->back;//here temp is the kth element to be deleted
    Node* front=temp->next;

    if(prev==nullptr && front==nullptr){//only one node
        delete temp;
        return nullptr;
    }else if(prev==nullptr){//head
        head=front;
        head->back=nullptr;
        delete temp;
        return head;
    }else if(front==nullptr){//tail
        Node* newtail=prev;
        newtail->next=nullptr;
        temp->back=nullptr;
        delete temp;
        return head;
    }else{//middle elements
        prev->next=front;
        front->back=prev;
        temp->next=nullptr;
        temp->back=nullptr;
        delete temp;
        return head;
    }
}
Node* deletebyValue(Node* head, int value){
    if(head==nullptr) return nullptr;
    Node* temp=head;
    while(temp!=nullptr){
        if(temp->data==value) break;
        temp=temp->next;
    }
    if(temp==nullptr) return head;//not nullptr because DLL is there but value is not there
    Node* prev=temp->back;
    Node* front=temp->next;

    if(prev==nullptr && front==nullptr){
        delete head;
        return nullptr;
    }else if(prev==nullptr){
        head=temp->next;
        head->back=nullptr;
        delete temp;
        return head;
    }else if(front==nullptr){
        Node* newnode=temp->back;
        newnode->next=nullptr;
        temp->back=nullptr;
        delete temp;
        return head;
    }else{
        prev->next=front;
        front->back=prev;
        temp->next=nullptr;
        temp->back=nullptr;
        delete temp;
        return head;
    }
}
Node* insertAthead(Node* head,int value){
    Node* newNode=new Node(value,head,nullptr);
    if(head==nullptr) return newNode;
    head->back=newNode;
    head=newNode;
    return head;
}
Node* insertAttail(Node* head, int value){
    if(head==nullptr) return insertAthead(head,value);
    Node* tail=head;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    Node* prev=tail->back;
    Node* newNode=new Node(value,tail,prev);
    prev->next=newNode;
    tail->back=newNode;
    return head;
}
Node* insertAtposition(Node* head,int value,int position){
    if(head==nullptr || position==1) return insertAthead(head,value);
    int cnt=0;
    Node* temp=head;
    while(temp!=nullptr){
        cnt++;
        if(cnt==position) break;
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* newNode=new Node(value,temp,prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;

}
Node* insertAtvalue(Node*head,int value,int element){
    if(head==nullptr) return head;
    if(head->data==element){
        return insertAthead(head,value);
    }
    Node* temp=head;
    while(temp->next!=nullptr){
        if(temp->data==element) break;
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* newNode=new Node(value,temp,prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;

}

int main(){
    vector<int> arr={5,7,9,11,55};
    Node* head=convertarr2DLL(arr);
    print(head);
    // head=deletehead(head);
    // print(head);
    // head=deletetail(head);
    // print(head);
    // head=deleteAtposition(head,2);
    // print(head);
    // head=deletebyValue(head,11);
    // print(head);
    head=insertAthead(head,67);
    print(head);
    head=insertAttail(head,69);
    print(head);
    head=insertAtposition(head,58,6);
    print(head);
    head=insertAtvalue(head,96,55);
    print(head);
    return 0;
}