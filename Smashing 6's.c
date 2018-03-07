#include<stdio.h>
#include<math.h>

float geometric(float p,float q,float x){
    return(pow(q,x-1)*p);
}

main(){
    float N,P,p,q,i,sum=0.0;
    scanf("%f %f",&P,&N);
    p=N/100;
    q=1-p;

    printf("%.4f\n",geometric(p,q,5));

    for(i=6.0;i<=9.0;i++)
    {
        sum+=geometric(p,q,i);
    }

    printf("%.4f\n",sum);

    sum=0.0;

    for(i=8.0;i<=15.0;i++)
    {
        sum+=geometric(p,q,i);
    }

    printf("%.4f",sum);



}
