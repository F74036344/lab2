#include<iostream>
#include<string>
#include"BMI.h"


void BMI::getValue(float h,float m)
{
	height_mks=h;
	mass_mks=m;
}


float BMI::output_BMI_value(void)
{
	BMI_value=mass_mks/height_mks/height_mks;
	return BMI_value;
}

std::string BMI::output_result(void)
{
	BMI_value=mass_mks/height_mks/height_mks;
	if(BMI_value<15.0)
		result="Very Severely underweight";
	else if(BMI_value<16.0)
		result="Severely underweight";
	else if(BMI_value<18.5)
		result="Underweight";
	else if(BMI_value<25.0)
		result="Normal";
	else if(BMI_value<30.0)
		result="Overweight";
	else if(BMI_value<35.0)
		result="Obese Class 1(Moderately obese)";
	else if(BMI_value<40.0)
		result="Obese Class 2(Severely obese)";
	else
		result="Obese Class 3(Very severely obese)";
	return result;
}
 

 
