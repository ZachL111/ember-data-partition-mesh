# Review Journal

The review surface for `ember-data-partition-mesh` is deliberately narrow: one fixture, one scoring rule, and one local check.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its data engineering focus without claiming live deployment or external usage.

## Cases

- `baseline`: `schema drift`, score 124, lane `watch`
- `stress`: `lineage depth`, score 216, lane `ship`
- `edge`: `partition skew`, score 193, lane `ship`
- `recovery`: `quality gap`, score 192, lane `ship`
- `stale`: `schema drift`, score 205, lane `ship`

## Note

The useful failure mode here is a wrong decision on a named case, not a vague style disagreement.
