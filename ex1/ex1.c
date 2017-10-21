#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[])
{
    char *distance = argv[1];
    if (distance == NULL) {
      printf("%s\n", "Sure you haven't entered anything you mad bastard");
    } 
    // this is also a comment
    printf("You are %s miles away.\n", distance);

    return 0;
}
