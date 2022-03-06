#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> joko;

    joko.push_back(1);

    joko[joko.size() - 1] += 10;


    for (int i = 0; i < joko.size(); ++i) {
        cout << joko[i] << " ";
    }
    cout << endl;

    return 0;
}
