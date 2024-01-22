

healthy_lifestyle : main.o new_smoke_info.o cold_shower.o My_exception.o Quit_Smoking.o Brand_of_Cigarettes.o 
	g++ ./object_file/main.o ./object_file/new_smoke_info.o ./object_file/cold_shower.o ./object_file/My_exception.o ./object_file/Quit_Smoking.o ./object_file/Brand_of_Cigarettes.o -o healthy_lifestyle

main.o : main.cpp 
	g++ -c main.cpp -o ./object_file/main.o

new_smoke_info.o : ./function/new_smoke_info.cpp 
	g++ -c ./function/new_smoke_info.cpp -o ./object_file/new_smoke_info.o

cold_shower.o : ./function/cold_shower.cpp 
	g++ -c ./function/cold_shower.cpp -o ./object_file/cold_shower.o

My_exception.o : ./class/My_exception.cpp 
	g++ -c ./class/My_exception.cpp -o ./object_file/My_exception.o

Quit_Smoking.o : ./class/Quit_Smoking.cpp
	g++ -c ./class/Quit_Smoking.cpp -o ./object_file/Quit_Smoking.o

Brand_of_Cigarettes.o : ./class/Brand_of_Cigarettes.cpp
	g++ -c ./class/Brand_of_Cigarettes.cpp -o ./object_file/Brand_of_Cigarettes.o

clean :
	rm -vf ./object_file/*.o healthy_lifestyle
