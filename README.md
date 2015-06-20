# VolTone library for Arduino

A modified version of the Arduino Tone library. Instead of specifying a single pin for output, two pins and a volume flag are specified. A speaker (plus current limiting resistor, if necessary) is expected to be connected between the two pins, instead of having one lead tied to ground.

If the volume flag is *false*, the second pin will be held low, so the tone will sound the same as with the original tone() function.

If the volume flag is *true*, The second pin will be set to the opposite level of the first pin. This will result in the tone sounding at a higher volume.

## Issues:

A tone must time out or be stopped, before starting a new tone, in order for a volume change to take effect.

