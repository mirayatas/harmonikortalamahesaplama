#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
int i,n;
int dizi[100];
float geoort,harort;


geoort=1;
harort=0.0;
printf("Dizinin eleman sayisini giriniz..:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
                printf("dizinin %d elemani :" ,i);
                
scanf("%d",&dizi[i]);
}
for(i=0;i<n;i++)
{

geoort=geoort*dizi[i];
harort=harort+1.0/dizi[i];
}

geoort=pow(geoort,(1/(float)n));
harort=n/harort;

printf("Geometrik Ortalama=%f\n",geoort);
printf("Harmonik Ortalama =%f\n",harort);
getch();
}
