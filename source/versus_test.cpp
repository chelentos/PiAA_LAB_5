#include "KMP_vs_BROOT_FORCE.h"
#include <iomanip>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char basis[] =
"abcdefghijklmnopqrstuvwxyz";

int stringLength = sizeof(basis) - 1;

char genRandom() {
    
    return basis[rand() % stringLength];
}

int main()
{
    srand(time(0));
    string str = "";
    string substr = "";
    
    for(int i = 0; i < 30; ++i) {
        int count_kmp = 0;
        long long int count_bf = 0;       
        
	for(unsigned int i = 0; i < 10; ++i) {
            substr += genRandom();
        }
        
	for(unsigned int i = 0; i < 100; ++i) {
	    str += substr;
	    str.resize(str.size()-1);
	    str += genRandom();	    
	}

	vs_KMP(substr, str, count_kmp);
        BROOT_FORCE(substr, str, count_bf);
        
        
        cout << setw(14) << i+1 << "." << setw(15) << "KMP" << " "<< setw(15) << "BF" << endl;
        cout << setw(15) << "Operations:"<< setw(15) << count_kmp << " "<< setw(15) << count_bf << "\n\n\n";
        
    }

    return 0;

}
