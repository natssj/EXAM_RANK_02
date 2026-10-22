/* Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2); */

char    *ft_strcpy(char *s1, char *s2)
{
    int i;
    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);
}

#include <stdio.h>
int main()
{
    char s1[8];
    char s2[] = "achilipu";

    ft_strcpy(s1, s2);
    printf("s1 = %s", s1);
    return(0);
}