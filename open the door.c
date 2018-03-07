
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
float poisson(float lambda,float x)
{
    float expo = exp(-lambda);
    return ((expo*pow(lambda,x))/fact(x));
}

main(){
float N,M,P,Q,lambda,i,sum=0.0,n;
float p=0.5;
scanf("%f %f",&N,&M);
scanf("%f %f",&P,&Q);
n=(M*(N-1))+(N*(M-1));
lambda=n*p;
if(P<=n){
    for(i=P;i<=n;i++)
    {
        sum=sum+poisson(lambda,i);
    }
    printf("%.4f\n",sum);
}
else{
    printf("constraint failed\n");
}
sum=0.0;
if(Q<n-1){
    for(i=Q+1;i<n;i++)
    {
        sum=sum+poisson(lambda,i);
    }
    printf("%.4f\n",sum);
}
else{
    printf("constraint failed");
}
}
