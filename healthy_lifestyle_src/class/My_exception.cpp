#include <iostream>
#include "../header/no_smoking_header.h"
#include "../header/My_exception.h"

using namespace std;

My_exception::My_exception(){

        }

My_exception::My_exception(const string &str){

                system("clear");
                cerr << RED << " ERROR !!! \a\a\a "
                    << str << RESET << endl;
        }

My_exception::My_exception(const string &str, int code_error){

                system("clear");
                cerr << RED << " ERROR !!! \a\a\a "
                     << str << "\n ERROR !!!  Код ошибки: "
                     << code_error << RESET << endl;
        }
