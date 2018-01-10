#include <stdlib.h>
#include <stdio.h>

int is_palindrome(char *str)
{
    int size = strlen(str);
    char newstr[size];
    int i=0;
    while( str[i] ) {
      newstr[i] = tolower(str[i]);
      i++;
    }

    int l = 0;
    int h = size - 1;
    while(h>l){
        if(newstr[l] != newstr[h]){
            return 0;
        }
        l++;
        h--;
    }
    return 1;
}


int main()
{
    char *str = "Deleveled";
    int palindrome = is_palindrome(str);

    printf("'%s' is ", str);
    if(!palindrome)
        printf("not ");
    printf("a palindrome");

}
