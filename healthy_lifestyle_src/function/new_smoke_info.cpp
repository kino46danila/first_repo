#include "../header/no_smoking_header.h"
#include "../header/functions.h"
#include "../header/My_exception.h"
using namespace std;


void new_smoke_info(){
    system("clear");    

    int smoke(0), day_smoke(0),
        months_smoke(0),year_smoke(0), h_smoke(0), 
        m_smoke(0),s_smoke(0),sum(0),sigar(0);    

    time_t var_date_start = time(NULL);
    time_t var_date_fin   = time(NULL);

    cout << " Введите кол-во сигарет в день: ";
    if(!(cin >> smoke)) 
    throw My_exception("Ошибка ввода переменной int smoke", 7);
    cout << " Когда вы бросили курить?  \n";
 
    cout << " День: ";
    if(!(cin >> day_smoke))   
    throw My_exception("Ошибка ввода переменной int day_smoke");

    cout << " Месяц: "; 
    if(!(cin >> months_smoke))
    throw My_exception("Ошибка ввода переменной int months_smoke");

    cout << " Год: ";
    if(!(cin >> year_smoke))
    throw My_exception("Ошибка ввода переменной int year_smoke");

    cout << " Час: ";
    if(!(cin >> h_smoke))
    throw My_exception("Ошибка ввода переменной int h_smoke");

    cout << " Минуты: "; 
    if(!(cin >> m_smoke))
    throw My_exception("Ошибка ввода переменной int m_smoke");

      system("clear");

    struct tm *timeinfo = localtime(&var_date_start);
    timeinfo->tm_year = year_smoke - 1900;
    timeinfo->tm_mon = months_smoke - 1;
    timeinfo->tm_mday = day_smoke;
    timeinfo->tm_hour = h_smoke;
    timeinfo->tm_min = m_smoke;
    timeinfo->tm_sec = 0;  
    var_date_start = mktime(timeinfo);  

    cout << " Вы бросили курить : \t" 
         << ctime(&var_date_start) << endl; // дата и время  
                                            //
    sum = (var_date_fin - var_date_start );     
    s_smoke = sum % 60;
    m_smoke = sum / 60 % 60;
    h_smoke = sum / 3600 % 24;
    day_smoke = sum / 86400; // 86400 кол-во секунд в одних сутках

    if (day_smoke == 0)
    sigar = (h_smoke * 60) / 72; // выясняем сколько 
                                 // сигарет выкуренно
                                 // к этой минуте
    else                                                         
        sigar = (day_smoke  * smoke) + ((h_smoke * 60) / 72);
    cout <<  "\n БРАВО !!! \n Невыкуренно: " 
         << sigar << " сигарет 🚭 \n";

    cout << " Без вредной привычки уже: " 
         << day_smoke << " дн. " << h_smoke << " час. "
         << m_smoke << " мин. " << s_smoke << " сек. \n " << endl;                                                                       exit(0);
}
