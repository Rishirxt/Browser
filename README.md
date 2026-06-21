# Qt Browser

A Chromium-based desktop browser built with Qt Widgets + QtWebEngine in C++17,
following the module roadmap in `qt_web_browser_roadmap.md`.

## Stack
- C++17
- Qt 6.11.1 (Widgets now; WebEngineWidgets from Module 3 onward)
- CMake build system

## Status
- [x] Module 1 -- Environment & Project Setup
- [~] Module 2 -- Core UI Shell (toolbar + address bar done; menu bar and
      status bar are stubbed with TODOs in `mainwindow.cpp` -- pick up there)

## Build
```
cmake -B build -S .
cmake --build build
```

## Team setup -- read before Module 3
QtWebEngine does not build with MinGW on Windows -- this is a permanent
Chromium limitation, not a Qt-version issue. Both machines need the
**MSVC 2022 64-bit** Qt kit (install "Build Tools for Visual Studio 2022",
Desktop development with C++ workload only -- no full Visual Studio needed).
In the Qt Maintenance Tool, check **Qt WebEngine** under the MSVC 2022 64-bit
row for Qt 6.11.1 specifically; it won't appear under MinGW.

Keep installer selections identical on both machines to avoid version-drift
bugs later -- ideally just Qt 6.11.1 + Build Tools, MSVC 2022 64-bit kit,
with WebEngine checked.
