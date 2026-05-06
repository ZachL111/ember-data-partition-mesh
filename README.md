# ember-data-partition-mesh

`ember-data-partition-mesh` explores data engineering with a small C++ codebase and local fixtures. The technical goal is to build a C++ toolkit that studies partition behavior through layout fixtures, with stable geometry snapshots and no network dependency.

## Problem It Tries To Make Smaller

I want this repository to be useful as a quick reading exercise: fixtures first, implementation second, verifier last.

## Ember Data Partition Mesh Review Notes

For a quick review, compare `lineage depth` with `schema drift` before reading the middle cases.

## Working Pieces

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/ember-data-partition-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `lineage depth` and `schema drift`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Design Notes

The repository has two validation layers: the original compact policy fixture and the domain review fixture. They are separate so one can change without hiding failures in the other.

The C++ addition stays small enough to inspect in one sitting.

## Example Run

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Tests

That command is also the regression path. It verifies the domain cases and catches mismatches between the CSV, metadata, and code.

## Known Limits

This remains a local project with deterministic fixtures. It does not depend on credentials, hosted services, or live data. Future work should add richer malformed inputs before widening the public API.
