#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/duck.hpp"

TEST_CASE( "#eat_peas" ) {
  Duck duck;
  REQUIRE( duck.eat_peas() == "You shouldn't feed ducks in the park bread, but they actually love peas. Look up ducks eating peas on YouTube.\n" );
}

TEST_CASE( "#description" ) {
  Duck duck;
  REQUIRE( duck.description() == "I am essentially a buoyant pigeon.\n" );
}
