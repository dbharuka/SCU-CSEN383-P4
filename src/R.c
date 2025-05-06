#include "PAGE.h"

// Random Page Replacement Algorithm
void R_FUNCTION(LISTOFPAGES* PRM) {
    page* candidates[Toal_PAGE];
    int count = 0;
    page* it = PRM->HDL;

    // Collect all valid (in-use) pages
    while (it) {
        if (it->pid > 0) {
            candidates[count++] = it;
        }
        it = it->next;
    }

    // If no candidates to evict, return safely
    if (count == 0) return;

    // Randomly select one of the valid pages
    int r = rand() % count;
    page* evict = candidates[r];

    if (DEBUG == 1) {
        printf("EVICTED (Random): p[%03d] c:%02d l:%02f\n", evict->pid, evict->CNTER, evict->LONE);
    }

    // Mark as evicted
    evict->pid = -1;
    evict->PGENUMBER = -1;
}
