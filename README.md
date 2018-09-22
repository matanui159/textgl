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