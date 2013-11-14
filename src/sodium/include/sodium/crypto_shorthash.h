#ifndef crypto_shorthash_H
#define crypto_shorthash_H

#include <stdlib.h>

#include "crypto_shorthash_siphash24.h"
#include "export.h"

#ifdef __cplusplus
extern "C" {
#endif

#define crypto_shorthash_BYTES crypto_shorthash_siphash24_BYTES
SODIUM_EXPORT
size_t  crypto_shorthash_bytes(void);

#define crypto_shorthash_KEYBYTES crypto_shorthash_siphash24_KEYBYTES
SODIUM_EXPORT
size_t  crypto_shorthash_keybytes(void);

#define crypto_shorthash_PRIMITIVE "siphash24"
SODIUM_EXPORT
const char *crypto_shorthash_primitive(void);

SODIUM_EXPORT
int crypto_shorthash(unsigned char *out, const unsigned char *in,
                     unsigned long long inlen, const unsigned char *k);

#ifdef __cplusplus
}
#endif

#endif