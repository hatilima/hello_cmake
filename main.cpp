#include<iostream>
#include<functional>
#include"addLib/addlib.h"

int main()
{
	[out = std::ref(std::cout<<"Hello ")](){out.get()<<"World\n";}();
	
	auto sum = [](int a, int b)
	{
		return a + b;
	};

	std::cout<<"The addLib library gives: "<<add(12,12)<<std::endl;	

	std::cout<<"Sum of two intergers: "<<sum(5,6)<<std::endl;
}
