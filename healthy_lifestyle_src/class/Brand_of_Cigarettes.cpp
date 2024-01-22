#include "../header/Brand_of_Cigarettes.h"
extern int resin_nicotine;
        Brand_of_Cigarettes::Brand_of_Cigarettes()
		{
			this->brand = "NONAME";
			this->resin = 0.0;
			this->nicotine = 0.0;
		}
	
    	Brand_of_Cigarettes::Brand_of_Cigarettes(string brand)
		{
			this->brand = brand;
			this->resin = 0;
			this->nicotine = 0;
		}

		Brand_of_Cigarettes::Brand_of_Cigarettes(string brand,
				   float resin)
			:Brand_of_Cigarettes(brand)
		{
			this->resin = resin;
		}

		Brand_of_Cigarettes::Brand_of_Cigarettes(string brand,
				   float resin,float nicotine)
			:Brand_of_Cigarettes( brand, resin)
		{
			this->nicotine = nicotine;
		}



		void Brand_of_Cigarettes::Get_cigarettes_info()
		{
			cout << " В одной сигарете, марки " <<
				brand << " сoдержится : \n смолы " << 
                RED_UNDERLINED << resin <<
                RESET << " мг/г \n никотина " <<
				RED_UNDERLINED << nicotine << 
                RESET << " мг/г" << endl;

			cout << " За всё время не попало в организм:"
			       << "\n смолы - " << RED_UNDERLINED <<
			       ((resin * 20) * resin_nicotine) / 1000 
			       << RESET << " гр. \n никотина - " <<
                   RED_UNDERLINED <<
			       ((nicotine * 20) * resin_nicotine) / 1000
			       << RESET << " гр." << endl;

		}
