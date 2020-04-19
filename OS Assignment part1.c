#include<stdio.h>
#include<conio.h>
int j,i,k,n,arv[10],burst[10],wait[10],tat[10];
void waitingtime();
void avgwait();
void avgtat();
void waitingtime()
{
int temp=0;
printf("Waiting time of process p1 is:2");
for(i=1;i<n;i++)
{
temp+=burst[i];
temp+=arv[0];
printf("\nWaiting time of process p%d:%d",i+1,temp-arv[i]);
wait[i]=temp-arv[i];
temp=0;

}
}
void avgwait()
{
  void tottime()
{
int ttime=0,xtra;
for(i=0;i<n;i++)
{
ttime+=burst[i];
}
xtra=2*(n-1);
ttime+=xtra;
printf("\nThe total time taken to process the given process's is:%d",ttime);

}
 void main()
 {
  int k;
  printf("\nEnter the number of requirements:\t");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  printf("Enter the arival time of process p%d: \t",i+1);
scanf("%d",&k);
if(k==0)
{
printf("zero not allowed\n");
printf("Re-enter the arrival time:\t");
scanf("%d",&arv[i]);
}
else
arv[i]=k;
printf("Enter the burst time of the proecss:\t");
scanf("%d",&burst[i]);

}
int j,temp=0;
wait[0]=0;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{

if(burst[i]>burst[j])
{
temp=arv[i];
arv[i]=arv[j];
arv[j]=temp;

temp=burst[i];
burst[i]=burst[j];
burst[j]=temp;

}
}
}
waitingtime();avgwait();tottime();


}
int avg=0;
for(i=0;i<n;i++)
{
avg+=wait[i];
}
printf("\nAverage waiting time is:%d",avg/n);

}
