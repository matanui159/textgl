# textgl
An OpenGL ES 2.0 implementation that renders to an ASCII console

Lets get the obvious stuff out of the way.

## Who?
Me. Joshua Minter. [Here's my website](https://matanui159.github.io).

## What?
I don't know. There's a description above. Don't be so lazy.

## When?
Now.

## Where?
Here.

## Why?
I was *VERY* bored.

# How to build
To build it you will need `make` and `tup` installed.

## `make` commands
- `all` (default): sets up `config.tup` and runs `tup` to build the project.
- `clean`: uses `git` to remove ignored files.
- `test`: builds the project and runs tests.

## `make` flags
- `verbose=y`: shows the full commands `tup` is executing.
- `config=release`: builds the library and tests with release flags.
- `config=none`: builds the library and tests without extra flags.
- `cc=...`: adds custom compiler flags.
- `ld=...`: adds custom linker flags.

## VS Code support
If you use VS Code, I have provided some config files
so you can press F5 to build and debug tests.

# Files and status
Based on this [reference](https://www.khronos.org/opengles/sdk/docs/reference_cards/OpenGL-ES-2_0-Reference-card.pdf).

## `mem.c` and `heap.c`
- [x] Internal utilities

## `error.c`
- [x] Errors
- [x] Tests

## `buffer.c`
- [x] Buffer Objects
- [x] Tests

## `texture.c`
- [ ] Texturing
- [ ] Tests

## `shader.c`
- [ ] Shaders and Programs (shaders)
- [ ] Tests

## `program.c`
- [ ] Shaders and Programs (programs)
- [ ] Tests

## `frame.c`
- [ ] Framebuffer Objects
- [ ] Whole Framebuffer Operations (masks)
- [ ] Per-Fragment Operations (scissor)
- [ ] Reading Pixels
- [ ] Pixel Rectangles
- [ ] Tests

## `draw.c`
- [ ] Vertices {next task}
- [ ] Rasterization {next task}
- [ ] Viewport and Clipping
- [ ] Whole Framebuffer Operations (clear)
- [ ] Per-Fragment Operations (non-scissor)
- [ ] Tests

## `misc.c`
- [x] State and State Requests
- [x] Special Functions
- [ ] Enable/Disable
- [ ] Tests

## Other Tasks
- [ ] Real world tests
