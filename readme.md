## FPV Antenna Tracker
> An arduino based FPV antenna tracker

### About
Started the project to get a better FPV feed while flying multirotors.

### How it works
The arduino reads the RSSI signal from the 5.8 GHz video receiver(s). It then compares the signal strength to the other receivers on the tracker to determine which way to rotate.
> I.E. if right receiver RSSI is stronger, spin motor `n` times.
