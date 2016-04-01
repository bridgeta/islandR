// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// log_lik
double log_lik(NumericMatrix humans, NumericMatrix phi, NumericVector p);
RcppExport SEXP islandR_log_lik(SEXP humansSEXP, SEXP phiSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type humans(humansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    __result = Rcpp::wrap(log_lik(humans, phi, p));
    return __result;
END_RCPP
}
// island
List island(IntegerMatrix isolates, int niter, int seed);
RcppExport SEXP islandR_island(SEXP isolatesSEXP, SEXP niterSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerMatrix >::type isolates(isolatesSEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    __result = Rcpp::wrap(island(isolates, niter, seed));
    return __result;
END_RCPP
}
