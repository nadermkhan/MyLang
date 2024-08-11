#include <cstdio>

extern "C" {
    void printi(long long val) {
        printf("%lld\n", val);
    }

    //square
    void square(long long val) {
        long long cal = val * val;
        printf("%lld\n", cal);
    }

    // can print string
    void printStr(const char* val) {
        printf("%s\n", val);
    }
}