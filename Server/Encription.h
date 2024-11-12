//
// Created by yerik on 11/11/24.
//

#ifndef ENCRIPTION_H
#define ENCRIPTION_H

#include <vector>
#include <ctime>
#include <cstdlib>
#include "AES.h"
#include "RSA.h"
#include <utility> // Para std::pair


class Encription {
public:
    std::pair<std::vector<unsigned char>, std::vector<int>> encrypt(std::string mensaje);
    std::vector<unsigned char> decrypt(std::vector<unsigned char> mensaje, std::vector<int> llave);
};



#endif //ENCRIPTION_H
