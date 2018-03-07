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
    float S,Q,p,q,sum=0;
    int i;
    scanf("%f %f",&S,&Q);
    if(S<=Q){
        p=S/Q;
        q=1-p;
        printf("%.4f\n",binomial(10,6,p,q));

        printf("%.4f\n",1-binomial(10,10,p,q));

        for(i=0;i<=4;i++)
        {
            sum=sum+binomial(10,i,p,q);
        }

        printf("%.4f",sum);
    }
    else{
        printf("constraint failed");
    }
}
