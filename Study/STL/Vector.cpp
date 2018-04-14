#include<iostream>
#include<vector>
#include<numeric>
#include<functional>
#include<algorithm>
#include<iterator>

int main()
{
	std::vector<int> vnum;
	vnum.push_back(4);
	vnum.push_back(789);
	vnum.push_back(100);

	int p=10;
	std::vector<int*> vptr= &p;
	//vector<int*> 
	std::cout<<"sizeof(std::string)="<<sizeof(std::string)<<std::endl;
	for(int x:vnum)
	std::cout<<x<<std::endl;
//	std::cout<<"sizeof(std::vector)="<<sizeof(std::vector)<<std::endl;
	return 0;
}
