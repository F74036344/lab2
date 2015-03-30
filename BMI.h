#ifndef BMIbmiFuncTion
#define BMIbmiFuncTion
#include<string>
class BMI
{
	public:
		void getValue(float height_mks,float mass_mks);
		void calc(void);
		void judge(void);
		float output_BMI_value(void);
		std::string output_result(void);
		
	private:
		float height_mks,mass_mks,BMI_value;
		std::string result;			
};
	
	
	
	
#endif	
