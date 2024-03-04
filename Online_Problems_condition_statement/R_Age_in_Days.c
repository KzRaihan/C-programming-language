/*
Given a Number N corresponding to a person's age (in days). Print his age in years, months and days,
followed by its respective message "years", "months", "days".

Note: consider the whole year has 365 days and 30 days per month.
*/
#include <stdio.h>

int main()
{
    int age_day;
    scanf("%d", &age_day); /// input count in days

    int years, months, days;
    int whole_year = 365, count_month = 30;

    years = (age_day / whole_year);
    months = (age_day % whole_year) / count_month;
    days = (age_day % whole_year) % count_month;

    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);

    return 0;
}

/*
    * code explain

  Let
  i/p:
       age_day = 400  || in days count

        years = (age_day / whole_year);

            * calculation years
        age_day = 400
        whole_year = 365

                365 ) 400 ( 1 <- this is years
                      365
                   ---------
                       35

        print : years = 1



            * calculation months
        age_day = 400
        whole_year = 365
        count_month = 30

    months = (age_day % whole_year) / count_month;

                365 ) 400 ( 1 <- this is years
                      365
                   ---------
                       35 <- age_day % whole_year

                30 ) 35 ( 1 <- this is months
                     30
                    -----
                      5
            * calculation days
        age_day = 400
        whole_year = 365
        count_month = 30

    days = (age_day % whole_year) % count_month;

                365 ) 400 ( 1 <- this is years
                      365
                   ---------
                       35 <- age_day % whole_year

                30 ) 35 ( 1 <- this is months
                     30
                    -----
                      5   <- this is days





        print : years = 1
        print : month = 1
        print : days  = 5



*/