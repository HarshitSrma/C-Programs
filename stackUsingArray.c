#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define max 20

int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        puts("stack is over flown");
        return;
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    int del;
    if(top==-1)
    {
        puts("stack is underflown");
        return;
    }
    else
    {
        del=s[top];
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        puts("Stack empty");
    else
    {
            printf("Top element is %d",s[top]);
    }
}
int main()
{
    int n;
    char opt;
    int hello=1;
    while(1)
    {
        scanf("%c",&opt);
        switch(opt)
        {
        case 'a':
            scanf("%d",&n);
            push(n);
            break;
        case 'b':
            pop();
            break;
        case 'c':
            display();
        case 'd':
            hello=0;
            exit(0);
            break;
        }
    }

    return 0;
}
