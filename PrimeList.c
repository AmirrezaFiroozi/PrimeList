//    A simple C program which lets you find all prime numbers in a range
//    Copyright (C) 2017 Amirreza Firoozi

//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.

//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.

//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.

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
