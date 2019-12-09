// X90-WindowsHeaderInclusion.cpp
// Test that the Catch2 header compiles even after including windows.h
// without defining NOMINMAX first. As an FYI, if you do that, you are
// wrong.

#include <windows.h>
#include <catch2/catch_default_main.hpp>
#include <catch2/catch.hpp>

TEST_CASE("Catch2 did survive compilation with windows.h", "[compile-test]") {
    SUCCEED();
}
