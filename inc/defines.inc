#ifdef TI73
privledgedPage .equ $1C
swapSector .equ $18
allocTableStart .equ $17
bootPage .equ $1F
#endif
#ifdef TI83p
privledgedPage .equ $1C
swapSector .equ $18
allocTableStart .equ $17
bootPage .equ $1F
#endif
#ifdef TI83pSE
#define CPU15
privledgedPage .equ $7C
swapSector .equ $78
allocTableStart .equ $77
bootPage .equ $7F
#endif
#ifdef TI84p
#define CPU15
#define USB
#define CLOCK
privledgedPage .equ $3C
swapSector .equ $38
allocTableStart .equ $37
bootPage .equ $3F
#endif
#ifdef TI84pSE
#define CPU15
#define USB
#define CLOCK
privledgedPage .equ $7C
swapSector .equ $78
allocTableStart .equ $77
bootPage .equ $7F
#endif
nullThread .equ $FF
errOutOfMem .equ 1
errTooManyThreads .equ 2
errStreamNotFound .equ 3
errEndOfStream .equ 4
errFileNotFound .equ 5
errTooManyStreams .equ 6
errNoSuchThread .equ 7
errTooManyLibraries .equ 8
errUnsupported .equ 9

kernelMem .equ $8000
kernelGarbage .equ $8100
kernelGarbageSize .equ $100
userMemory .equ $8200

threadTable .equ kernelMem
libraryTable .equ $8050
threadTableSize .equ libraryTable - threadTable
signalTable .equ $8078
fileStreamTable .equ $808C
fileStreamTableSize .equ $28

currentThreadIndex .equ $80B4
activeThreads .equ $80B5
loadedLibraries .equ $80B6
activeSignals .equ $80B7
activeFileStreams .equ $80B8
nextThreadId .equ $80B9
nextStreamId .equ $80BA

hwLockIO .equ $80BB
hwLockLCD .equ $80BC
hwLockKeypad .equ $80BD
hwLockUSB .equ $80BE

; Misc.
currentDirectoryID .equ $80BF
endOfTablePage .equ $80C1
endOfTableAddress .equ $80C2 ; 2 bytes
endOfDataPage .equ $80C4
endOfDataAddress .equ $80C5 ; 2 bytes
currentContrast .equ $80C7

clip_mask .equ $80C8

maxThreads .equ 10
maxFileStreams .equ 5
maxLibraries .equ 10

; Filesystem stuff
fsEndOfTable .equ $FF
fsFile .equ $7F
fsDirectory .equ $BF
fsSymLink .equ $DF
fsEndOfPage .equ $EF
fsModifiedFile .equ $07 ; Renamed files are marked like this
fsRenamedDirectory .equ $03
fsDeletedSymLink .equ $0F
fsDeletedFile .equ $3F
fsDeletedDirectory .equ $1F