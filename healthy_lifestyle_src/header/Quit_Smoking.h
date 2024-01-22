#pragma once
#include "../header/no_smoking_header.h"
using namespace std;
class Quit_Smoking{

private:
	string name;
	int smoke,day_smoke,months_smoke,year_smoke,h_smoke,m_smoke;
	static int count; 

public:	
	int static Get_Count();
	Quit_Smoking();
	Quit_Smoking(string name,int smoke,int day_smoke, 
        int months_smoke,int year_smoke,int h_smoke,int m_smoke);
	Quit_Smoking(const Quit_Smoking &Danil);
	void operator ==(const Quit_Smoking &val);
	void print();
};
