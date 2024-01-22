#include "../header/no_smoking_header.h"
#include "../header/functions.h"
using namespace std;

void cold_shower(){

    string stars(57, '*');
    unsigned int day_cold(13), months_cold(10),
                 year_cold(2022), sum(0), days_cold(0);

    time_t var_date_start = time(NULL);
    time_t var_date_fin   = time(NULL);

    struct tm *timeinfo = localtime(&var_date_start);
    timeinfo->tm_year = year_cold - 1900;
    timeinfo->tm_mon = months_cold - 1;
    timeinfo->tm_mday = day_cold;
    timeinfo->tm_hour = 0;
    timeinfo->tm_min = 0;
    timeinfo->tm_sec = 0;
    var_date_start = mktime(timeinfo);

    sum = (var_date_fin - var_date_start );
    days_cold = sum / 86400; // 86400 кол-во секунд в одних сутках

    cout << endl << GREEN <<  stars << RESET << '\n' << endl;
    cout << BLUE << " С "
         << day_cold << '.' << months_cold << '.' << year_cold
         << ", холодный душ на постоянной основе. \n Всего "
         << RED << days_cold << " дн." << BLUE << " ❄️ "
         << RESET << endl;
    cout << endl << GREEN <<  stars << RESET << '\n' << endl;
}
