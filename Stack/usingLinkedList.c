#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct stack{
    int val;
    struct stack *next;
};

struct stack *head;

void push(int val){
    struct stack *ptr = (struct stack*)malloc(sizeof(struct stack));
    if(head == NULL)
    {
        ptr->val = val;
        ptr->next  = NULL;
        head = ptr;
    }
    else
    {
        ptr->val = val;
        ptr->next = head;
        head = ptr;
    }
}
int pop(){
    int x;
    struct stack *ptr;
    if (head==NULL) printf("Stack is empty:\n");
    else
    {
        x = head->val;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("Element is pop out:\n");
        return x;
    }
    return -1;
}
int peek(){
    return head->val;
}
bool empty(){
    if(head==NULL) return true;

    return false;
}
void main(){
    int n;
    printf("Enter the size:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int p;
        scanf("%d", &p);
        push(p);
    }
    
    printf("\nPeek is : %d ", peek());
    pop();
    if (empty())
    {
        printf("\nStack is empty :\n");
    }
    else
    {
        printf("Stack is not empty : \n");
    }
    
    
    
}