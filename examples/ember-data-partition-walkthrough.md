# Ember Data Partition Mesh Walkthrough

I use this file as a small checklist before changing the C++ implementation.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 124 | watch |
| stress | lineage depth | 216 | ship |
| edge | partition skew | 193 | ship |
| recovery | quality gap | 192 | ship |
| stale | schema drift | 205 | ship |

Start with `stress` and `baseline`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The next useful expansion would be a malformed fixture around lineage depth and quality gap.
