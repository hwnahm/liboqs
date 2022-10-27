#ifndef PQCLEAN_DILITHIUM3_AARCH64_API_H
#define PQCLEAN_DILITHIUM3_AARCH64_API_H


#include <stddef.h>
#include <stdint.h>

#define PQCLEAN_DILITHIUM3_AARCH64_CRYPTO_PUBLICKEYBYTES 1952
#define PQCLEAN_DILITHIUM3_AARCH64_CRYPTO_SECRETKEYBYTES 4000
#define PQCLEAN_DILITHIUM3_AARCH64_CRYPTO_BYTES 3293
#define PQCLEAN_DILITHIUM3_AARCH64_CRYPTO_ALGNAME "Dilithium3"

int PQCLEAN_DILITHIUM3_AARCH64_crypto_sign_keypair(uint8_t *pk, uint8_t *sk, uint8_t *seed);

int PQCLEAN_DILITHIUM3_AARCH64_crypto_sign_signature(
    uint8_t *sig, size_t *siglen,
    const uint8_t *m, size_t mlen, const uint8_t *sk);

int PQCLEAN_DILITHIUM3_AARCH64_crypto_sign_verify(
    const uint8_t *sig, size_t siglen,
    const uint8_t *m, size_t mlen, const uint8_t *pk);

int PQCLEAN_DILITHIUM3_AARCH64_crypto_sign(
    uint8_t *sm, size_t *smlen,
    const uint8_t *m, size_t mlen, const uint8_t *sk);

int PQCLEAN_DILITHIUM3_AARCH64_crypto_sign_open(
    uint8_t *m, size_t *mlen,
    const uint8_t *sm, size_t smlen, const uint8_t *pk);


#endif
