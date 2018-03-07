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
float N,n,A,p,q;
scanf("%f",&N);
scanf("%f",&A);
scanf("%f",&n);

p=A/N;
q=1-p;

float result1 =  binomial(n,2,p,q);
printf("%.0f\n",result1*N);

printf("%.0f\n",(1-binomial(n,0,p,q))*N);

printf("%.0f",(1-binomial(n,0,p,q))*N);
}
