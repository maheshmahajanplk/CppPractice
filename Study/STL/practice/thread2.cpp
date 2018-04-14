#include <iostream>
#include <vector>
#include <thread>
using namespace std;

//int accum = 0;

void square(int& ac,int x) {
    ac += x * x;
}

int main() {
    vector<thread> ths;
    int accum = 0;

    for (int i = 1; i <= 20; i++) {
        ths.push_back(thread(&square,ref(accum), i));
	//thread(&square, ref(accum), i)
    }

    for (auto& th : ths) {
        th.join();
    }
    cout << "accum = " << accum << endl;
    return 0;
}

