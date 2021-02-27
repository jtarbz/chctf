# rundown
The premise of this challenge is rather simple: a binary-encoded flag has been rendered as a frequency-modulated
digital signal. Listened to as an audio file, it sounds like a series of alternating beeps, and may confuse a
challenger without context. Finding the flag is as simple as analyzing the high and low frequency pulses of the
waveform in order to determine the order of 0s and 1s.

# steps
1) Open the `flag.wav` file in an audio editor or visualizer, such as `audacity`.
2) Zoom in! Basic analysis of the waveform reveals that the length of one bit is 50ms.
3) Decode! At this point all you need to do is record each lower-frequency 50ms span as a 0 and each higher-frequency 50ms as a 1.

# extra
See the included files for context on how this challenge was generated; the chucK audio programming language was used and
the `flag.ck` file was compiled using a simple C program.

The flag for this challenge is: `chctf{l1ke_ur_r@D10_b0xX}`