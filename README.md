# Console Application

A cross-platform C++ console application for `g++` & `make` on \*nix or Visual Studio on Windows.

This repo contains submodules, please add Add the `--recursive` flag while cloning this repo (e.g. `git clone REPO_URL --recursive`), or run `git submodule init && git submodule update` after cloning it.


## System Requirements

### \*nix

- `make`
- `g++`

### Windows 10

- Visual Studio 2017


## Build & Run

### On \*nix

First, build the project with GNU make:

```bash
$ make
```

Then run the built executable:

```bash
$ bin/main
```

#### Run The Tests

```bash
$ make test
```

### On Windows

Open the Visual Studio Solution file: `ConsoleApplication.sln`, then use Visual Studio to do the work.
