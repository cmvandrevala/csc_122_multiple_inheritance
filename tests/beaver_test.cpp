#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/beaver.hpp"

TEST_CASE( "#chew_wood" ) {
  Beaver beaver;
  REQUIRE( beaver.chew_wood() == "What did the beaver say to the tree? Nice gnaw-ing you!\n" );
}

TEST_CASE( "#description" ) {
  Beaver beaver;
  REQUIRE( beaver.description() == "I am a fat rodent with a rudder for a tail.\n" );
}
