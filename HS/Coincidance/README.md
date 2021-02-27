# Coincidance
## Prompt
Help! My friend sent me this really cool TikTok, but the audio seems to be broken! Can you help me find out what's up with the audio?
## Writeup

#### Basics
This challenge involves a .jpg flag hidden inside of a .wav file. This is pretty simple to find, just open a spectrogram of the coincidancelynot.wav using your favorite audio analysis/visualizer. I solved it by opening it inside of Sonic Visualizer.

#### Steps to Solve
1. Open the .wav in Sonic Visualizer or your other audio analysis tool.
2. Select the option to view a spectrogram of the .wav.
3. Flag should be right there at the start of the spectrogram.

#### How I made it
1. I used Coagula to create a .wav of the .jpg flag by simply rendering without Blue Noise and saving the render.
2. I imported the Coincidance audio and the flag audio into Audacity and replaced the first couple of seconds of Coindicance with the flag audio.
3. I then exported it as a .wav file and made sure I could view it in Sonic Visualizer.

#### Conclusion
Ultimately, this challenge involves a bit of Forensics and Steganography. You have to first find out what is wrong with the audio by getting creative with your viewing methods. In the end, it is a .jpg file hidden within a .wav file but if you view the spectrogram, the .jpg text is still viewable. This is a pretty easy challenge to solve and I hope you enjoyed it.

#### Flag
chctf{WOW_U_C4N_R34L1Y_D4NC3_!}
