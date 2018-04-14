#include<iostream>
#include<vector>

int main()
{
	std::vector<int> vec;
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(7);

/*	for(int i=0; i<vec.size(); i++)
		std::cout<<vec[i] << " "; */

	/*for(std::vector<int>::iterator itr= vec.begin(); itr!=vec.end();++itr)
		std::cout<<*itr << " "; 
	std::cout<<endl;*/

	for(it:vec) //c++11
		std::cout<< it << " ";

	std::cout<<std::endl;
	return 0;
}
