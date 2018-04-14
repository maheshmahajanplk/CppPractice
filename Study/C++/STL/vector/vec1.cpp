#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<std::string> vecString(3,"HelloMahi");
	
	for(string x : vecString ){
		cout<<"x="<<x<<endl;
	}


	return 0;
}
