cmake_minimum_required(VERSION 3.20)
project(Sandbox)

cmake_policy(SET CMP0135 NEW)
set(CMAKE_CXX_STANDARD 20)

# 1. Оформляем исходный код как библиотеку (Core)
# Добавьте сюда все ваши .cpp файлы из папки src
add_library(SandboxCore STATIC
        src/HM1/HM1_1.cpp
        src/HM1/AoSvsSoA/H1_AoSvsSoA.cpp
        src/HM1/AoSvsSoA/ParticleAoS.h
        src/HM1/AoSvsSoA/ParticleSoA.h
)

# Указываем, где лежат заголовки, чтобы их видели и main, и тесты
target_include_directories(SandboxCore PUBLIC src)

# 2. Основное приложение
add_executable(Sandbox main.cpp)
target_link_libraries(Sandbox PRIVATE SandboxCore)

# 3. Подключаем тесты
option(BUILD_TESTING "Build tests" ON)
if(BUILD_TESTING)
    # Загружаем GTest один раз здесь, чтобы он был доступен в подпапках
    include(FetchContent)
    FetchContent_Declare(
            googletest
            URL https://github.com/google/googletest/archive/refs/heads/main.zip
            DOWNLOAD_EXTRACT_TIMESTAMP TRUE
    )
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(googletest)

    add_subdirectory(tests)
endif()