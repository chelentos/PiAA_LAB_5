#include "KMP_vs_BROOT_FORCE.h"
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
    
	string pattern;
    	string text;
    	cout << "Enter pattern P(|P|≤15000) : ";
    	cin >> pattern;
    	cout << endl << "Enter text T(|T|≤5000000) : ";
    	cin >> text;
	cout << endl;
	int count_kmp = 0;
	long long int count_bf = 0;

	vector<int> res_kmp = vs_KMP(pattern, text, count_kmp);
	vector<int> res_bf = BROOT_FORCE(pattern, text, count_bf);
	cout.width(15);
	cout << "Results: " << "KMP" << " " << "BF" << endl;
	for(unsigned int i = 0; i < res_kmp.size(); ++i) {
		cout.width(15);
		cout << " " << res_kmp[i] << " " << res_bf[i];
		cout << endl;
	}
	cout << endl;
	cout.width(15);
	cout << "Operations: " << count_kmp << " " << count_bf << endl;
	return 0;	
}
