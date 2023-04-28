#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

int isEmpty() {
    return (top == -1);
}

int isFull() {
    return (top == MAX_SIZE - 1);
}

void push(int value) {
    if (isFull()) {
        printf("Stack is full.\n");
        return;
    }
    top++;
    stack[top] = value;
}

int pop() {
    int value;
    if (isEmpty()) {
        printf("\nStack is empty.\n");
        return 0;
    }
    value = stack[top];
    top--;
    return value;
}

void display() {
    int i;
    if (isEmpty()) {
        printf("\n");
    }
    else {
        printf("\nStack elements: \n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
        printf("\n-------------------------------\n\n");
    }
}

int main() {
    int val;
    while (1>0){
    printf("1. Push \n");
    printf("2. Pop \n");
    printf("3. Exit \n");
    printf("Enter your choice: ");
    scanf("%d", &val);

    if (val == 1) {
        int input;
        int inputval;
        int no;
        printf("Enter number of elements to add in stack: ");
        scanf("%d", &input);
        printf("Enter elements: \n");
        for (no = 0; no < input; no++) {
            scanf("%d", &inputval);
            push(inputval);
        }
        display();
    }
    else if (val == 2) {
        pop();
        display();
    }
    else if (val == 3) {
    return 0;
    }
    else {
        printf("Invalid option.\n");
    }
}
    return 0;
}
