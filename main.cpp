#include<iostream>
#include<functional>

int main()
{
	[out = std::ref(std::cout<<"Hello ")](){out.get()<<"World\n";}();
	
	auto sum = [](int a, int b)
	{
		return a + b;
	}

	std::cout<<"Sum of two intergers: "<<sum(5,6)<<std::endl;
}
