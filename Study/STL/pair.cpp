#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

int main()
{
	
	std::vector<int> vec = {11,34,56,78,98,45,67,89};
	std::pair<std::vector<int>::iterator, std::vector<int>::iterator> PAIR ;
	auto result_minmax = minmax_element(vec.begin(),vec.end(),[](int x,int y){return (x%10)<(y%10);});
	std::cout<< *result_minmax.first <<std::endl;
	
	std::cout<< *result_minmax.second <<std::endl;

	return 0;
}
