#include<stdio.h>
int main()
{
    int day1,day2, h1, h2, m2, m1, s1,s2, time1, time2,
    time,second,minutes,hour,day;

     scanf("Dia %d", &day1);
    scanf("%d : %d : %d", &h1,&m1,&s1);

    scanf(" Dia %d", &day2);
    scanf("%d : %d : %d", &h2,&m2,&s2);



    if(day1>0 && day2>0)
    {
           time1 = (day1 *24*60*60)+(h1 * 60*60)+(m1*60)+s1;
    time2 = (day2 *24*60*60)+(h2 * 60*60)+(m2*60)+s2;

    time = time2 - time1 ;

    day = ((time)/(24*60*60));
    hour = (time - (day*24*60*60))/ (60*60);
    minutes = (time - (day*24*60*60)-(hour*60*60))/ (60);
    second = (time - (day*24*60*60)-(hour*60*60)-(minutes*60));

    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", hour);
    printf("%d minuto(s)\n",minutes);
    printf("%d segundo(s)\n",second);
    }

    return 0;
}
