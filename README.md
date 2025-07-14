# PlayStation1VstsEx (PlayStation 1 VST Instruments Ex)

This is a fork of the [iPlug 2 Framework](https://github.com/iplug2/iplug2) housing 2 VST instruments which enable the sound of the PlayStation 1 SPU and PlayStation 2 SPU2 to be replicated for classic video game music production, and is an improved fork of the original [PlayStation1Vsts](https://github.com/BodbDearg/PlayStation1Vsts), which makes several accuracy, DAW compatibility, and SPU2 related changes.

One VST is an instrument which allows a PlayStation 1 ADPCM sample (.VAG file) to be played like a standard sample-based instrument, with authentic PS1 style ADSR envelope settings and SPU sample interpolation. The second VST (which has been renamed SpuReverb) is a reverb module which allows recreating the PS2's (or PS1's) reverb effects.
See [SpuReverb](https://github.com/jthecodebuilder/PlayStation1VstsEx/tree/master/Plugins/PsxReverb) or [PsxSampler](https://github.com/jthecodebuilder/PlayStation1VstsEx/tree/master/Plugins/PsxSampler) for more info.

Both plugins use SPU emulation code from the [PsyDoom](https://github.com/BodbDearg/PsyDoom) PlayStation Doom port, and are mainly intended to allow for music production for that game. However, they could also easily be used for other PS1/PS2 related projects.

LIMITATION: Both plugins must be used at a 48 (or 44.1) KHz sample rate, as per the original PS2 or PS1 hardware. Any other sample rates will result in incorrect results.

BIG thanks to [BodbDearg](https://github.com/BodbDearg) for making the original plugins and code.
