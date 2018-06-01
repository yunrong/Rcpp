#define RCPP_PROTECTED_EVAL

#include <Rcpp.h>
#include <testRcppInterfaceExporter.h>

#include "unwound.h"


//' @export
// [[Rcpp::export]]
SEXP use_cpp_interface(SEXP x) {
  unwound_t stack_obj("cpp_interface_downstream");
  Rcpp::RObject out = testRcppInterfaceExporter::test_cpp_interface(x);
  Rcpp::Rcout << "Wrapping up" << std::endl;
  return out;
}
