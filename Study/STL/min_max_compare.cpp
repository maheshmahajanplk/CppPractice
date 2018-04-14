#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>


int main()
{
	int max_count;
	std::vector<int> vec1 = {11,12,13,14,15,16};
	std::vector<int> vec2 = {19,20,21,22,23};
	std::vector<int>::iterator itr;

	itr = max_element(vec1.begin(),vec1.end());

	itr = max_element(vec2.begin(),vec2.end(),[](int x, int y){ return (x%10)<(y%10);}); //returns first element having max last digit
	
	std::pair<std::vector<int>::iterator , std::vector<int>::iterator> pair_of_itr;

	//std::vector < std::pair<std::vector<int>::iterator,std::vector<int>::iterator> >::const_iterator it;

	pair_of_itr = minmax_element(vec2.begin(),vec2.end(), [](int x, int y){ return (x%10)<(y%10);});

	std::cout<<"max element is:"<<*itr<<std::endl;

//	it = pair_of_itr.begin();
	
	std::cout<<"pair of element is min:"<< *pair_of_itr.first<<"max="<<*pair_of_itr.second<<std::endl;

	return 0;
}
