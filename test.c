#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linearstack.h"

int main()
{
sqstack *S;
S=stack_create(100);
stack_push(S,4);
stack_push(S,5);
stack_push(S,2);
stack_push(S,0);
stack_push(S,50);
stack_push(S,22);

stack_push(S,99);
data_t *p=(data_t *)malloc(sizeof(data_t));
printf("the top is located at %d and the number is %d\n",stack_topcheck(S, p), *p);
while(stack_emptycheck(S))
{
printf("pop:%d\n",stack_pop(S));
}
stack_memroyfree(S);
return 0;
}
