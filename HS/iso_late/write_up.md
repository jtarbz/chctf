# rundown
This challenge requires the competitor to have knowledge of linux loop devices, as well as methods to sort through large amounts
of files to find a string. The challenge consists of a raw disk image that, when mounted, reveals itself to be a maze of
directories and large files; the competitor must find the flag within this construction.

# steps
1) After unzipping, mount the raw disk image as a loop device; this is a special type of linux device that allows for files to be accessed as
block devices. The preferred way to mount a loop device is `mount -o loop [fs.iso] [mnt_dir]` (a deeper understanding of the
processes at work can be achieved by using `losetup` - see [this page](https://linux.die.net/man/8/losetup)).

2) Having navigated to the mount point, use some pattern recognition tool (such as `grep` or `ack`) to then locate the flag. See
[here](https://linux.die.net/man/1/grep) for `grep` information. Keep in mind that you may have to *combine the use of grep with
other programs* for success or maximum efficiency; this is left to the individual.

# extra
The flag for this challenge is `chctf{this_flag_is_NICE_and_isolated}`.
