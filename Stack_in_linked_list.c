#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* top = NULL;

int isEmpty() {
    return (top == NULL);
}

void push(int value) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation error.\n");
        return;
    }
    new_node->data = value;
    new_node->next = top;
    top = new_node;
}

int pop() {
    int value;
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return 0;
    }
    Node* temp = top;
    value = temp->data;
    top = top->next;
    free(temp);
    return value;
}

void display() {
    Node* current = top;
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: \n");
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
    printf("-------------------------------\n\n");
}

int main() {
    int val;
    while (1) {
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
