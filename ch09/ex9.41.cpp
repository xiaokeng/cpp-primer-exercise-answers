#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    vector<char> vc = {'f', 'o', 'o'};
    string s(vc.begin(), vc.end());
    cout << s << endl;

    return 0;
}
