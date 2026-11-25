#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];

int top = -1;

void push(char x)
{
    top = top + 1;
    stack[top] = x;
}

char pop()
{
    char value = stack[top];
    top = top - 1;
    return value;
}

char peek()
{
    return stack[top];
}

int precedence(char x)
{
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    if (x == '^') return 3;
    return 0;
}

void infixToPostfix(char infix[], char postfix[])
{
    int i = 0;
    int k = 0;

    while (infix[i] != '\0')
    {
        char ch = infix[i];

        if (isalnum(ch))
        {
            postfix[k] = ch;
            k = k + 1;
        }
        else if (ch == '(')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            while (peek() != '(')
            {
                postfix[k] = pop();
                k = k + 1;
            }
            pop(); // remove '('
        }
        else
        {
            while (top != -1 &&
                   precedence(peek()) >= precedence(ch))
            {
                postfix[k] = pop();
                k = k + 1;
            }
            push(ch);
        }

        i = i + 1;
    }

    while (top != -1)
    {
        postfix[k] = pop();
        k = k + 1;
    }

    postfix[k] = '\0';
}
int main()
{
    char infix[MAX];
   char postfix[MAX];
    printf("enter the expression");
    
    scanf("%s",&infix);
   infixToPostfix(infix,postfix);
    printf("%s\n",postfix);
    return 0;
    
    
}
