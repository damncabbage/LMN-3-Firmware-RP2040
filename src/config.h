#include <Arduino.h>

// CC values
const int ENCODER_1 = 3;
const int ENCODER_2 = 9;
const int ENCODER_3 = 14;
const int ENCODER_4 = 15;
const int ENCODER_1_BUTTON = 20;
const int ENCODER_2_BUTTON = 21;
const int ENCODER_3_BUTTON = 22;
const int ENCODER_4_BUTTON = 23;
const int UNDO_BUTTON = 24;
const int TEMPO_BUTTON = 25;
const int SAVE_BUTTON = 26;
const int SETTINGS_BUTTON = 85;
const int TRACKS_BUTTON = 86;
const int MIXER_BUTTON = 88;
const int PLUGINS_BUTTON = 89;
const int MODIFIERS_BUTTON = 90;
const int SEQUENCERS_BUTTON = 102;
const int LOOP_IN_BUTTON = 103;
const int LOOP_OUT_BUTTON = 104;
const int LOOP_BUTTON = 105;
const int CUT_BUTTON = 106;
const int PASTE_BUTTON = 107;
const int SLICE_BUTTON = 108;
const int RECORD_BUTTON = 109;
const int PLAY_BUTTON = 110;
const int STOP_BUTTON = 111;
const int CONTROL_BUTTON = 112;
const int OCTAVE_CHANGE = 117;
const int PLUS_BUTTON = 118;
const int MINUS_BUTTON = 119;
const int DUMMY = 31;

// Pins
const int HORIZONTAL_PB_PIN = 28; // RP2040: GPIO28/ADC2, pin 29; Teensy: A15, pin 39.
#define ENCODER_1_PINS {19, 20} // Teensy: {5, 6}
#define ENCODER_2_PINS {21, 22} // Teensy: {26, 27}
#define ENCODER_3_PINS {23, 24} // Teensy: {29, 30}
#define ENCODER_4_PINS {25, 26} // Teensy: {31, 32}

// Row Pins
const int ROW_0 = 18;
const int ROW_1 = 17;
const int ROW_2 = 16;
const int ROW_3 = 15;
const int ROW_4 = 14;

// Col Pins
const int COL_0 = 13;
const int COL_1 = 12;
const int COL_2 = 11;
const int COL_3 = 10;
const int COL_4 = 9;
const int COL_5 = 8;
const int COL_6 = 7;
const int COL_7 = 6;
const int COL_8 = 5;
const int COL_9 = 4;
const int COL_10 = 3;
const int COL_11 = 2;
const int COL_12 = 1;
const int COL_13 = 0;
