#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::string;

int main(int argc, char* argv[]) {
    vector<string> strings;

    for (int i = 0; i < argc; i++) {
        strings.emplace_back(argv[i]);
    }

    for(auto &a: strings) {
        cout << a << "\n";
    }

    std::cin.get();

    return 0;
}
