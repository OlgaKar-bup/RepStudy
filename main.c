#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char name[255];

     printf("Enter your first name: ");
     fgets(first, 255, stdin);
     first[strlen(first)-1] = '\0'; /* remove the newline at the end */
     printf("length = %d\n", strlen(name)); /* debug line */
     printf("Enter your first name: ");
     fgets(first, 255, stdin);
     first[strlen(first)-1] = '\0'; /* remove the newline at the end */

    printf("Hello, %s!\n", first, last);
    return 0;
}
