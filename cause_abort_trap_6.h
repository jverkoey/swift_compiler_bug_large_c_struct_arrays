// 262145 was found to consistently cause a segmentation fault on my machine
// 262145 * 100 causes an abort trap 6
// Smaller numbers result in slow build times (on the order of dozens of seconds) for large sizes of this array, e.g.
// 32000 (160 * 200)
typedef struct { int image[262145 * 100]; } cause_abort_trap_6;
