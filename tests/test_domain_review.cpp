#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{46, 42, 19, 47};
    assert(domain_review_score(item) == 124);
    assert(domain_review_lane(item) == "watch");
}
