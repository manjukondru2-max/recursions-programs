#include <stdio.h>

void output(int i) {
    if(i>5)
    {
        return;
    }
    printf("%d\n",i);
    output(i+1);
}
int main()
{
    output(1);
}