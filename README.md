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
Well you clone it and run `make`, just kidding I *hate* `make`.
Get [tup](http://gittup.org/tup), it's better.

Just clone and run `tup`.

# Differences from standard
- glBind* commands *must* use glGen* names
- glIs* commands will return true for glGen* names

# Files
Based on this [reference](https://www.khronos.org/opengles/sdk/docs/reference_cards/OpenGL-ES-2_0-Reference-card.pdf).

## `array.c` and `heap.c`
- Internal utilities

## `error.c`
- Errors

## `buffer.c`
- Buffer Objects

## `texture.c`
- Texturing

## `shader.c`
- Shaders and Programs (shaders)

## `program.c`
- Shaders and Programs (programs)

## `frame.c`
- Framebuffer Objects
- Whole Framebuffer Operations (masks)
- Per-Fragment Operations (scissor)
- Reading Pixels
- Pixel Rectangles

## `draw.c`
- Vertices
- Rasterization
- Viewport and Clipping
- Whole Framebuffer Operations (clear)
- Per-Fragment Operations (non-scissor)

# `misc.c`
- State and State Requests
- Special Functions
- Enable/Disable