#include "./header/no_smoking_header.h"
#include "./header/functions.h"
#include "./header/Brand_of_Cigarettes.h"
#include "./header/My_exception.h"
#include "./header/Quit_Smoking.h"

using namespace std;

//#define main_for_shortcuts

int resin_nicotine;

void help_programm();

int Quit_Smoking::count = 0; // инициализация статической 
			                 // переменной должна происходить
			                 // вне класса

int main(int argc, char *argv[]){
	system("clear");

	for (int i(0); i < argc; i++){
	  string str = argv[i];

		if ((str == "-n") || (str == "--new")){
		    try{
                  new_smoke_info();
              }
            catch(const My_exception &ex){
                cerr << RED << " ERROR !!! \a\a\a " 
                    << ex.what() << RESET << endl;
                exit(1);
               }
		}
		  else if ((str == "?") || (str == "-h") || (str == "--help")){
			help_programm();
		  }
	}


	Quit_Smoking Danil("Данил",20,01,01,2021,0,0);
	Quit_Smoking Danil2(Danil);
	Brand_of_Cigarettes Danil_Brand("Philip Morris",6.0,0.5);
	Danil.print();
	Danil_Brand.Get_cigarettes_info();

#ifdef main_for_shortcuts

    cold_shower();
    cin.get();
#else

	Quit_Smoking Anna("Анна",20,7,10,2021,07,17);
	Brand_of_Cigarettes Anna_Brand("Glamour Azure 3",3.0,0.3);
	Anna.print();
	Anna_Brand.Get_cigarettes_info();

	Danil2.print();

	Quit_Smoking Slava; // конструктор по умолчанию
	Slava.print();

	Danil == Anna; // перегрузка оператора ==

	cout << Quit_Smoking::Get_Count() << " чел. бросили курить \n";
    cold_shower();

#endif
	return 0;
}


void help_programm(){
 cout << " Для ввода новыx значений для расчёта \n "
	 " нужно ввести в командной строке после программы -n или --new" << endl;
	exit(0);
}
