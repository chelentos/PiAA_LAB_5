#include "string_functions.h"

using namespace std;

int main(int argc, char *argv[]) {
    string pattern;
    string text;
    cout << "Enter pattern P(|P|≤15000) : ";
    cin >> pattern;
    cout << endl << "Enter text T(|T|≤5000000) : ";
    cin >> text;
    cout << endl;
    
    vector<int> result = KMP(pattern, text);

    for (const auto& r : result) {
	if (r != result.back()) {
	    cout << r << ",";
	}
	else {
	    cout << r;
	}
    }
    cout << endl;

    return 0;
}
