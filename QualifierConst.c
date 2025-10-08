#include<stdio.h>

int main()
{
    int iNo1=10;
    const int iNo2=20;

    //Below lines generates errors
    //line no 11,12 generates error because it is constant

    iNo1++;     //iNo1=iNo1+1
    iNo2++;     //iNo2=iNo2=1
    iNo2=30;
    
    return 0;
}