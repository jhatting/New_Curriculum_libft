/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : memset.c

* Purpose :The memset() function writes len bytes of value c (converted to an unsigned
     char) to the string b.
     
     SYNOPSIS
     #include <string.h>

     void *memset(void *b, int c, size_t len);

* Creation Date : 11-05-2020

* Last Modified :

* Created By : Jarrod Donovan Hatting 
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
        return(0);
}

int main(int arc, 




