#include<iostream>
using namespace std;
class 2DArray
{
	int **m_a;
	int rowCount;
	int colCount;

	public:
		2DArray(int r=1,int c=0,int val=0){

		m_a = new int*[rowCount];
		for(int i = 0; i < rowCount; ++i)
		   m_a[i] = new int[colCount];
		//allocate array...
		for(int i=0;i<rowCount; i++)
		{
			for(int j=0;j<colCount;j++){
				m_a[i][j]= 0;		
			}
		}   
		}

		~2DArray(){
			for(int i = 0; i < sizeY; ++i) {
			    delete [] ary[i];
			}
			delete [] ary;
		}

		void  print(){
			for(int i=0;i<rowCount;i++){
				for(int j=0;j<colCount;j++){
					cout<< "m_a["<<i<<"]["<<j":"<<m_a[i][j];
				} cout<<endl;
			}
		}
};

int main()
{
	int rowCount=5, colCount=4;
	/*int** a = new int*[rowCount];

	for(int i = 0; i < rowCount; ++i)
	    a[i] = new int[colCount];
	*/
	
	return 0;
}
