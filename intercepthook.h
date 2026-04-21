#pragma once

#include "mbbridge.h"

namespace jacdac {
int copyAndAppend(jd_frame_t *frame);
extern void (*frameReceived)(jd_frame_t *frame);
}
