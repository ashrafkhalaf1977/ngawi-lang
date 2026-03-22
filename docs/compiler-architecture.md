# Compiler Architecture

Ngawi compiles source code to native binaries through C11.

## Pipeline

`Source (.ngawi) -> Lexer -> Parser (AST) -> Sema -> C11 codegen -> GCC -> Binary`

## Modules

### Frontend

- `src/lexer/*`
  - tokenization
  - keyword and operator recognition
- `src/parser/*`
  - recursive descent parser
  - AST construction
  - parser recovery and error caps

### Semantic analysis

- `src/sema/*`
  - symbol table and scope checks
  - type checks
  - control flow checks (`break` / `continue` scope)
  - typo hints (`did you mean`)

### Backend

- `src/codegen/*`
  - AST to C11 output
  - function prototype emission
  - builtin lowering

### Runtime

- `src/runtime/*`
  - print helpers
  - string helpers (`eq`, `len`, `concat`, `contains`, `starts_with`, `to_lower`)

Current string allocation model (MVP):

- `ng_string_concat` and `ng_string_to_lower` allocate a new heap buffer (`malloc`)
- compiler/runtime do not free these buffers yet
- this is acceptable for current short-lived CLI programs, but not production-safe for long-running workloads
- planned improvement: dedicated runtime string memory strategy

### Driver

- `src/main.c`
  - CLI handling
  - import graph loading (top-level `import` with cycle detection)
  - parse + sema + codegen orchestration
  - GCC invocation

## Error model

- Parser and sema report `file:line:col`
- Source snippet and caret marker included
- Error caps prevent noise from cascades
