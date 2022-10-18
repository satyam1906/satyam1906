#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    
    node(int val) {
        data = val;
        next = NULL;
    }
};

void add_at_tail(node* &head, int val) {
        node* n = new node(val);
        if(head == NULL) {
            head = n;
            return;
        }
        
        node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n;
}
void display(node* head) {
        node* temp = head;
        while(temp != NULL) {
            cout<< temp->data <<"  ";
            temp = temp->next;
        }
        cout<<endl;
}
void deleting_head(node* &head) {
        node* todelete = head;
        head = head->next;
        
        delete todelete;
}
void deletion(node* head, int val) {
        node* temp = head;
        while(temp->next->data != val) {
            temp = temp->next;
        }
        node* todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
}
node* reverse(node* &head) {
        node* newptr = NULL;
        node* currentptr = head;
        node* previousptr = NULL;
        while(currentptr != NULL) {
            newptr = currentptr->next;
            currentptr->next = previousptr;
            
            previousptr = currentptr;
            currentptr = newptr;
        }
        return previousptr;
}
int main() {
    node* head = NULL;
    add_at_tail(head, 1);
    add_at_tail(head, 2);
    add_at_tail(head, 3);
    add_at_tail(head, 4);
    display(head);
    
    deletion(head, 3);
    display(head);
    
    //deleting_head(head);
    //display(head);
    
    //node* newhead = reverse(head);
    //display(newhead);
    
    return 0;
}
