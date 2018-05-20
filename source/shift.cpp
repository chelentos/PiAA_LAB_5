#include "string_functions.h"

using namespace std;

int main(int argc, char *argv[]) {
    string A;
    string B;

    cout << "Enter string A (|A|≤5000000): ";
    cin >> A;
    cout << endl << "Enter string B (|B|≤5000000): ";
    cin >> B;

    cout << endl << shift(A, B) << endl;

    return 0;
}
