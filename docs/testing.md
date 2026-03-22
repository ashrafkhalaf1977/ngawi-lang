# Testing Guide

Ngawi uses unit tests, e2e tests, and golden codegen tests.

## Run all tests

```bash
make test
```

## Test layers

- `tests/lexer` for tokenization
- `tests/parser` for grammar and recovery
- `tests/sema` for type and scope rules
- `tests/e2e` for compile + run behavior
- `tests/golden` for C11 output stability

## Golden workflow

When codegen changes intentionally:

```bash
make update_golden
make test
```

Do not update golden files for unrelated changes.
