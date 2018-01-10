#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/*
 * Sort String in reverse alphabetical Order
 *
 */
int myCompare (const void * a, const void * b ) {
    const char *pa = *(const char**)a;
    const char *pb = *(const char**)b;

    return strcmp(pb,pa); // Swap pb and pa to reverse order
}

void sort_words(char *words[], int count)
{
    qsort(words, count, sizeof(char *), myCompare);
}


int main()
{
    char *words[] = { "cherry", "orange", "apple" };
    int count = sizeof(words)/sizeof(char*);

    sort_words(words, count);
    int i;
    for (i = 0; i < count; i++)
    {
        printf("%s ", words[i]);
    }
}
