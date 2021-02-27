# rundown
Much like `digimod`, this challenge represents an encoded flag as a digital signal. However,
this challenge is amplitude modulated rather than frequency modulated, and uses base-4 encoding rather
than binary. Listened to as an audio file, it sounds like morse code or like two interpolated morse
code tracks; this is misleading. Finding the flag requires analyzing the amplitude pulses of the waveform
in order to determine the quaternary values of each character of the flag, and then decoding that into ascii.

# steps
1) Open the `flag.wav` file in an audio editor or visualizer, such as `audacity`.
2) Switch to a logarithmic decibal view of the waveform, and zoom in.
3) Notice that the waveform consists of a series of pulses, with four possible values per 100 ms. Find the
quaternary value of each pulse and then convert that to ascii.

# extra
See the included files for context on how this challenge was generated; the chucK audio programming language was used and
the `flag.ck` file was compiled using a simple C program.

The flag for this challenge is `chctf{d0nT_@@sk_TuFF_9V3sTion5}`