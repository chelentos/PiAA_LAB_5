#include "string_functions.h"

using namespace std;

vector<size_t> prefix_function(const string& s) { //prefix-function

	size_t n = s.length();
	vector<size_t> pi(n);
	for (size_t i = 1; i<n; ++i)
	{
		size_t j = pi[i - 1];
		while ((j > 0) && (s[i] != s[j]))
			j = pi[j - 1];
		if (s[i] == s[j])
			++j;
		pi[i] = j;
	}
	return pi;
}

vector<int> KMP(const string& substr, const string& str) { //Knuth–Morris–Pratt string searching algorithm

        if (substr.empty() || str.empty())
                return { -1 };
	vector<size_t> prefixes = prefix_function(substr);
	vector<int> result;
	unsigned int pos = 0;
	for (unsigned int i = 0; i < str.size(); i++) {
		while (pos > 0 and (pos >= substr.size() || substr[pos] != str[i])) {
			
			pos = prefixes[pos - 1];
		}
			
		if (substr[pos] == str[i])
			pos++;

		if (pos == substr.size())
			result.push_back(i - pos + 1);
	}
	
	if (result.empty())
		result.resize(1, -1);
		
	return result;
}

int shift(const string& str1, const string& str2) { // Shift verification
	if (str1.size() != str2.size()) {
		return -1;
	}
	else {
		vector<int> enter_points = KMP(str2, str1 + str1);
    	if(enter_points.size()) {
    		return enter_points[0];
    	}
	}
    return -1;
}
