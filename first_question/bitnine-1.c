#include <stdio.h>
#include <stdlib.h>

typedef enum TypeTag {
    ADD,
    MUL,
    SUB,
    FIB
} TypeTag;

typedef struct Node {
    TypeTag type;
    int val1;
    int val2;
} Node;

Node* makeFunc(TypeTag type, int val1, int val2) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->type = type;
    node->val1 = val1;
    node->val2 = val2;
    return node;
}

int calc(Node* node) {
    switch(node->type) {                                                                                                                        
        case ADD:
            return node->val1 + node->val2;
        case MUL:
            return node->val1 * node->val2;
        case SUB:
            return node->val1 - node->val2;
        case FIB: {
            int n = node->val1;
            int *fib = (int*) malloc((n+2) * sizeof(int));
            fib[0] = 0;
            fib[1] = 1;
            for (int i = 2; i <= n; i++)
                fib[i] = fib[i-1] + fib[i-2];
            int result = fib[n];
            free(fib);
            return result;
        }
        default:
            return 0;
    }
}

int main() {
    Node *add = makeFunc(ADD, 10, 6);
    Node *mul = makeFunc(MUL, 5, 4);
    Node *sub = makeFunc(SUB, calc(mul), calc(add));
    Node *fibo = makeFunc(FIB, calc(sub), 0);
    printf("add : %d\n", calc(add));
    printf("mul : %d\n", calc(mul));
    printf("sub : %d\n", calc(sub));
    printf("fibo : %d\n", calc(fibo));
    free(add);
    free(mul);
    free(sub);
    free(fibo);
    return 0;
}
