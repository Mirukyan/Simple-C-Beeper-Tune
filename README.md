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

### Steps
1. Open Command Prompt or Terminal in your project folder.
2. Compile the code:
   ```bash
   gcc "Tune I made.c" -o birthday_tune.exe

```


3. Run the executable and turn your sound up! 🔊
```bash
.\birthday_tune.exe

```



## What I Learned

* Utilizing the Windows API (`windows.h`) and system `Beep()` function.
* Working with preprocessor macros (`#define`) to organize readable musical frequencies and time durations.
* Controlling program execution timing and pauses using `Sleep()`.

---

Created by a college student exploring C programming (I've had help with professionals to make this simple code)
