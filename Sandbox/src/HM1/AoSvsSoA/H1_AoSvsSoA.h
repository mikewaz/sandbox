//
// Created by marks on 01.01.2026.
//

#ifndef SANDBOX_H1_AOSVSSOA_H
#define SANDBOX_H1_AOSVSSOA_H
#include <vector>


struct ParticleSoA;
struct ParticleAoS;

class H1_AoSvsSoA {
public:
    void AoS(std::vector<ParticleAoS>& v);
    void SoA(std::vector<float>& x);
};


#endif //SANDBOX_H1_AOSVSSOA_H