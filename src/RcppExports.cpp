// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// c_which_int
int c_which_int(std::vector<int> vec, int x);
RcppExport SEXP _epm_c_which_int(SEXP vecSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(c_which_int(vec, x));
    return rcpp_result_gen;
END_RCPP
}
// c_which_char
int c_which_char(std::vector<std::string> vec, std::string x);
RcppExport SEXP _epm_c_which_char(SEXP vecSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(c_which_char(vec, x));
    return rcpp_result_gen;
END_RCPP
}
// intersect_int
std::vector<int> intersect_int(std::vector<int> vec1, std::vector<int> vec2);
RcppExport SEXP _epm_intersect_int(SEXP vec1SEXP, SEXP vec2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type vec1(vec1SEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type vec2(vec2SEXP);
    rcpp_result_gen = Rcpp::wrap(intersect_int(vec1, vec2));
    return rcpp_result_gen;
END_RCPP
}
// setdiff_int
std::vector<int> setdiff_int(std::vector<int> vec1, std::vector<int> vec2);
RcppExport SEXP _epm_setdiff_int(SEXP vec1SEXP, SEXP vec2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type vec1(vec1SEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type vec2(vec2SEXP);
    rcpp_result_gen = Rcpp::wrap(setdiff_int(vec1, vec2));
    return rcpp_result_gen;
END_RCPP
}
// getComponentA
std::vector<std::string> getComponentA(std::vector<std::string> commI, std::vector<std::string> commJ);
RcppExport SEXP _epm_getComponentA(SEXP commISEXP, SEXP commJSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type commI(commISEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type commJ(commJSEXP);
    rcpp_result_gen = Rcpp::wrap(getComponentA(commI, commJ));
    return rcpp_result_gen;
END_RCPP
}
// getComponentB
std::vector<std::string> getComponentB(std::vector<std::string> commI, std::vector<std::string> commJ);
RcppExport SEXP _epm_getComponentB(SEXP commISEXP, SEXP commJSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type commI(commISEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type commJ(commJSEXP);
    rcpp_result_gen = Rcpp::wrap(getComponentB(commI, commJ));
    return rcpp_result_gen;
END_RCPP
}
// getComponentC
std::vector<std::string> getComponentC(std::vector<std::string> commI, std::vector<std::string> commJ);
RcppExport SEXP _epm_getComponentC(SEXP commISEXP, SEXP commJSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type commI(commISEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type commJ(commJSEXP);
    rcpp_result_gen = Rcpp::wrap(getComponentC(commI, commJ));
    return rcpp_result_gen;
END_RCPP
}
// getRootToTipEdges
List getRootToTipEdges(List phylo);
RcppExport SEXP _epm_getRootToTipEdges(SEXP phyloSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< List >::type phylo(phyloSEXP);
    rcpp_result_gen = Rcpp::wrap(getRootToTipEdges(phylo));
    return rcpp_result_gen;
END_RCPP
}
// meanNNdist
double meanNNdist(NumericVector input);
RcppExport SEXP _epm_meanNNdist(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(meanNNdist(input));
    return rcpp_result_gen;
END_RCPP
}
// minNNdist
double minNNdist(NumericVector input);
RcppExport SEXP _epm_minNNdist(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(minNNdist(input));
    return rcpp_result_gen;
END_RCPP
}
// varNNdist
double varNNdist(NumericVector input);
RcppExport SEXP _epm_varNNdist(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(varNNdist(input));
    return rcpp_result_gen;
END_RCPP
}
// cellAvg
NumericVector cellAvg(List input, NumericVector trait, String stat);
RcppExport SEXP _epm_cellAvg(SEXP inputSEXP, SEXP traitSEXP, SEXP statSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< List >::type input(inputSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type trait(traitSEXP);
    Rcpp::traits::input_parameter< String >::type stat(statSEXP);
    rcpp_result_gen = Rcpp::wrap(cellAvg(input, trait, stat));
    return rcpp_result_gen;
END_RCPP
}
// intersectList
List intersectList(List input, StringVector vec);
RcppExport SEXP _epm_intersectList(SEXP inputSEXP, SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< List >::type input(inputSEXP);
    Rcpp::traits::input_parameter< StringVector >::type vec(vecSEXP);
    rcpp_result_gen = Rcpp::wrap(intersectList(input, vec));
    return rcpp_result_gen;
END_RCPP
}
// countCells
NumericVector countCells(List cellList, StringVector vec);
RcppExport SEXP _epm_countCells(SEXP cellListSEXP, SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< List >::type cellList(cellListSEXP);
    Rcpp::traits::input_parameter< StringVector >::type vec(vecSEXP);
    rcpp_result_gen = Rcpp::wrap(countCells(cellList, vec));
    return rcpp_result_gen;
END_RCPP
}
// calcPairwiseTaxonomicSorensen
NumericMatrix calcPairwiseTaxonomicSorensen(List allComm, String component);
RcppExport SEXP _epm_calcPairwiseTaxonomicSorensen(SEXP allCommSEXP, SEXP componentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< List >::type allComm(allCommSEXP);
    Rcpp::traits::input_parameter< String >::type component(componentSEXP);
    rcpp_result_gen = Rcpp::wrap(calcPairwiseTaxonomicSorensen(allComm, component));
    return rcpp_result_gen;
END_RCPP
}
// uniqueBranchesForSet
std::vector<int> uniqueBranchesForSet(std::vector<std::string> a, std::vector<std::string> tipLabels, List spEdges);
RcppExport SEXP _epm_uniqueBranchesForSet(SEXP aSEXP, SEXP tipLabelsSEXP, SEXP spEdgesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type a(aSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type tipLabels(tipLabelsSEXP);
    Rcpp::traits::input_parameter< List >::type spEdges(spEdgesSEXP);
    rcpp_result_gen = Rcpp::wrap(uniqueBranchesForSet(a, tipLabels, spEdges));
    return rcpp_result_gen;
END_RCPP
}
// calcPairwisePhylosor2
NumericMatrix calcPairwisePhylosor2(List allComm, List phylo, String component);
RcppExport SEXP _epm_calcPairwisePhylosor2(SEXP allCommSEXP, SEXP phyloSEXP, SEXP componentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< List >::type allComm(allCommSEXP);
    Rcpp::traits::input_parameter< List >::type phylo(phyloSEXP);
    Rcpp::traits::input_parameter< String >::type component(componentSEXP);
    rcpp_result_gen = Rcpp::wrap(calcPairwisePhylosor2(allComm, phylo, component));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_epm_c_which_int", (DL_FUNC) &_epm_c_which_int, 2},
    {"_epm_c_which_char", (DL_FUNC) &_epm_c_which_char, 2},
    {"_epm_intersect_int", (DL_FUNC) &_epm_intersect_int, 2},
    {"_epm_setdiff_int", (DL_FUNC) &_epm_setdiff_int, 2},
    {"_epm_getComponentA", (DL_FUNC) &_epm_getComponentA, 2},
    {"_epm_getComponentB", (DL_FUNC) &_epm_getComponentB, 2},
    {"_epm_getComponentC", (DL_FUNC) &_epm_getComponentC, 2},
    {"_epm_getRootToTipEdges", (DL_FUNC) &_epm_getRootToTipEdges, 1},
    {"_epm_meanNNdist", (DL_FUNC) &_epm_meanNNdist, 1},
    {"_epm_minNNdist", (DL_FUNC) &_epm_minNNdist, 1},
    {"_epm_varNNdist", (DL_FUNC) &_epm_varNNdist, 1},
    {"_epm_cellAvg", (DL_FUNC) &_epm_cellAvg, 3},
    {"_epm_intersectList", (DL_FUNC) &_epm_intersectList, 2},
    {"_epm_countCells", (DL_FUNC) &_epm_countCells, 2},
    {"_epm_calcPairwiseTaxonomicSorensen", (DL_FUNC) &_epm_calcPairwiseTaxonomicSorensen, 2},
    {"_epm_uniqueBranchesForSet", (DL_FUNC) &_epm_uniqueBranchesForSet, 3},
    {"_epm_calcPairwisePhylosor2", (DL_FUNC) &_epm_calcPairwisePhylosor2, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_epm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}