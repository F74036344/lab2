lab2_BMI: lab2_BMI.o BMI.o
	g++ -o lab2_BMI lab2_BMI.o BMI.o

lab2_BMI.o: lab2_BMI.cpp BMI.h
	g++ -c lab2_BMI.cpp

BMI.o: BMI.cpp BMI.h
	g++ -c BMI.cpp

clean:
	rm lab2_BMI *.o
