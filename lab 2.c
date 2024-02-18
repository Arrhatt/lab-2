#include <stdio.h>
#include <math.h>

double fabs(double x)
{
    if (x<0)
        x=x*(-1);
    return x;
}

double Arhat(double x, double eps)
{
    double prev=1;
    double sum=1;
    int n=1;
    while(fabs(prev)>eps)
    {
        printf("sum= %lf\n", sum);
        int f2n=2*n*(2*n-1);
        prev*=(-1)*f2n*x/(4*n*n);
        sum+=prev/(1-2*n);
        printf("prev= %lf\n", prev);
        n+=1;
    }
    return sum;
}

double main () {
   double x=0;
   double y=0;
   double eps=0;
   printf("eps= ");
   scanf("%lf", &eps);
   printf("(|x|<=1)= ");
   scanf("%lf", &x);
   printf("y= %lf\n", Arhat(x, eps));
   y=sqrt(1+x);
   printf("y= %lf", y);
   return 0;
}
