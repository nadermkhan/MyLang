#include <cstdio>

extern "C" {
    void printi(long long val) {
        printf("%lld\n", val);
    }

    // can print string
    void printStr(const char* val) {
        printf("%s\n", val);
    }
}