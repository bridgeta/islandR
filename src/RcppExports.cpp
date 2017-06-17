// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// log_lik
double log_lik(NumericMatrix humans, NumericMatrix phi, NumericVector p);
RcppExport SEXP islandR_log_lik(SEXP humansSEXP, SEXP phiSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type humans(humansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(log_lik(humans, phi, p));
    return rcpp_result_gen;
END_RCPP
}
// island
List island(IntegerMatrix isolates, int niter);
RcppExport SEXP islandR_island(SEXP isolatesSEXP, SEXP niterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type isolates(isolatesSEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    rcpp_result_gen = Rcpp::wrap(island(isolates, niter));
    return rcpp_result_gen;
END_RCPP
}
