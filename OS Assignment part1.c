#include<stdio.h>
#include<conio.h>
int j,i,k,n,arv[10],burst[10],wait[10],tat[10];
void waitingtime();
void avgwait();
void tatm();
void avgtat();
void tottime();
void waitingtime()
{
int temp=0;
printf("Waiting time of process p1 is:2");
for(i=1;i<n;i++)
{

// for(j=0;j<i;j++)
// {
temp+=burst[i];

// }
temp+=arv[0];
printf("\nWaiting time of process p%d:%d",i+1,temp-arv[i]);
wait[i]=temp-arv[i];
temp=0;

}
}
void avgwait()
{
int avg=0;
for(i=0;i<n;i++)
{
avg+=wait[i];
}
printf("\nAverage waiting time is:%d",avg/n);

}
