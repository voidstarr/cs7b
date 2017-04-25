#include <iostream>
#include <cmath>

struct NotPerfectRoot{};

int root(int);

int main() {
    root(4);
    try {
        root(42);
    } catch(NotPerfectRoot) {
        std::cout << "not perfect root!_!_!_" << std::endl;
    }
    return 0;
}

int root(int i) {
    double rt = std::sqrt(i);
    if ((rt - int(rt)) != 0)
        throw NotPerfectRoot();
    return int(rt);

}
