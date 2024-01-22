#pragma once
#include <iostream>

using namespace std;

class My_exception :public exception{
    public:
My_exception();
My_exception(const string &str);
My_exception(const string &str, int code_error);
//    private:
//int code_error;
};
