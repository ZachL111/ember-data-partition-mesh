#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{83, 95, 26, 8, 7};
    assert(score_signal(signal_case_1) == 137);
    assert(classify_signal(signal_case_1) == "review");
    Signal signal_case_2{82, 88, 21, 11, 5};
    assert(score_signal(signal_case_2) == 122);
    assert(classify_signal(signal_case_2) == "review");
    Signal signal_case_3{99, 82, 20, 12, 4};
    assert(score_signal(signal_case_3) == 144);
    assert(classify_signal(signal_case_3) == "review");
}
