#include<stdio.h>
int main()
{
    int Testcases; //number of testcases 
    scanf("%d\n",&Testcases);
    
    while(Testcases--)
    {
        int points,number;  //declaration of variables
        scanf("%d\n",&points);
        number=points/2+1;
        printf("%d\n",number);
    }
    return 0;
}
//Code By Bhumika Nayak