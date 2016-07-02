// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// Kast
double Kast(double dX);
RcppExport SEXP GAS_Kast(SEXP dXSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type dX(dXSEXP);
    __result = Rcpp::wrap(Kast(dX));
    return __result;
END_RCPP
}
// EvaluateLogScore_Univ
arma::vec EvaluateLogScore_Univ(arma::mat mTheta, arma::vec vY, std::string Dist, int iT);
RcppExport SEXP GAS_EvaluateLogScore_Univ(SEXP mThetaSEXP, SEXP vYSEXP, SEXP DistSEXP, SEXP iTSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type mTheta(mThetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vY(vYSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< int >::type iT(iTSEXP);
    __result = Rcpp::wrap(EvaluateLogScore_Univ(mTheta, vY, Dist, iT));
    return __result;
END_RCPP
}
// EvaluateLogScore_Multi
arma::vec EvaluateLogScore_Multi(arma::mat mTheta, arma::mat mY, std::string Dist, int iT, int iN);
RcppExport SEXP GAS_EvaluateLogScore_Multi(SEXP mThetaSEXP, SEXP mYSEXP, SEXP DistSEXP, SEXP iTSEXP, SEXP iNSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type mTheta(mThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mY(mYSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< int >::type iT(iTSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    __result = Rcpp::wrap(EvaluateLogScore_Multi(mTheta, mY, Dist, iT, iN));
    return __result;
END_RCPP
}
// ddist_univ
double ddist_univ(double dY, arma::vec vTheta, std::string Dist, bool bLog);
RcppExport SEXP GAS_ddist_univ(SEXP dYSEXP, SEXP vThetaSEXP, SEXP DistSEXP, SEXP bLogSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type dY(dYSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< bool >::type bLog(bLogSEXP);
    __result = Rcpp::wrap(ddist_univ(dY, vTheta, Dist, bLog));
    return __result;
END_RCPP
}
// ddist_multi
double ddist_multi(arma::vec vY, arma::vec vTheta, int iN, std::string Dist, bool bLog);
RcppExport SEXP GAS_ddist_multi(SEXP vYSEXP, SEXP vThetaSEXP, SEXP iNSEXP, SEXP DistSEXP, SEXP bLogSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vY(vYSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< bool >::type bLog(bLogSEXP);
    __result = Rcpp::wrap(ddist_multi(vY, vTheta, iN, Dist, bLog));
    return __result;
END_RCPP
}
// rdist_univ
double rdist_univ(arma::vec vTheta, std::string Dist);
RcppExport SEXP GAS_rdist_univ(SEXP vThetaSEXP, SEXP DistSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    __result = Rcpp::wrap(rdist_univ(vTheta, Dist));
    return __result;
END_RCPP
}
// rdist_multi
arma::vec rdist_multi(arma::vec vTheta, int iN, std::string Dist);
RcppExport SEXP GAS_rdist_multi(SEXP vThetaSEXP, SEXP iNSEXP, SEXP DistSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    __result = Rcpp::wrap(rdist_multi(vTheta, iN, Dist));
    return __result;
END_RCPP
}
// pdist_univ
double pdist_univ(double dQ, arma::vec vTheta, std::string Dist);
RcppExport SEXP GAS_pdist_univ(SEXP dQSEXP, SEXP vThetaSEXP, SEXP DistSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type dQ(dQSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    __result = Rcpp::wrap(pdist_univ(dQ, vTheta, Dist));
    return __result;
END_RCPP
}
// qdist_univ
double qdist_univ(double dP, arma::vec vTheta, std::string Dist);
RcppExport SEXP GAS_qdist_univ(SEXP dPSEXP, SEXP vThetaSEXP, SEXP DistSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type dP(dPSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    __result = Rcpp::wrap(qdist_univ(dP, vTheta, Dist));
    return __result;
END_RCPP
}
// mdist_univ
arma::vec mdist_univ(arma::vec vTheta, std::string Dist);
RcppExport SEXP GAS_mdist_univ(SEXP vThetaSEXP, SEXP DistSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    __result = Rcpp::wrap(mdist_univ(vTheta, Dist));
    return __result;
END_RCPP
}
// mdist_multi_mean
arma::vec mdist_multi_mean(arma::vec vTheta, std::string Dist, int iN);
RcppExport SEXP GAS_mdist_multi_mean(SEXP vThetaSEXP, SEXP DistSEXP, SEXP iNSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    __result = Rcpp::wrap(mdist_multi_mean(vTheta, Dist, iN));
    return __result;
END_RCPP
}
// mdist_multi_cov
arma::mat mdist_multi_cov(arma::vec vTheta, std::string Dist, int iN);
RcppExport SEXP GAS_mdist_multi_cov(SEXP vThetaSEXP, SEXP DistSEXP, SEXP iNSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    __result = Rcpp::wrap(mdist_multi_cov(vTheta, Dist, iN));
    return __result;
END_RCPP
}
// GASFilter_univ
List GASFilter_univ(arma::vec vY, arma::vec vKappa, arma::mat mA, arma::mat mB, int iT, int iK, std::string Dist, std::string ScalingType);
RcppExport SEXP GAS_GASFilter_univ(SEXP vYSEXP, SEXP vKappaSEXP, SEXP mASEXP, SEXP mBSEXP, SEXP iTSEXP, SEXP iKSEXP, SEXP DistSEXP, SEXP ScalingTypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vY(vYSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vKappa(vKappaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mA(mASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mB(mBSEXP);
    Rcpp::traits::input_parameter< int >::type iT(iTSEXP);
    Rcpp::traits::input_parameter< int >::type iK(iKSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< std::string >::type ScalingType(ScalingTypeSEXP);
    __result = Rcpp::wrap(GASFilter_univ(vY, vKappa, mA, mB, iT, iK, Dist, ScalingType));
    return __result;
END_RCPP
}
// GASFilter_multi
List GASFilter_multi(arma::mat mY, arma::vec vKappa, arma::mat mA, arma::mat mB, int iT, int iN, int iK, std::string Dist, std::string ScalingType);
RcppExport SEXP GAS_GASFilter_multi(SEXP mYSEXP, SEXP vKappaSEXP, SEXP mASEXP, SEXP mBSEXP, SEXP iTSEXP, SEXP iNSEXP, SEXP iKSEXP, SEXP DistSEXP, SEXP ScalingTypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type mY(mYSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vKappa(vKappaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mA(mASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mB(mBSEXP);
    Rcpp::traits::input_parameter< int >::type iT(iTSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    Rcpp::traits::input_parameter< int >::type iK(iKSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< std::string >::type ScalingType(ScalingTypeSEXP);
    __result = Rcpp::wrap(GASFilter_multi(mY, vKappa, mA, mB, iT, iN, iK, Dist, ScalingType));
    return __result;
END_RCPP
}
// uGASMultiForcast
List uGASMultiForcast(arma::vec vTheta_tp1, arma::vec vKappa, arma::mat mA, arma::mat mB, int iH, int iB, int iK, std::string Dist, std::string ScalingType, bool bReturnsDraws);
RcppExport SEXP GAS_uGASMultiForcast(SEXP vTheta_tp1SEXP, SEXP vKappaSEXP, SEXP mASEXP, SEXP mBSEXP, SEXP iHSEXP, SEXP iBSEXP, SEXP iKSEXP, SEXP DistSEXP, SEXP ScalingTypeSEXP, SEXP bReturnsDrawsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vTheta_tp1(vTheta_tp1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vKappa(vKappaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mA(mASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mB(mBSEXP);
    Rcpp::traits::input_parameter< int >::type iH(iHSEXP);
    Rcpp::traits::input_parameter< int >::type iB(iBSEXP);
    Rcpp::traits::input_parameter< int >::type iK(iKSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< std::string >::type ScalingType(ScalingTypeSEXP);
    Rcpp::traits::input_parameter< bool >::type bReturnsDraws(bReturnsDrawsSEXP);
    __result = Rcpp::wrap(uGASMultiForcast(vTheta_tp1, vKappa, mA, mB, iH, iB, iK, Dist, ScalingType, bReturnsDraws));
    return __result;
END_RCPP
}
// mGASMultiForcast
List mGASMultiForcast(arma::vec vTheta_tp1, arma::vec vKappa, arma::mat mA, arma::mat mB, int iH, int iB, int iK, int iN, std::string Dist, std::string ScalingType, bool bReturnsDraws);
RcppExport SEXP GAS_mGASMultiForcast(SEXP vTheta_tp1SEXP, SEXP vKappaSEXP, SEXP mASEXP, SEXP mBSEXP, SEXP iHSEXP, SEXP iBSEXP, SEXP iKSEXP, SEXP iNSEXP, SEXP DistSEXP, SEXP ScalingTypeSEXP, SEXP bReturnsDrawsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vTheta_tp1(vTheta_tp1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vKappa(vKappaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mA(mASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mB(mBSEXP);
    Rcpp::traits::input_parameter< int >::type iH(iHSEXP);
    Rcpp::traits::input_parameter< int >::type iB(iBSEXP);
    Rcpp::traits::input_parameter< int >::type iK(iKSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< std::string >::type ScalingType(ScalingTypeSEXP);
    Rcpp::traits::input_parameter< bool >::type bReturnsDraws(bReturnsDrawsSEXP);
    __result = Rcpp::wrap(mGASMultiForcast(vTheta_tp1, vKappa, mA, mB, iH, iB, iK, iN, Dist, ScalingType, bReturnsDraws));
    return __result;
END_RCPP
}
// dGAMMA
double dGAMMA(double dY, double dAlpha, double dBeta, bool bLog);
RcppExport SEXP GAS_dGAMMA(SEXP dYSEXP, SEXP dAlphaSEXP, SEXP dBetaSEXP, SEXP bLogSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type dY(dYSEXP);
    Rcpp::traits::input_parameter< double >::type dAlpha(dAlphaSEXP);
    Rcpp::traits::input_parameter< double >::type dBeta(dBetaSEXP);
    Rcpp::traits::input_parameter< bool >::type bLog(bLogSEXP);
    __result = Rcpp::wrap(dGAMMA(dY, dAlpha, dBeta, bLog));
    return __result;
END_RCPP
}
// GASInnovation_univ
arma::vec GASInnovation_univ(double dY, arma::vec vTheta, arma::vec vTheta_tilde, int iK, std::string Dist, std::string ScalingType);
RcppExport SEXP GAS_GASInnovation_univ(SEXP dYSEXP, SEXP vThetaSEXP, SEXP vTheta_tildeSEXP, SEXP iKSEXP, SEXP DistSEXP, SEXP ScalingTypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type dY(dYSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vTheta_tilde(vTheta_tildeSEXP);
    Rcpp::traits::input_parameter< int >::type iK(iKSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< std::string >::type ScalingType(ScalingTypeSEXP);
    __result = Rcpp::wrap(GASInnovation_univ(dY, vTheta, vTheta_tilde, iK, Dist, ScalingType));
    return __result;
END_RCPP
}
// GASInnovation_multi
arma::vec GASInnovation_multi(arma::vec vY, arma::vec vTheta, arma::vec vTheta_tilde, int iN, int iK, std::string Dist, std::string ScalingType);
RcppExport SEXP GAS_GASInnovation_multi(SEXP vYSEXP, SEXP vThetaSEXP, SEXP vTheta_tildeSEXP, SEXP iNSEXP, SEXP iKSEXP, SEXP DistSEXP, SEXP ScalingTypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vY(vYSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vTheta_tilde(vTheta_tildeSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    Rcpp::traits::input_parameter< int >::type iK(iKSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< std::string >::type ScalingType(ScalingTypeSEXP);
    __result = Rcpp::wrap(GASInnovation_multi(vY, vTheta, vTheta_tilde, iN, iK, Dist, ScalingType));
    return __result;
END_RCPP
}
// IM_univ
arma::mat IM_univ(arma::vec vTheta, std::string Dist);
RcppExport SEXP GAS_IM_univ(SEXP vThetaSEXP, SEXP DistSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    __result = Rcpp::wrap(IM_univ(vTheta, Dist));
    return __result;
END_RCPP
}
// Map_Vec
arma::vec Map_Vec(arma::vec vX, double dL, double dU);
RcppExport SEXP GAS_Map_Vec(SEXP vXSEXP, SEXP dLSEXP, SEXP dUSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vX(vXSEXP);
    Rcpp::traits::input_parameter< double >::type dL(dLSEXP);
    Rcpp::traits::input_parameter< double >::type dU(dUSEXP);
    __result = Rcpp::wrap(Map_Vec(vX, dL, dU));
    return __result;
END_RCPP
}
// unmapVec_C
arma::vec unmapVec_C(arma::vec vG, double dL, double dU);
RcppExport SEXP GAS_unmapVec_C(SEXP vGSEXP, SEXP dLSEXP, SEXP dUSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vG(vGSEXP);
    Rcpp::traits::input_parameter< double >::type dL(dLSEXP);
    Rcpp::traits::input_parameter< double >::type dU(dUSEXP);
    __result = Rcpp::wrap(unmapVec_C(vG, dL, dU));
    return __result;
END_RCPP
}
// MapParameters_univ
arma::vec MapParameters_univ(arma::vec vTheta_tilde, std::string Dist, int iK);
RcppExport SEXP GAS_MapParameters_univ(SEXP vTheta_tildeSEXP, SEXP DistSEXP, SEXP iKSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vTheta_tilde(vTheta_tildeSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< int >::type iK(iKSEXP);
    __result = Rcpp::wrap(MapParameters_univ(vTheta_tilde, Dist, iK));
    return __result;
END_RCPP
}
// UnmapParameters_univ
arma::vec UnmapParameters_univ(arma::vec vTheta, std::string Dist, int iK);
RcppExport SEXP GAS_UnmapParameters_univ(SEXP vThetaSEXP, SEXP DistSEXP, SEXP iKSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< int >::type iK(iKSEXP);
    __result = Rcpp::wrap(UnmapParameters_univ(vTheta, Dist, iK));
    return __result;
END_RCPP
}
// MapParametersJacobian_univ
arma::mat MapParametersJacobian_univ(arma::vec vTheta_tilde, std::string Dist, int iK);
RcppExport SEXP GAS_MapParametersJacobian_univ(SEXP vTheta_tildeSEXP, SEXP DistSEXP, SEXP iKSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vTheta_tilde(vTheta_tildeSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< int >::type iK(iKSEXP);
    __result = Rcpp::wrap(MapParametersJacobian_univ(vTheta_tilde, Dist, iK));
    return __result;
END_RCPP
}
// MapR_C
arma::mat MapR_C(arma::vec vPhi, int iN);
RcppExport SEXP GAS_MapR_C(SEXP vPhiSEXP, SEXP iNSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vPhi(vPhiSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    __result = Rcpp::wrap(MapR_C(vPhi, iN));
    return __result;
END_RCPP
}
// UnMapR_C
arma::vec UnMapR_C(arma::vec vRho, int iN);
RcppExport SEXP GAS_UnMapR_C(SEXP vRhoSEXP, SEXP iNSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vRho(vRhoSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    __result = Rcpp::wrap(UnMapR_C(vRho, iN));
    return __result;
END_RCPP
}
// MapParameters_multi
arma::vec MapParameters_multi(arma::vec vTheta_tilde, std::string Dist, int iN, int iK);
RcppExport SEXP GAS_MapParameters_multi(SEXP vTheta_tildeSEXP, SEXP DistSEXP, SEXP iNSEXP, SEXP iKSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vTheta_tilde(vTheta_tildeSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    Rcpp::traits::input_parameter< int >::type iK(iKSEXP);
    __result = Rcpp::wrap(MapParameters_multi(vTheta_tilde, Dist, iN, iK));
    return __result;
END_RCPP
}
// UnmapParameters_multi
arma::vec UnmapParameters_multi(arma::vec vTheta, std::string Dist, int iN, int iK);
RcppExport SEXP GAS_UnmapParameters_multi(SEXP vThetaSEXP, SEXP DistSEXP, SEXP iNSEXP, SEXP iKSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    Rcpp::traits::input_parameter< int >::type iK(iKSEXP);
    __result = Rcpp::wrap(UnmapParameters_multi(vTheta, Dist, iN, iK));
    return __result;
END_RCPP
}
// Jacobian_MapR
arma::mat Jacobian_MapR(arma::vec vPhi, int iN);
RcppExport SEXP GAS_Jacobian_MapR(SEXP vPhiSEXP, SEXP iNSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vPhi(vPhiSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    __result = Rcpp::wrap(Jacobian_MapR(vPhi, iN));
    return __result;
END_RCPP
}
// IndexesFinder
arma::vec IndexesFinder(int iC, int iN);
RcppExport SEXP GAS_IndexesFinder(SEXP iCSEXP, SEXP iNSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type iC(iCSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    __result = Rcpp::wrap(IndexesFinder(iC, iN));
    return __result;
END_RCPP
}
// EvalMoments_univ
arma::mat EvalMoments_univ(arma::mat mTheta, std::string Dist);
RcppExport SEXP GAS_EvalMoments_univ(SEXP mThetaSEXP, SEXP DistSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type mTheta(mThetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    __result = Rcpp::wrap(EvalMoments_univ(mTheta, Dist));
    return __result;
END_RCPP
}
// EvalMoments_multi
List EvalMoments_multi(arma::mat mTheta, std::string Dist, int iN);
RcppExport SEXP GAS_EvalMoments_multi(SEXP mThetaSEXP, SEXP DistSEXP, SEXP iNSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type mTheta(mThetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    __result = Rcpp::wrap(EvalMoments_multi(mTheta, Dist, iN));
    return __result;
END_RCPP
}
// rmvnorm_mat
arma::mat rmvnorm_mat(int iN, arma::vec vMu, arma::mat mSigma);
RcppExport SEXP GAS_rmvnorm_mat(SEXP iNSEXP, SEXP vMuSEXP, SEXP mSigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vMu(vMuSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mSigma(mSigmaSEXP);
    __result = Rcpp::wrap(rmvnorm_mat(iN, vMu, mSigma));
    return __result;
END_RCPP
}
// StaticLLK_Univ
double StaticLLK_Univ(arma::vec vY, arma::vec vTheta, int iT, std::string Dist);
RcppExport SEXP GAS_StaticLLK_Univ(SEXP vYSEXP, SEXP vThetaSEXP, SEXP iTSEXP, SEXP DistSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vY(vYSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< int >::type iT(iTSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    __result = Rcpp::wrap(StaticLLK_Univ(vY, vTheta, iT, Dist));
    return __result;
END_RCPP
}
// EvaluatePit_Univ
arma::vec EvaluatePit_Univ(arma::mat mTheta, arma::vec vY, std::string Dist, int iT);
RcppExport SEXP GAS_EvaluatePit_Univ(SEXP mThetaSEXP, SEXP vYSEXP, SEXP DistSEXP, SEXP iTSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type mTheta(mThetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vY(vYSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< int >::type iT(iTSEXP);
    __result = Rcpp::wrap(EvaluatePit_Univ(mTheta, vY, Dist, iT));
    return __result;
END_RCPP
}
// Quantiles
arma::mat Quantiles(arma::mat mTheta, std::string Dist, arma::vec vProbs);
RcppExport SEXP GAS_Quantiles(SEXP mThetaSEXP, SEXP DistSEXP, SEXP vProbsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type mTheta(mThetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vProbs(vProbsSEXP);
    __result = Rcpp::wrap(Quantiles(mTheta, Dist, vProbs));
    return __result;
END_RCPP
}
// Score_univ
arma::vec Score_univ(double dY, arma::vec vTheta, std::string Dist);
RcppExport SEXP GAS_Score_univ(SEXP dYSEXP, SEXP vThetaSEXP, SEXP DistSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type dY(dYSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    __result = Rcpp::wrap(Score_univ(dY, vTheta, Dist));
    return __result;
END_RCPP
}
// Score_multi
arma::vec Score_multi(arma::vec vY, arma::vec vTheta, int iN, std::string Dist);
RcppExport SEXP GAS_Score_multi(SEXP vYSEXP, SEXP vThetaSEXP, SEXP iNSEXP, SEXP DistSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type vY(vYSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    __result = Rcpp::wrap(Score_multi(vY, vTheta, iN, Dist));
    return __result;
END_RCPP
}
// SimulateGAS_univ
List SimulateGAS_univ(int iT, arma::vec vKappa, arma::mat mA, arma::mat mB, std::string Dist, std::string ScalingType);
RcppExport SEXP GAS_SimulateGAS_univ(SEXP iTSEXP, SEXP vKappaSEXP, SEXP mASEXP, SEXP mBSEXP, SEXP DistSEXP, SEXP ScalingTypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type iT(iTSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vKappa(vKappaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mA(mASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mB(mBSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< std::string >::type ScalingType(ScalingTypeSEXP);
    __result = Rcpp::wrap(SimulateGAS_univ(iT, vKappa, mA, mB, Dist, ScalingType));
    return __result;
END_RCPP
}
// SimulateGAS_multi
List SimulateGAS_multi(int iT, int iN, arma::vec vKappa, arma::mat mA, arma::mat mB, std::string Dist, std::string ScalingType);
RcppExport SEXP GAS_SimulateGAS_multi(SEXP iTSEXP, SEXP iNSEXP, SEXP vKappaSEXP, SEXP mASEXP, SEXP mBSEXP, SEXP DistSEXP, SEXP ScalingTypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type iT(iTSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vKappa(vKappaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mA(mASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mB(mBSEXP);
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< std::string >::type ScalingType(ScalingTypeSEXP);
    __result = Rcpp::wrap(SimulateGAS_multi(iT, iN, vKappa, mA, mB, Dist, ScalingType));
    return __result;
END_RCPP
}
// NumberParameters
int NumberParameters(std::string Dist, int iN);
RcppExport SEXP GAS_NumberParameters(SEXP DistSEXP, SEXP iNSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    __result = Rcpp::wrap(NumberParameters(Dist, iN));
    return __result;
END_RCPP
}
// build_vR
arma::vec build_vR(arma::mat mR, int iN);
RcppExport SEXP GAS_build_vR(SEXP mRSEXP, SEXP iNSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type mR(mRSEXP);
    Rcpp::traits::input_parameter< int >::type iN(iNSEXP);
    __result = Rcpp::wrap(build_vR(mR, iN));
    return __result;
END_RCPP
}
