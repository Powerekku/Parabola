#include <iostream>
#include <unistd.h>

int main() {
int t = 0;

//    std::cout << "podaj wartość t:\n";
//    std::cin >> t;
//    std::cout << "\n";

    while(t!=10) {
        for(t; t<4; t++) {
            std::cout << t << std::endl;
            sleep(1);
        }
        for(t; t>0; t--) {
            std::cout << t << std::endl;
            sleep(1);
        }
    }
}






