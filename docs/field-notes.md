# Field Notes

This note keeps the data engineering assumptions visible beside the checks.

The domain cases cover `schema drift`, `lineage depth`, `partition skew`, and `quality gap`. They sit beside the smaller starter fixture so the project has both a compact scoring check and a domain-flavored review check.

`stress` is the strongest case at 216 on `lineage depth`. `baseline` is the cautious anchor at 124 on `schema drift`.

The point is not to make the repository bigger. The point is to make the important judgment testable.
