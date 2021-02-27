me.arg(0) => string filename;
if(filename.length() == 0) "flag.wav" => filename;
dac => Gain g => WvOut w => blackhole;
filename => w.wavFilename;
<<<"writing to file:", "'" + w.filename() + "'">>>;
.5 => g.gain;
null @=> w;
while(true) 1::second => now;
