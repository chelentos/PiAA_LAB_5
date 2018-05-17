#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<size_t> prefix_function(const string& s); //prefix-function

vector<int> KMP(const string& substr, const string& str); //Knuth–Morris–Pratt string searching algorithm

int shift(const string& str1, const string& str2); //Shift function
