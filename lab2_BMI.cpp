#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<fstream>
#include"BMI.h"
using namespace std;

int main(void)
{
	BMI bmi;
	int height_cm,mass_kg;
	ifstream inputFile("file.in",ios::in);
	if(!inputFile)
	{
		cerr<<"Failed to read file.in"<<endl;
		exit(1);	
	}
	ofstream outputFile("file.out",ios::out);
	if(!outputFile)
	{
		cerr<<"Failed to open or create file.out."<<endl;
		exit(1);
	}	
	//start to write the result into file.out.
	cout<<"\nContents of file.out:\n\n";
	while(inputFile>>height_cm>>mass_kg)
	{
		if(height_cm>0)
		{
			if(mass_kg>0)
			{
				bmi.getValue(height_cm/100.0f,mass_kg);
				cout<<bmi.output_BMI_value()<<"\t"<<bmi.output_result()<<endl;
				outputFile<<bmi.output_BMI_value()<<"\t"<<bmi.output_result()<<endl;
			}
		}
	}
	cout<<endl;
	inputFile.close();
	outputFile.close();
	return 0;
}
