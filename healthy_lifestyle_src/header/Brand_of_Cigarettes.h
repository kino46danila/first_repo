#pragma once
#include "../header/no_smoking_header.h"
using namespace std;
class Brand_of_Cigarettes
	{
		public:
		Brand_of_Cigarettes();
		Brand_of_Cigarettes(string brand);
		Brand_of_Cigarettes(string brand,float resin);
		                        //	:Brand_of_Cigarettes(brand);
		Brand_of_Cigarettes(string brand,float resin,
             float nicotine);// :Brand_of_Cigarettes( brand, resin);
		void Get_cigarettes_info();

		private:
		string brand;
		float resin;
		float nicotine;
	};   
