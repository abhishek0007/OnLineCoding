#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "He is a very very good boy, isn't he?";
    char *pl;
    // printf ("Splitting string \"%s\" into tokens:\n",str);
    // pch = strtok (str," [,?._'@+");
    // pl = strtok (str," [,?._'@+");
    int m = 0;/*
while (pl != NULL)
  {
    //printf ("%s\n",pl);
    m++;
    pl = strtok (NULL, " [,?._'@+");
  }
printf("%d\n",m);*/
    char *pch;
    pch = strtok(str, " [,?._'@+");
    while (pch != NULL) {
        printf("%s\n", pch);
        pch = strtok(NULL, " [,?._'@+");
    }
    return 0;
}
