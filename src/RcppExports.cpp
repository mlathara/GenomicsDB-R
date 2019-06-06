// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "genomicsdb_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// version
Rcpp::CharacterVector version();
RcppExport SEXP _genomicsdb_version() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(version());
    return rcpp_result_gen;
END_RCPP
}
// setup
Rcpp::XPtr<GenomicsDB> setup(const std::string& workspace, const std::string& vid_mapping_file, const std::string& callset_mapping_file, const std::string& reference_genome, const std::vector<std::string> attributes);
RcppExport SEXP _genomicsdb_setup(SEXP workspaceSEXP, SEXP vid_mapping_fileSEXP, SEXP callset_mapping_fileSEXP, SEXP reference_genomeSEXP, SEXP attributesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type workspace(workspaceSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type vid_mapping_file(vid_mapping_fileSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type callset_mapping_file(callset_mapping_fileSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type reference_genome(reference_genomeSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string> >::type attributes(attributesSEXP);
    rcpp_result_gen = Rcpp::wrap(setup(workspace, vid_mapping_file, callset_mapping_file, reference_genome, attributes));
    return rcpp_result_gen;
END_RCPP
}
// setup_from_json
Rcpp::XPtr<GenomicsDB> setup_from_json(const std::string& query_configuration_json_file, const std::string& loader_configuration_json_file);
RcppExport SEXP _genomicsdb_setup_from_json(SEXP query_configuration_json_fileSEXP, SEXP loader_configuration_json_fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type query_configuration_json_file(query_configuration_json_fileSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type loader_configuration_json_file(loader_configuration_json_fileSEXP);
    rcpp_result_gen = Rcpp::wrap(setup_from_json(query_configuration_json_file, loader_configuration_json_file));
    return rcpp_result_gen;
END_RCPP
}
// query_variants
Rcpp::List query_variants(Rcpp::XPtr<GenomicsDB> genomicsdb, const std::string& array, Rcpp::List column_ranges, Rcpp::List row_ranges);
RcppExport SEXP _genomicsdb_query_variants(SEXP genomicsdbSEXP, SEXP arraySEXP, SEXP column_rangesSEXP, SEXP row_rangesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<GenomicsDB> >::type genomicsdb(genomicsdbSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type array(arraySEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type column_ranges(column_rangesSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type row_ranges(row_rangesSEXP);
    rcpp_result_gen = Rcpp::wrap(query_variants(genomicsdb, array, column_ranges, row_ranges));
    return rcpp_result_gen;
END_RCPP
}
// query_variant_calls
Rcpp::List query_variant_calls(Rcpp::XPtr<GenomicsDB> genomicsdb, const std::string& array, Rcpp::List column_ranges, Rcpp::List row_ranges);
RcppExport SEXP _genomicsdb_query_variant_calls(SEXP genomicsdbSEXP, SEXP arraySEXP, SEXP column_rangesSEXP, SEXP row_rangesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<GenomicsDB> >::type genomicsdb(genomicsdbSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type array(arraySEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type column_ranges(column_rangesSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type row_ranges(row_rangesSEXP);
    rcpp_result_gen = Rcpp::wrap(query_variant_calls(genomicsdb, array, column_ranges, row_ranges));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _genomicsdb_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_vector_access1
void rcpp_vector_access1();
RcppExport SEXP _genomicsdb_rcpp_vector_access1() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_vector_access1();
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_genomicsdb_version", (DL_FUNC) &_genomicsdb_version, 0},
    {"_genomicsdb_setup", (DL_FUNC) &_genomicsdb_setup, 5},
    {"_genomicsdb_setup_from_json", (DL_FUNC) &_genomicsdb_setup_from_json, 2},
    {"_genomicsdb_query_variants", (DL_FUNC) &_genomicsdb_query_variants, 4},
    {"_genomicsdb_query_variant_calls", (DL_FUNC) &_genomicsdb_query_variant_calls, 4},
    {"_genomicsdb_rcpp_hello_world", (DL_FUNC) &_genomicsdb_rcpp_hello_world, 0},
    {"_genomicsdb_rcpp_vector_access1", (DL_FUNC) &_genomicsdb_rcpp_vector_access1, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_genomicsdb(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
