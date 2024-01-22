#include "../header/Quit_Smoking.h"

    int Quit_Smoking::Get_Count() 
                   // статический метод для обращения
			       // согласно инкапсуляции
			       // (сокрытию критических данных)
			       // к статической переменной
	{
		return count;
	}

	//Конструктор по умолчанию может быть только один
	Quit_Smoking::Quit_Smoking()
	:name("NONAME"), smoke(1), day_smoke(1), months_smoke(1),
	year_smoke(1), h_smoke(1), m_smoke(1){
		cout << RED << " Значения выставлены по умолчанию в ноль" << endl;
		/*{name = "NONAME";
		smoke = 0;
		day_smoke = 0;
		months_smoke = 0;
		year_smoke = 0;
		h_smoke = 0;
		m_smoke = 0;}*/
	}

	// Перегрузка конструктора (сколько угодно)
	Quit_Smoking::Quit_Smoking(string name,
			int smoke, 
			int day_smoke, 
			int months_smoke,
			int year_smoke,
			int h_smoke, 
			int m_smoke) :name(name) // так инициализируются
                                     // переменные
	{
		count++;

	//	this->name = name;
    //	а так они переназначаются
		this->smoke = smoke;
		this->day_smoke = day_smoke;
		this->months_smoke = months_smoke;
		this->year_smoke = year_smoke;
		this->h_smoke = h_smoke;
		this->m_smoke = m_smoke;
	}
	
	// Конструктор копирования
	Quit_Smoking::Quit_Smoking(const Quit_Smoking &Danil)
	{
	   	this->name = Danil.name;
		this->smoke = Danil.smoke;
		this->day_smoke = Danil.day_smoke;
		this->months_smoke = Danil.months_smoke;
		this->year_smoke = Danil.year_smoke;
		this->h_smoke = Danil.h_smoke;
		this->m_smoke = Danil.m_smoke;
	}

	// Перегрузка одного из множества операторов
	void Quit_Smoking::operator ==(const Quit_Smoking &val)
	{

		/*
		 * СРАВНИВАТЬ МОЖНО КАК ВСЕ ПОЛЯ ДРУГ С ДРУГОМ
		 * ТАК И ОДНО ПОЛЕ,КАК В ЭТОМ ПРИМЕРЕ.
		 *
		this->name == val.name &&
		this->day_smoke == val.day_smoke &&
		this->months_smoke == val.months_smoke &&
		this->year_smoke == val.year_smoke &&
		this->h_smoke == val.h_smoke &&
		this->m_smoke == val.m_smoke;
		*/
		
		if (smoke == val.smoke) 
			cout << BACK_GREY_COLOR << RED 
			<< name << " и " << val.name 
			<< " выкуривали одинаковое колличество"
			" сигарет в день " << RESET << endl;

	}



	void Quit_Smoking::print()
	{
		int s_smoke(0),sum(0),sigar(0);
		
		time_t var_date_start = time(NULL);
		time_t var_date_fin   = time(NULL);


		struct tm *timeinfo = localtime(&var_date_start);
		timeinfo->tm_year = year_smoke - 1900;
		timeinfo->tm_mon = months_smoke - 1;
		timeinfo->tm_mday = day_smoke;
		timeinfo->tm_hour = h_smoke;
		timeinfo->tm_min = m_smoke;
		timeinfo->tm_sec = 0;
		var_date_start = mktime(timeinfo);

		string stars(57, '*');
		cout << BLUE <<  stars << RESET << '\n' << endl;

		cout << " " << YELLOW << name << GREEN 
			<<  ", \n Вы бросили курить : \t" << CYAN
			<< ctime(&var_date_start); // дата и время

		cout << GREEN << " Сейчас : \t\t" << CYAN 
			<< ctime(&var_date_fin);

		sum = (var_date_fin - var_date_start );

		s_smoke = sum % 60;
		m_smoke = sum / 60 % 60;
		h_smoke = sum / 3600 % 24;
		day_smoke = sum / 86400; // 86400 кол-во секунд в одних сутках

		if (day_smoke == 0)
		sigar = (h_smoke * 60) / 72; //  выясняем сколько сигарет выкуренно к этой минуте
		else
		sigar = (day_smoke  * smoke) + ((h_smoke * 60) / 72);


		cout << GREEN << " БРАВО !!! " 
			<< "\n Невыкуренно: \t\t"  << CYAN 
			<< sigar << GREEN << " сигарет 🚭 \n" 
			<< RESET;

		cout << GREEN << " Без вредной привычки: \t" 
			<< CYAN << day_smoke << GREEN 
			<<" дн. " << CYAN << h_smoke << GREEN 
			<< " час. " << CYAN << m_smoke << GREEN 
			<< " мин. " << CYAN << s_smoke << GREEN 
			<< " сек. \n " << RESET <<  endl;

		cout << BLUE <<  stars << RESET << '\n' << endl;


		   extern int resin_nicotine;
		   resin_nicotine = day_smoke;
/*
		file_out << " БРАВО !!! " << "\n Невыкуренно: \t\t"
		 	 << sigar << " сигарет 🚭 \n";

		file_out << " Без вредной привычки: \t" 
			 << day_smoke << " дн.  " <<  h_smoke
			<< " час. " << m_smoke
			<< " мин. " << s_smoke
			<< " сек. \n "<<  endl;*/
	}
