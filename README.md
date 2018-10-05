# textgl
An OpenGL ES 1.0 and EGL 1.0 implementation that renders to an ASCII console.

Lets get the obvious stuff out of the way.

## Who?
Me. Joshua Minter. [Here's my website](https://matanui159.github.io).

## What?
There's a description above. Don't be so lazy.

## When?
Now.

## Where?
Here.

## Why?
I was *VERY* bored.

# How to build
To build it you will need `make` and `tup` installed. The following `make` rules are available:
- `debug` (default): builds the project with `tup`
- `release`: builds the project with release settings
- `clean`: cleans the project using `git` to delete ignored files
- `verbose`: prepend other rules to make `tup` verbose

## VS Code support
If you use VS Code, I have provided some config files so you can press F5 to build and debug tests (that currently do not exist ¯\\\_(ツ)_/¯).

# Files and status
Based on this [reference](https://www.khronos.org/opengles/sdk/docs/reference_cards/OpenGL-ES-2_0-Reference-card.pdf). Also this list is a bit old, I need to fix it up after the project is a bit more stable and clean (right now its a bit of a mess as I switch between ideas).

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
