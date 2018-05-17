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

	vector<size_t> prefixes = prefix_function(substr + "@" + str);
	size_t n = substr.length();
	vector<int> result;
	for (int i = n + 1; i < prefixes.size(); ++i) {
		if (prefixes[i] == n) {
			result.push_back(i - 2 * n);
		}
	}
	if (result.size() == 0) {
		result = { -1 };
	}
	return result;
}

int KMP_for_SHIFT(const string& str1, const string& str2) { //Knuth–Morris–Pratt string searching algorithm

	vector<size_t> prefixes = prefix_function(str2);
	for (size_t k = 0, i = 0; i < str1.size(); ++i) {

		while ((k > 0) && (str2[k] != str1[i])) {
		    k = prefixes[k-1];
		}

	    if (str2[k] == str1[i]) {
	        k++;
	    }

        if (k == str2.size()) {
            return (i - str2.size() + 1);
        }
	}

	return -1;
}

int shift(const string& str1, const string& str2) { //Shift verification

	if (str1.size() != str2.size()) {
		return -1;
	}
	else {
		return KMP_for_SHIFT(str1 + str1, str2);
    }
}
