#include<stdio.h>
//#include "Untitled.h"

//#include<unistd.h>
//#include<conio.h>
#include<stdlib.h>

int get_1st_weekday(int year){

  int d;
  d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
  return d;
}
int main()
{
  system("Color 5F");
  char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
  int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
  int i,year,j,total,week=0,space=0;
  printf("Enter the year\n");
  scanf("%d",&year);
  if((year%4==0 && year%100!=0|| year%400==0)){
     days[1]=29;
  }
  week=get_1st_weekday(year);

  for(i=0;i<12;i++){
    printf("\n\n\n-------------------%s-------------------\n\n ",month[i]);
    printf("\n  Sun   Mon   Tue   Web   Thu   Fri    Sat \n\n");
    for(space=1;space<=week;space++){
        printf("      ");
    }
    total=days[i];
    for(j=1;j<=total;j++){
        printf("%6d",j);
        week++;
        if(week>6){
            week=0;
            printf("\n");
        }
    }
    //total=days[i];
    //for(j=1; j=>total; j++){
        //printf("%d",j);
   //}

 }






}
