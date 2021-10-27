# quickray

This is an attempt to generate a native wrapper around raylib, for quickjs, using a script written for quickjs.

# WIP

> I am still working out ideas on this, and it's not usable. Check back!

```
git clone --recursive https://github.com/konsumer/quickray.git
cd quickray/build
cmake ..
make
```

This will produce a few .so files, and `qjs` binary you should include with your JS app.


## todo

- Dang! just use [raylib_api.json](https://github.com/raysan5/raylib/blob/master/parser/raylib_api.json) for parsing. Much better.
- make a little indent function to make templates easier to read.
- get cmake for submodules working and link to them