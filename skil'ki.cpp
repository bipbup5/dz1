#include <iostream>

int main() {
    int n, res = 0, i;
    std::cin>>n;
    if not (n <= 0 or n >= 73){
        for (i = pow(10, 7); i < pow(10, 8); i++) {
            int su = 0, k = i;
            while (k != 0) {
                su = su + k % 10;
                k = k / 10;
            }
            if (su == n) {
                res++;
            }
        }
        std::cout<<res<<std::endl;
    }
    else{
        std::cout<<"impossible"<<std::endl;
    }
    return 0;
}
