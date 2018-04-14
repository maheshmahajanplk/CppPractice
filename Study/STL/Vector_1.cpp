#include<iostream>
#include<vector>

int main()
{
	std::vector<int> vec;
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(6); //vec: {4,1,8} vec.size() == 3
	vec.push_back(7);
	std::cout<<"vec.at(3)="<<vec.at(3)<<std::endl;

	std::cout<<vec.size()<<std::endl;
	std::cout<<std::hex<<vec.capacity()<<std::endl;
	std::cout<<'\t'<<10<<'\n';		
	return 0;
}


