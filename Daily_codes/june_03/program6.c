#include<stdio.h>
int main()

{

int i,gcd,a[5];

printf("Enter 5 numbers:");

for(i=0;i<5;i++)

{
scanf("%d",&a[i]);
}

gcd=a[0];

int j=1;

while(j<5)

{

if(a[j]%gcd==0)

{

j++;

}

else

{

gcd=a[j]%gcd;

i++;

}

}

printf("\nGCD of 5 no.s = %d ",gcd);

return 0;

}
