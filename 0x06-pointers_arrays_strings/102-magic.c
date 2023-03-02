#include <stdio.h>

int main(void)
{
int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int *p = a;

// Write your code below this line
printf("%d\n", *(p + 2));

// Don't write anything below this line
return 0;
}

