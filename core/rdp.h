#pragma once

#include "core.h"

#define CMD_MAX_INTS 44
#define CMD_MAX_SIZE (CMD_MAX_INTS * sizeof(int32_t))

int rdp_init(struct core_config* config);
void rdp_update(void);
