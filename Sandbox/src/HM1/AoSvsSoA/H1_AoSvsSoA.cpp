//
// Created by marks on 01.01.2026.
//

#include "H1_AoSvsSoA.h"
#include "ParticleAoS.h"

#include <chrono>
#include <iostream>

void dl_log1(const std::chrono::time_point<std::chrono::system_clock> start, const std::chrono::time_point<std::chrono::system_clock> end) {
    const auto elapsed = end - start;
    std::cout << "Затраченное время: " << elapsed.count() << " мс" << std::endl;
}

void H1_AoSvsSoA::AoS(std::vector<ParticleAoS>& v) {
    auto start = std::chrono::high_resolution_clock::now();

    for (auto & i : v) {
        i.x += 1.0f;
    }

    auto end = std::chrono::high_resolution_clock::now();
    dl_log1(start, end);
}

void H1_AoSvsSoA::SoA(std::vector<float>& x) {
    auto start = std::chrono::high_resolution_clock::now();

    for(float & i : x) {
        i += 0.01f;
    }

    auto end = std::chrono::high_resolution_clock::now();
    dl_log1(start, end);
}