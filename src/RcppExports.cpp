// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_distSTRING
Rcpp::List rcpp_distSTRING(Rcpp::StringVector dnavector, Rcpp::NumericMatrix scoreMatrix, int ncores);
RcppExport SEXP _distSTRING_rcpp_distSTRING(SEXP dnavectorSEXP, SEXP scoreMatrixSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type dnavector(dnavectorSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type scoreMatrix(scoreMatrixSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_distSTRING(dnavector, scoreMatrix, ncores));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_pairwiseDeletionAA
Rcpp::List rcpp_pairwiseDeletionAA(Rcpp::StringVector aavector, int ncores);
RcppExport SEXP _distSTRING_rcpp_pairwiseDeletionAA(SEXP aavectorSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type aavector(aavectorSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_pairwiseDeletionAA(aavector, ncores));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_pairwiseDeletionDNA
Rcpp::List rcpp_pairwiseDeletionDNA(Rcpp::StringVector dnavector, int ncores);
RcppExport SEXP _distSTRING_rcpp_pairwiseDeletionDNA(SEXP dnavectorSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type dnavector(dnavectorSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_pairwiseDeletionDNA(dnavector, ncores));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_distSTRING_rcpp_distSTRING", (DL_FUNC) &_distSTRING_rcpp_distSTRING, 3},
    {"_distSTRING_rcpp_pairwiseDeletionAA", (DL_FUNC) &_distSTRING_rcpp_pairwiseDeletionAA, 2},
    {"_distSTRING_rcpp_pairwiseDeletionDNA", (DL_FUNC) &_distSTRING_rcpp_pairwiseDeletionDNA, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_distSTRING(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
