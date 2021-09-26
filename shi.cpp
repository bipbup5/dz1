#include <iostream>

int count(int k){
    int res = 0, i;
    for (i = 0; i < 1000; i++) {
        int su = 0, j = i;
        while (j != 0) {
            su = su + j % 10;
            j = j / 10;
        }
        if (su == k) {
            res++;
        }
    }
    return res;
}

int main(){
    int res = 0;
    for (int i = 0; i < 1000; i++){
        int su = 0, j = i;
        while (j != 0) {
            su = su + j % 10;
            j = j / 10;
        }
        res += count(su)
    }
    std::cout<<res<<std::endl;
    return 0;
}
