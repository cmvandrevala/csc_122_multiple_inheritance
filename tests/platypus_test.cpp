#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/platypus.hpp"

TEST_CASE( "#contemplate_existence" ) {
  Platypus platypus;
  REQUIRE( platypus.contemplate_existence() == "I am half duck, half beaver. I have become more powerful than you could imagine...\n" );
}
