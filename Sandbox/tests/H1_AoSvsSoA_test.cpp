//
// Created by marks on 01.01.2026.
//
#include <gtest/gtest.h>
#include "HM1/AoSvsSoA/ParticleSoA.h"
#include "HM1/AoSvsSoA/ParticleAoS.h"
#include "HM1/AoSvsSoA/H1_AoSvsSoA.h"

TEST(H1_AoSvsSoA, SoA) {
    H1_AoSvsSoA solver;
    std::vector<float> particles(10000);
    solver.SoA(particles);
}

TEST(H1_AoSvsSoA, AoS) {
    H1_AoSvsSoA solver;
    std::vector<ParticleAoS> particles(10000);
    solver.AoS(particles);
}
