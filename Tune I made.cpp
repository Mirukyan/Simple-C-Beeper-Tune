#include <stdio.h>
#include <windows.h>

// Define musical note frequencies in Hertz (Hz)
#define C4  262
#define D4  294
#define E4  330
#define F4  349
#define G4  392
#define A4  440
#define B4  494
#define C5  523

// Define note durations in milliseconds (ms)
#define QUARTER 400
#define HALF    800
#define WHOLE   1200

int main() {
    printf("Playing Happy Birthday...\n");

    // Line 1: "Happy Birthday to you"
    Beep(C4, QUARTER);
    Beep(C4, QUARTER);
    Beep(D4, HALF);
    Beep(C4, HALF);
    Beep(F4, HALF);
    Beep(E4, WHOLE);

    Sleep(200); // Short rest between lines

    // Line 2: "Happy Birthday to you"
    Beep(C4, QUARTER);
    Beep(C4, QUARTER);
    Beep(D4, HALF);
    Beep(C4, HALF);
    Beep(G4, HALF);
    Beep(F4, WHOLE);

    Sleep(200);

    // Line 3: "Happy Birthday dear friend"
    Beep(C4, QUARTER);
    Beep(C4, QUARTER);
    Beep(C5, HALF);
    Beep(A4, HALF);
    Beep(F4, HALF);
    Beep(E4, HALF);
    Beep(D4, WHOLE);

    Sleep(200);

    // Line 4: "Happy Birthday to you"
    Beep(A4, QUARTER);
    Beep(A4, QUARTER);
    Beep(F4, HALF);
    Beep(G4, HALF);
    Beep(F4, WHOLE);

    printf("Done!\n");
    return 0;
}