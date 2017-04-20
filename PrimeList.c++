//This program is Written By: AmirrezaFiroozi
// This is available under GPLv3+
// This peogram is free as free in both free speech and free icecream
// You have the right to distribute & or modify program but your program must also be free (as in free speech)
// For more information refer to the License file that is with this program

#include <stdio.h>
#include <math.h>

int isprime(int input )
{
 int IsPrime,i,root,n;
IsPrime=1;
 root=(int) sqrt(input);
for(i=2;i<=root;i++)
{
    n=input%i;
if(n==0)
{
IsPrime=0;
}
 
}
if (IsPrime==1)
{
printf(" %d -", input);
}
return 0;
}
int main()
{
int i,m;
printf(" This program will find all prime numbers from the first number until the last number you enter\n");
printf(" Please enter the smaller number first and then the bigger one.\n");
printf(" Please enter the first number and the last number : ");
scanf("%d%d",&i,&m);
if(i==1)
    i+=1; // This line will ignore 1 as its not a prime number
for (i=i;i<=m;i++)
{

    isprime(i);

}
printf("\n");
return 0;
}
