#include <stdio.h>

int main ()
{
    FILE *file;
    file = fopen ("./txt/first-file.txt", "a+");
    fprintf (file, "Hello, World\n");
    fclose (file);
    return 0;
}
