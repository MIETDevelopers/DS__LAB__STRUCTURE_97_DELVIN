//delvin
#include <stdio.h>
int stack[100], i, ch, n, top = -1;
void push();
void pop();
void show();
void main()
{
    printf("Enter the value of the stack (Max=100)\n");
    scanf("%d", &n);
    printf("Chose one from the below options...\n");
    do
    {
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");

        printf("\n Enter your choice \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;

        default:
            printf("Exiting......Boss\n");
        };
    } while (ch != 4);
}
void push() //fn to push value in stack
{
    int val;
    if (top == n)
        printf("\n Overflow");
    else
    {
        printf("Enter the value\n");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
};

void pop() //fn to pop elements in stack
{
    if (top == -1)
        printf("Underflow");
    else
        printf("%d Is poped", stack[top]);
    top = top - 1;
};

void show() //fn to view elements in stack
{
    if (top >= 0)
    {
        printf("\n The elements in stack are: ");
        // for (i = top; i >= 0; i--)

        printf("%d,%d ", stack[0], stack[top]);
    }
    else
    {
        printf("\n The stack is empty");
    }
}
