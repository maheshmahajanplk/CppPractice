#include <iostream>
#include<string>
#include<map>

class FunctionObj
{
   typedef void (FunctionObj::*FUNCPTR)(void);
   typedef std::map<int, FUNCPTR> FuncMap;
   static FuncMap m_MemberFunctionMap;
};


using namespace std;
//typedef string (*FTYPE)(void);
typedef void (*FVTYPE)(void);
map<int,FVTYPE> map_Fun;
//string fun1(void);
//string fun2(void);
//string fun3(void);
//string fun4(void);

void fun1(void);
void fun2(void);
void fun3(void);
void fun4(void);

FVTYPE pfun1,pfun2,pfun3,pfun4;

int main()
{
    int choice;
    pfun1=&fun1;
    pfun2=&fun2;
    pfun3=&fun3;
    pfun4=&fun4;

    //map_Fun[1] = (FTYPE) fun1;
//    map_Fun.insert(map<int,FTYPE>::value_type(1,fun1));
//    map_Fun.insert(map<int,FTYPE>::value_type(2,fun2));
//    map_Fun.insert(map<int,FTYPE>::value_type(3,fun3));
//    map_Fun.insert(map<int,FTYPE>::value_type(4,fun4));
    //map_Fun.insert(make_pair(int(3),fun3));
    //map_Fun.insert(pair<int,FTYPE>(1,fun4));
    FunctionObj::m_MemberFunctionMap.insert(map<int,FVTYPE>::value_type(1,pfun1));
    FunctionObj::m_MemberFunctionMap.insert(map<int,FVTYPE>::value_type(2,pfun2));
    FunctionObj::m_MemberFunctionMap.insert(map<int,FVTYPE>::value_type(3,pfun3));
    FunctionObj::m_MemberFunctionMap.insert(map<int,FVTYPE>::value_type(4,pfun4));

    cout << "Enter number[1/2/3]: ";
    cin>>choice;

    while(choice){
        if(choice == EOF)
            break;
        map_Fun[choice]; //calling function....
        cout << "\nEnter number[1/2/3]: ";
        cin>>choice;
    }

    //}while(std::cin >> choice && choice != 13 && ch!=32){

    cout<<"Thanks for coming here.Welcome back soon........"<<endl;

    return 0;
}

//string fun1(){string s1="Hey Hi,Welcome to the programming, You have  pressed 1"; return s1;}
//string fun2(){string s2="You have pressed 2";return s2;}
//string fun3(){string s3="you have pressed 3";return s3;}
//string fun4(){string s4="You have pressed 4";return s4;}
void fun1(void){ cout<<"Hey Hi,Welcome to the programming, You have  pressed 1"; }
void fun2(void){ cout<<"You have pressed 2";}
void fun3(void){ cout<<"you have pressed 3";}
void fun4(void){ cout<<"You have pressed 4";}
