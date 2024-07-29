//
// Created by 郑晨 on 24-7-29.
//
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../src/MathUtil.h"

TEST_CASE("Compare function", "[compare]") {
    REQUIRE(MathUtil::compare(0, 1) == true);
}