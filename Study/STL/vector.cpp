#include<iostream>
#include<vector>

void printVector(std::vector<int> &vec){
	std::cout<<"===================Elements of vector are==========================\n";
	for(std::vector<int>::iterator itr = vec.begin(); itr!=vec.end(); ++itr)
		std::cout<<*itr<<" ";
	std::cout<<std::endl;
	std::cout<<"===================================================================\n";
}

void printVector(std::vector<int> *vec){
	std::cout<<"===================Elements of vector are==========================\n";
	for(std::vector<int>::iterator itr = vec->begin(); itr!=vec->end(); ++itr)
		std::cout<<*itr<<" ";
	std::cout<<std::endl;
	std::cout<<"====================using pointer==================================\n";
}

int main()
{
	std::vector<int> vec = {1,2,3,4,5};
	printVector(&vec);

	return 0;
}
