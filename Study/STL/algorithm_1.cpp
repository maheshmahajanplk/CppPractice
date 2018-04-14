#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	std::vector<int> vec1 = {9, 60, 90, 8, 45, 87, 90, 69, 69,55,7};

	std::vector<int> vec2 = {9, 60, 70, 8, 45, 87};

	std::vector<int>::iterator itr1,itr2;

	std::pair< std::vector<int>::iterator,std::vector<int>::iterator> pair_of_iterator;
	
	std::cout<<count_if(vec1.begin(), vec1.end(), [](int x){return x<80;});

	//counting....
	std::cout<< count(vec1.begin()+2, vec1.end()-1, 69);
	std::cout<< count_if(vec1.begin(),vec1.end(), [](int x){return x<10;}); //3

	

	return 0;
}
