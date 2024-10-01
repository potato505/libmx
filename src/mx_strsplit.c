#include"../inc/libmx.h"

char **mx_strsplit(const char *s, char c)
{
    if(!s) return NULL;
    int t = 1;
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] != c && t == 1)
        {
            count++;
            t = 0;
        }
        else if(s[i] == c && t == 0)
        {
            t = 1;
        }
    }
    char **a = (char**)malloc((count + 1) * sizeof(char*));
    a[count] = NULL;
    int j = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] != c)
        {
            count = 0;
            t = i;
            while(s[i] != c)
            {
                count++;
                i++;
            }
            a[j]=mx_strnew(count);
            for(int k = 0; s[t] != c; k++)
            {
                a[j][k] = s[t];
                t++;
            }
            j++;
        }
    }
    return a;
}

