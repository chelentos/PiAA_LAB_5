#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<size_t> vs_prefix_function(const string& s, int& count);

vector<int> vs_KMP(const string& substr, const string& str, int& count);

vector<int> BROOT_FORCE(const string& substr, const string& str, long long int& count);
