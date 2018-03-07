#include<stdio.h>
#include<math.h>

float geometric(float p,float q,float x){
    return(pow(q,x-1)*p);
}

main()
{
    float N,M,O,A,B,C,p,q,sum=0.0,i;
    scanf("%f %f %f",&N,&M,&O);
    scanf("%f %f %f",&A,&B,&C);
    p=0.5;
    q=1-p;

    printf("%.4f\n",geometric(p,q,A));

    for(i=1;i<=B;i++)
    {
        sum+=geometric(p,q,i);
    }
    printf("%.4f\n",sum);
    sum=0.0;
    for(i=A+1;i<C;i++)
    {
        sum+=geometric(p,q,i);
    }
    printf("%.4f",sum);
}
