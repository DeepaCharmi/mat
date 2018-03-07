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
float N,M,O,lambda,sum=0;
float i;

scanf("%f %f %f",&N,&O,&M);
lambda=2*M;
for(i=0.0;i<=N;i++)
{
    sum+=poisson(lambda,i);
}
printf("%.4f\n",1-sum);
sum=0.0;
if(N<=O)
{
    for(i=N;i<=O;i++)
    {
        sum+=poisson(lambda,i);
    }
   printf("%.4f",sum);
}
else{
    printf("constraint failed");
}

}
