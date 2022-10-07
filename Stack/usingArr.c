#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>   

#define N 100
int Stack[N];
int top = -1;

void push(int data){
    if (top==N-1) printf("Stack is full:\n");

    else{
        top++;
        Stack[top] = data;
        printf("The val is added to stack:\n");
        
    }
}
int pop(){
    int x;
    if (top==-1) printf("Stack  is empty :\n");
    else{
        x = Stack[top];
        top--;
    }
    return x;
}
int peak(){
    if (top==-1) printf("Stack is empty :\n");
    int x = Stack[top];
    return x;
}
int empty(){
    if (top==-1) return 1;
    return -1;
}
bool  isFull(){
    if (top=N-1) return true;
    return false;
}

void main(){

    printf("Stack is ready type the size u want: ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int val;
        scanf("%d", &val);
        push(val);
    }
    printf("\npop the element %d :\n", pop());
    printf("top is %d :\n", peak());
    printf("Stack is empty(1) or not(-1): %d\n", empty());
    
}


