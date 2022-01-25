#include <stdio.h>
#define TRUE 1
#define FALSE 0
int get_1st_weekday(int year)
{

//int d;
//d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
//return d;
}

int main()
{  int choice;
   printf("========================================================================================================================");
   printf(" \t\t\t\t\t          TIME CALCULATOR\n ");
   printf("=======================================================================================================================\n");
   for(int i=0;1<=100;i++)
   {
   printf("\n.......................................................MANU............................................................\n");
   printf("\t\t\t\t\t[1] find the time duration between two dates");
   printf("\n\t\t\t\t\t[2] calander of the given year");
   printf("\n\t\t\t\t\t[3] EXIT");
   printf("\n=======================================================================================================================");

    printf("\nenter your choice :");
   scanf("%d",&choice);
   switch(choice)
   {
   case 1:
    {
        int d1,m1,y1,d2,m2,y2,r1,r2,r3;
        printf("========================================================================================================================");
        sleep(1);
        printf(" \t\t\t\t\t Time Duration b/w dates Calculator\n");
        sleep(1);
        printf("========================================================================================================================\n");
        sleep(2);
        printf("Enter your current date/month/year  (dd mm yyyy): ");
        scanf("%d %d %d",&d2,&m2,&y2);
        printf("\nEnter the date/month/year           (dd mm yyyy): ");
        scanf("%d %d %d",&d1,&m1,&y1);
       if((d1>31 || d1<1) && (d2>31||d2<1) && (m1<1||m1>12) && (m2<1||m2>12) && (y1<0&&y2<0))
        {
        printf("ERROR");
        }
       else
        {
        r3=y2-y1;
          if(d2>=d1)
          {
           r1=d2-d1;
          }
          else
          {
          m2=m2-1;
          d2=d2+30;
          r1=d2-d1;
          }
        if(m2>=m1)
    {
        r2=m2-m1;
    }
    else{
        y2=y2-1;
        m2=m2+12;
        r2=m2-m1;
    }
   }
   printf("========================================================================================================================\n");
   sleep(1);
   printf("the duration b\w dates is %d years %d months %d days",r3,r2,r1);
   break;
   }
   case 2:
       {
           int year,month,day,daysInMonth,weekDay=0,startingDay;
   printf("\n========================================================================================================================");
   printf("\n\t\t\t\t\tEnter your desired year:");
   scanf("%d",&year);
   printf("\n========================================================================================================================");

   char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
   int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};

   if((year%4==0&&year%100!=0)||year%400==0)
   {
       monthDay[1]=29;
   }

   startingDay=get_1st_weekday(year);

   for(month=0;month<12;month++)
    {

      daysInMonth=monthDay[month];
      printf("\n\n---------------%s-------------------\n",months[month]);
      printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");

      for(weekDay=0;weekDay<startingDay;weekDay++)
        printf("     ");

      for(day=1;day<=daysInMonth;day++)
      {

        printf("%5d",day);

        if(++weekDay>6)
        {
            printf("\n");
            weekDay=0;
        }
        startingDay=weekDay;
      }
      sleep(1);

   }


  break;      }

   case 3:
    {
        exit(0);
    }}
   }
}


