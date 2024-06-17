//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_SIZE 100
//
//typedef struct {
//    char data[MAX_SIZE];
//    int top;
//} Stack;
//
//void init(Stack* s) {
//    s->top = -1;
//}
//
//int isEmpty(Stack* s) {
//    return s->top == -1;
//}
//
//int isFull(Stack* s) {
//    return s->top == MAX_SIZE - 1;
//}
//
//void push(Stack* s, char c) {
//    if (isFull(s)) {
//        printf("Stack is full\n");
//        exit(1);
//    }
//    s->data[++s->top] = c;
//}
//
//char pop(Stack* s) {
//    if (isEmpty(s)) {
//        printf("Stack is empty\n");
//        exit(1);
//    }
//    return s->data[s->top--];
//}
//
//int isMatched(char* exp) {
//    Stack s;
//    init(&s);
//    unsigned int i;
//    for (i = 0; i < strlen(exp); i++) {
//        if (exp[i] == '(') {
//            push(&s, exp[i]);
//        }
//        else if (exp[i] == ')') {
//            if (isEmpty(&s)) {
//                return 0;
//            }
//            pop(&s);
//        }
//    }
//    return isEmpty(&s);
//}
//
//int main() {
//    char exp[MAX_SIZE];
//    printf("Enter an expression (use '#' to end): ");
//    scanf("%s", exp);
//    if (isMatched(exp)) {
//        printf("Parentheses are matched\n");
//    }
//    else {
//        printf("Parentheses are not matched\n");
//    }
//    return 0;
//}