# quickray

# WIP
> I am still working out ideas on this, and it's not usable. Check back!

This is an attempt to generate a native wrapper around raylib, for quickjs, using a script written for quickjs.

First I will work out some basic ideas in `explore/` for how to do this, then I will finish up the generator.

```
git clone --recursive https://github.com/konsumer/quickray.git
cd quickray/build
cmake ..
```

This will produce a few .so files, and `qjs` binary you should include with your JS app.
