#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
char password[PASSWORD_LENGTH + 1];
const char charset[] = "Tada! Congrats";
int i;

srand(time(NULL));

for (i = 0; i < PASSWORD_LENGTH; i++) {
password[i] = charset[rand() % (sizeof(charset) - 1)];
}

password[PASSWORD_LENGTH] = '\0';

printf("%s", password);

return 0;
}
