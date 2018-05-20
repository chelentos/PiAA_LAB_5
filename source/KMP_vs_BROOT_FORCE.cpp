#include "KMP_vs_BROOT_FORCE.h"

vector<size_t> vs_prefix_function(const string& s, int& count) { //prefix-function

	size_t n = s.length();
	vector<size_t> pi(n);
	for (size_t i = 1; i<n; ++i)
	{
		size_t j = pi[i - 1];
		while ((j > 0) && (s[i] != s[j])) {
			j = pi[j - 1];
			++count;
		}
		if (s[i] == s[j])
			++j;
		pi[i] = j;
		++count;
	}
	return pi;
}

vector<int> vs_KMP(const string& substr, const string& str, int& count) { //Knuth–Morris–Pratt string searching algorithm

	if (substr.empty() || str.empty())
		return { -1 };
	vector<int> result;
	vector<size_t> prefixes = vs_prefix_function(substr, count);
	unsigned int pos = 0;
	for (unsigned int i = 0; i < str.size(); i++) {
		while (pos > 0 and (pos >= substr.size() || substr[pos] != str[i])) {

			pos = prefixes[pos - 1];
			++count;
		}
		
		if (substr[pos] == str[i])
			++pos;

		if (pos == substr.size())
			result.push_back(i - pos + 1);
		++count;
	}

	if (result.empty())
		return {-1};

	return result;
}


vector<int> BROOT_FORCE(const string& substr, const string& str, long long int& count){

	if (!substr.size() || !str.size())
		return {-1};

	vector<int> result;

	for (size_t i = 0; i < str.size() - substr.size() + 1; ++i)
	{
		for (size_t j = 0; j < substr.size(); ++j)
		{
			++count;
			if (substr[j] == str[j + i]) {
				if (j == substr.size() - 1)
					result.push_back(i);
			}
			else
				break;

		}
	}
	if(result.empty())
		return {-1};
	return result;
}
