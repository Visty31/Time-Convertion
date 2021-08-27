// TIME CONVERSION ;

#include <stdio.h>

/* code to convert an interger to the equivalent 
time  representation in hours,mints and seconds*/

int main()
{
 int num,minutes,seconds;
 int hours,mints,secs;
 
 printf("Enter any amount of seconds to convernt\n");
 scanf("%d",&num);
 
 minutes=(num/60);secs=(num%60);
 hours=(num/3600);mints=((num%3600)/60);
 
 if (num<60)
    { 
      if(num-9>1){printf("00:00:%d",num);}
         else{printf("00:00:0%d",num);}
    }
 
 else if (num>59&&num<3600)
   {
     if(minutes-9<1&&secs-9<1){printf("00:0%d:0%d",minutes,secs);}
       else if(minutes-9<1&&secs-9>1){printf("00:0%d:%d",minutes,secs);}
       else if(minutes-9>1&&secs-9<1){printf("00:%d:0%d",minutes,secs);}
     else{printf("00:%d:%d",minutes,secs);} 
   }
   
   else if (num>3599)
   {
     if(hours-9<1&&mints-9<1&&secs-9<1){printf("0%d:0%d:0%d",hours,mints,secs);}
       else if(hours-9<1&&mints-9>1&&secs-9>1){printf("0%d:%d:%d",hours,mints,secs);}
       else if(hours-9>1&&mints-9<1&&secs-9>1){printf("%d:0%d:%d",hours,mints,secs);}
       else if(hours-9>1&&mints-9>1&&secs-9<1){printf("%d:%d:0%d",hours,mints,secs);}
       else if(hours-9<1&&mints-9<1&&secs-9>1){printf("0%d:0%d:%d",hours,mints,secs);}
       else if(hours-9>1&&mints-9<1&&secs-9<1){printf("%d:0%d:0%d",hours,mints,secs);}
       else if(hours-9<1&&mints-9>1&&secs-9<1){printf("0%d:%d:0%d",hours,mints,secs);}
     else{printf("%d:%d:%d",hours,mints,secs);} 
   }
  return 0;
}