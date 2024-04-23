#include<stdio.h>

int is_prime(int i)
{
    int j;
    for(j=2; j<i; j++)    //from 2 to i-1
    {
        if(i%j==0)
            return 0;
    }
    return 1;
}
