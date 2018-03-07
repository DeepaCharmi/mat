#include<stdio.h>
#include<math.h>

float geometric(float p,float q,float x){
    return(pow(q,x-1)*p);
}

main(){
    float P,N,p,q,sum=0,i;
    scanf("%f %f",&P,&N);

    p=N/100;
    q=1-p;

    printf("%.4f\n",geometric(p,q,5));

    for(i=1.0;i<=9.0;i++)
    {
        sum+=geometric(p,q,i);
    }

    printf("%.4f\n",sum);

    sum=0.0;

    for(i=3.0;i<=9.0;i++)
    {
        sum+=geometric(p,q,i);
    }

    printf("%.4f",sum);
}
