Node* removeDuplicates(Node* head)
	{
             //CODE HERE
        if(head==NULL || head->next==NULL) return head;
        Node* temp = head;
        
        while( temp!=NULL && temp->next!=NULL){
            //cout << temp->val << " - " << temp->next->val << endl;
            if(temp->val==temp->next->val){
                Node* nextN = temp->next;
                temp->next = nextN->next;
                delete nextN;
            }
            else
                temp = temp->next;
        }

        return head;
	}
