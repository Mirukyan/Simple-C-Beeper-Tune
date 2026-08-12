# Simple-C-Beeper-Tune
A simple C program using windows.h to play retro 8-bit melodies like Happy Birthday through the computer speaker.

#  C Sound Synthesizer: Beep Tunes

A lightweight C program for Windows that turns your computer speaker into an 8-bit retro synthesizer! Using native Windows system calls, it maps musical frequencies to custom sound durations to play classic melodies like **"Happy Birthday."**

Built as a fun side project to explore system programming, macros, and basic audio frequencies in C.

##  Features
* **Zero External Dependencies:** Uses standard C libraries and the native `<windows.h>` API.
* **Custom Musical Notes:** Maps standard note frequencies (C4, D4, E4, etc.) in Hertz (Hz) using simple C `#define` macros.
* **Retro Chiptune Vibe:** Generates classic 8-bit style audio straight through system sound calls.

##  Code Snippet
```c
// Define musical notes in Hertz
#define C4  262
#define D4  294
#define QUARTER 400

// Play note: Beep(Frequency, Duration)
Beep(C4, QUARTER);
Beep(D4, QUARTER);

```

## How to Build & Run

### Prerequisites

* Windows OS
* Any standard C compiler (GCC/MinGW, MSVC, or Clang)

## Steps

### Option 1: Dev-C++ (Recommended)
1. Open **Dev-C++**.
2. Go to `File` > `Open Single File...` (or press `Ctrl + O`) and select `Tune I made.c`.
3. Click **Compile & Run** on the top toolbar (or press `F11`).

### Option 2: Visual Studio Code
1. Open the file in **VS Code**.
2. Install the **Code Runner** extension.
3. Open `Tune I made.c` and click the **Play** button in the top-right corner.

### Option 3: Command Line (GCC)
1. Ensure GCC/MinGW is added to your system PATH.
2. Open Command Prompt in your project folder.
3. Compile and run:
   ```bash
   gcc "Tune I made.c" -o birthday_tune.exe
   .\birthday_tune.exe

Dev-C++ comes with its own built-in GCC compiler bundled right into the app, which is why hitting **F11** in Dev-C++ works instantly without needing to configure environment variables in Windows!

## What I Learned

* Utilizing the Windows API (`windows.h`) and system `Beep()` function.
* Working with preprocessor macros (`#define`) to organize readable musical frequencies and time durations.
* Controlling program execution timing and pauses using `Sleep()`.

---

Created by a college student exploring C programming (I've had help with professionals to make this simple code)
