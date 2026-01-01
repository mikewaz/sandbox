include(GoogleTest)

# Создаем исполняемый файл для тестов
add_executable(Sandbox_Tests
        HM1_1_test.cpp
)

# Линкуем с нашей библиотекой кода и GTest
target_link_libraries(Sandbox_Tests 
    PRIVATE 
        SandboxCore 
        GTest::gtest_main
)

# Команда, чтобы CLion и CMake автоматически нашли все TEST() в коде
gtest_discover_tests(Sandbox_Tests)