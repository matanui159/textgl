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
The following `make` rules are available:
- `build` (default): builds the project with `tup`
- `clean`: cleans the project using `git` to delete ignored files
- `test`: builds and runs the test executable
- `verbose`: prepend other rules to make `tup` verbose
- `release`: prepend other rules to enable release builds

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
- [ ] Texturing {internal object implementation}
- [ ] Tests

## `shader.c`
- [ ] Shaders and Programs (shaders)
- [ ] Tests

## `program.c`
- [ ] Shaders and Programs (programs)
- [ ] Tests

## `frameb.c`
- [ ] Framebuffer Objects {started work}
- [ ] Whole Framebuffer Operations (masks)
- [ ] Per-Fragment Operations (scissor)
- [ ] Reading Pixels
- [ ] Pixel Rectangles
- [ ] Tests

## `draw.c`
- [ ] Vertices
- [ ] Rasterization
- [ ] Viewport and Clipping
- [x] Whole Framebuffer Operations (clear)
- [ ] Per-Fragment Operations (non-scissor)
- [ ] Tests

## `misc.c`
- [x] State and State Requests
- [x] Special Functions
- [ ] Enable/Disable
- [ ] Tests

## Other Tasks
- [ ] Real world tests
