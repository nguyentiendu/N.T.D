#include <bits/stdc++.h>

using namespace std;


class Node{
public:
    int data;
    Node  *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Vector{
public:
    Node  *head;
    Node  *tail;
    Vector(){
        this->head=NULL;
        this->tail=NULL;
    }
    void push_back(int data){
        Node *temp=new Node(data);
        if(head==NULL ){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=tail->next;
        }
    
    }
    void push_front(int data){
        Node*temp=new Node(data);
        if(head==NULL)
            head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
    }
    
    int size(){
        int count=0;
        Node*p=head;
        while(p!=NULL){
            count=count+1;
            p=p->next;    
        }
        return count;
    }
    void pop_back(){
        Node *p=head;
        while(p->next->next!=NULL)
            p=p->next;
        tail=p;
        p->next=NULL;
    }
    void erase(int pos){
        if(pos>size())
            return ;
        else if(pos==1)
            head=head->next;
        else{
            Node*p=head;
            int k=0;
            while(k!=pos-2 && p->next->next!=NULL){
               
                p=p->next;
                 ++k;
            }
            p->next=p->next->next;
        }
    }
    void resize(int n){
        Node*p=head;
        int k=size();
        if(n>size()){
            while(k!=n){
                Node*temp=new Node(0);
                tail->next=temp;
                tail=temp;
                k++;
            }
        }
        else{
            for(int i=0;i<n-1;i++){
                p=p->next; 
            }
            tail=p;
            p->next=NULL;
        }

    }
    void display(){
        Node *p=head;
        while(p!=NULL){
            cout<<p->data<<endl;
            p=p->next;
        }
    }
};
int main()
{
    Vector a;
    a.push_back(5);
    a.push_front(4);
    a.push_front(3);
    a.push_back(6);
    a.erase(4);
    a.display();
    cout<<a.size()<<endl;
    return 0;
}
