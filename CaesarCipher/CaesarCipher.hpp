#ifndef CAESARCIPHER_H_
#define CAESARCIPHER_H_

#include <string>
#include <stdint.h>

class CaesarCipher {
private:
    int32_t shift;
public:
    CaesarCipher(int32_t shift);

    std::string encrypt(std::string plaintext);
    std::string decrypt(std::string ciphertext);
};

#endif