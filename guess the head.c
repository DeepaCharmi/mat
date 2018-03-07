#include<stdio.h>
#include<math.h>
float fact(float n){
if(n==0||n==1){
    return 1;
}
else{
        return n*fact(n-1);
}
}

float combination(float n,float r){
return (fact(n)/(fact(n-r)*fact(r)));
}

float binomial(float n,float x,float p,float q)
{
return (combination(n,x)*pow(p,x)*pow(q,n-x));
}

main(){
float n,p=0.5,q=0.5,sum=0.0;
float i;
scanf("%f",&n);
if(n>=10)
{
printf("%.4f\n",binomial(n,10,p,q));
for(i=10.0;i<=n;i++)
{
    sum = sum+binomial(n,i,p,q);
}
printf("%.4f\n",sum);
sum=0.0;
for(i=11.0;i<=n;i++)
{
    sum = sum+binomial(n,i,p,q);
}
printf("%.4f",sum);
}
else{
    printf("%d",0);
}
}
