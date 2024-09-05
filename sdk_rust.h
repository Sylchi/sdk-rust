#ifndef SDK_RUST_H
#define SDK_RUST_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

int connect(const char* hostname, int port);

#ifdef __cplusplus
}
#endif

#endif // SDK_RUST_H