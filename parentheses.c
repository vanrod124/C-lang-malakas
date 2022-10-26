

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>  

#define MAX 100

typedef struct node {
    char data;
    struct node *next;
} node;

typedef struct stack {
    node *top;
} stack;

void push(stack *s, char data) {
    node *new = (node *)malloc(sizeof(node));
    new->data = data;
    new->next = s->top;
    s->top = new;
}

char pop(stack *s) {
    if (s->top == NULL) {
        printf("Stack is empty !\n");
        return -1;
    }
    

    node *temp = s->top;
    char data = temp->data;
    s->top = s->top->next;
    free(temp);
    return data;
}


int main () {
    // create a string
    char str[MAX];
    bool stat = false;
    printf("Enter a string: ");
    scanf("%s", str);

    // create a stack
    stack *s = (stack *)malloc(sizeof(stack));

    // push the string into the stack. parentheses, brackets, braces are pushed
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            push(s, str[i]);
            //else if stack is empty, return false
        } else if (s->top == NULL) {
            stat = false;
            break;
        } else if (str[i] == ')' && s->top->data == '(') {
            pop(s);
            stat = true;
        } else if (str[i] == ']' && s->top->data == '[') {
            pop(s);
            stat = true;
        } else if (str[i] == '}' && s->top->data == '{') {
            pop(s);
            stat = true;
        } else {
            stat = false;
            break;
        }


    }

    if (stat == true) {
        printf("The string is balanced\n");
    } else {
        printf("The string is not balanced\n");
    }
        
}
