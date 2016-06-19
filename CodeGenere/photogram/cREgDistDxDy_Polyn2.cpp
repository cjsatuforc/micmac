// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cREgDistDxDy_Polyn2.h"


cREgDistDxDy_Polyn2::cREgDistDxDy_Polyn2():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,9));
   Close(false);
}



void cREgDistDxDy_Polyn2::ComputeVal()
{
   double tmp0_ = mLocRegDistxy1_x - mLocPolyn2_State_1_0;
   double tmp1_ = (tmp0_) / mLocPolyn2_State_0_0;
   double tmp2_ = mLocRegDistxy1_y - mLocPolyn2_State_2_0;
   double tmp3_ = (tmp2_) / mLocPolyn2_State_0_0;
   double tmp4_ = mCompCoord[3];
   double tmp5_ = 1 + tmp4_;
   double tmp6_ = mCompCoord[4];
   double tmp7_ = mCompCoord[5];
   double tmp8_ = tmp7_ * 2;
   double tmp9_ = mLocRegDistxy2_x - mLocPolyn2_State_1_0;
   double tmp10_ = (tmp9_) / mLocPolyn2_State_0_0;
   double tmp11_ = mCompCoord[6];
   double tmp12_ = mLocRegDistxy2_y - mLocPolyn2_State_2_0;
   double tmp13_ = (tmp12_) / mLocPolyn2_State_0_0;
   double tmp14_ = mCompCoord[7];
   double tmp15_ = mLocRegDistxy3_x - mLocPolyn2_State_1_0;
   double tmp16_ = (tmp15_) / mLocPolyn2_State_0_0;
   double tmp17_ = mLocRegDistxy3_y - mLocPolyn2_State_2_0;
   double tmp18_ = (tmp17_) / mLocPolyn2_State_0_0;
   double tmp19_ = mLocRegDistxy4_x - mLocPolyn2_State_1_0;
   double tmp20_ = (tmp19_) / mLocPolyn2_State_0_0;
   double tmp21_ = mLocRegDistxy4_y - mLocPolyn2_State_2_0;
   double tmp22_ = (tmp21_) / mLocPolyn2_State_0_0;
   double tmp23_ = (tmp1_) * (tmp3_);
   double tmp24_ = (tmp3_) * (tmp3_);
   double tmp25_ = (tmp1_) * (tmp1_);
   double tmp26_ = 1 - tmp4_;
   double tmp27_ = (tmp10_) * (tmp13_);
   double tmp28_ = tmp11_ * 2;
   double tmp29_ = (tmp13_) * (tmp13_);
   double tmp30_ = mCompCoord[8];
   double tmp31_ = (tmp10_) * (tmp10_);
   double tmp32_ = (tmp16_) * (tmp18_);
   double tmp33_ = (tmp18_) * (tmp18_);
   double tmp34_ = (tmp16_) * (tmp16_);
   double tmp35_ = (tmp20_) * (tmp22_);
   double tmp36_ = (tmp22_) * (tmp22_);
   double tmp37_ = (tmp20_) * (tmp20_);

  mVal[0] = (mLocPolyn2_State_1_0 + (((tmp5_) * (tmp1_) + tmp6_ * (tmp3_)) - tmp8_ * tmp25_ + tmp11_ * tmp23_ + tmp14_ * tmp24_) * mLocPolyn2_State_0_0 + mLocPolyn2_State_1_0 + (((tmp5_) * (tmp10_) + tmp6_ * (tmp13_)) - tmp8_ * tmp31_ + tmp11_ * tmp27_ + tmp14_ * tmp29_) * mLocPolyn2_State_0_0) - (mLocPolyn2_State_1_0 + (((tmp5_) * (tmp16_) + tmp6_ * (tmp18_)) - tmp8_ * tmp34_ + tmp11_ * tmp32_ + tmp14_ * tmp33_) * mLocPolyn2_State_0_0 + mLocPolyn2_State_1_0 + (((tmp5_) * (tmp20_) + tmp6_ * (tmp22_)) - tmp8_ * tmp37_ + tmp11_ * tmp35_ + tmp14_ * tmp36_) * mLocPolyn2_State_0_0);

  mVal[1] = (mLocPolyn2_State_2_0 + (((tmp26_) * (tmp3_) + tmp6_ * (tmp1_) + tmp7_ * tmp23_) - tmp28_ * tmp24_ + tmp30_ * tmp25_) * mLocPolyn2_State_0_0 + mLocPolyn2_State_2_0 + (((tmp26_) * (tmp13_) + tmp6_ * (tmp10_) + tmp7_ * tmp27_) - tmp28_ * tmp29_ + tmp30_ * tmp31_) * mLocPolyn2_State_0_0) - (mLocPolyn2_State_2_0 + (((tmp26_) * (tmp18_) + tmp6_ * (tmp16_) + tmp7_ * tmp32_) - tmp28_ * tmp33_ + tmp30_ * tmp34_) * mLocPolyn2_State_0_0 + mLocPolyn2_State_2_0 + (((tmp26_) * (tmp22_) + tmp6_ * (tmp20_) + tmp7_ * tmp35_) - tmp28_ * tmp36_ + tmp30_ * tmp37_) * mLocPolyn2_State_0_0);

}


void cREgDistDxDy_Polyn2::ComputeValDeriv()
{
   double tmp0_ = mLocRegDistxy1_x - mLocPolyn2_State_1_0;
   double tmp1_ = (tmp0_) / mLocPolyn2_State_0_0;
   double tmp2_ = mLocRegDistxy1_y - mLocPolyn2_State_2_0;
   double tmp3_ = (tmp2_) / mLocPolyn2_State_0_0;
   double tmp4_ = mCompCoord[3];
   double tmp5_ = 1 + tmp4_;
   double tmp6_ = mCompCoord[4];
   double tmp7_ = mCompCoord[5];
   double tmp8_ = tmp7_ * 2;
   double tmp9_ = mLocRegDistxy2_x - mLocPolyn2_State_1_0;
   double tmp10_ = (tmp9_) / mLocPolyn2_State_0_0;
   double tmp11_ = mCompCoord[6];
   double tmp12_ = mLocRegDistxy2_y - mLocPolyn2_State_2_0;
   double tmp13_ = (tmp12_) / mLocPolyn2_State_0_0;
   double tmp14_ = mCompCoord[7];
   double tmp15_ = mLocRegDistxy3_x - mLocPolyn2_State_1_0;
   double tmp16_ = (tmp15_) / mLocPolyn2_State_0_0;
   double tmp17_ = mLocRegDistxy3_y - mLocPolyn2_State_2_0;
   double tmp18_ = (tmp17_) / mLocPolyn2_State_0_0;
   double tmp19_ = mLocRegDistxy4_x - mLocPolyn2_State_1_0;
   double tmp20_ = (tmp19_) / mLocPolyn2_State_0_0;
   double tmp21_ = mLocRegDistxy4_y - mLocPolyn2_State_2_0;
   double tmp22_ = (tmp21_) / mLocPolyn2_State_0_0;
   double tmp23_ = (tmp1_) * (tmp1_);
   double tmp24_ = (tmp10_) * (tmp10_);
   double tmp25_ = (tmp16_) * (tmp16_);
   double tmp26_ = (tmp20_) * (tmp20_);
   double tmp27_ = (tmp1_) * (tmp3_);
   double tmp28_ = (tmp10_) * (tmp13_);
   double tmp29_ = (tmp16_) * (tmp18_);
   double tmp30_ = (tmp20_) * (tmp22_);
   double tmp31_ = (tmp3_) * (tmp3_);
   double tmp32_ = (tmp13_) * (tmp13_);
   double tmp33_ = (tmp18_) * (tmp18_);
   double tmp34_ = (tmp22_) * (tmp22_);
   double tmp35_ = 1 - tmp4_;
   double tmp36_ = tmp11_ * 2;
   double tmp37_ = mCompCoord[8];
   double tmp38_ = -(1);
   double tmp39_ = (tmp1_) * mLocPolyn2_State_0_0;
   double tmp40_ = (tmp10_) * mLocPolyn2_State_0_0;
   double tmp41_ = tmp39_ + tmp40_;
   double tmp42_ = (tmp16_) * mLocPolyn2_State_0_0;
   double tmp43_ = (tmp20_) * mLocPolyn2_State_0_0;
   double tmp44_ = tmp42_ + tmp43_;
   double tmp45_ = (tmp41_) - (tmp44_);
   double tmp46_ = tmp27_ * mLocPolyn2_State_0_0;
   double tmp47_ = tmp28_ * mLocPolyn2_State_0_0;
   double tmp48_ = tmp46_ + tmp47_;
   double tmp49_ = tmp29_ * mLocPolyn2_State_0_0;
   double tmp50_ = tmp30_ * mLocPolyn2_State_0_0;
   double tmp51_ = tmp49_ + tmp50_;
   double tmp52_ = (tmp48_) - (tmp51_);

  mVal[0] = (mLocPolyn2_State_1_0 + (((tmp5_) * (tmp1_) + tmp6_ * (tmp3_)) - tmp8_ * tmp23_ + tmp11_ * tmp27_ + tmp14_ * tmp31_) * mLocPolyn2_State_0_0 + mLocPolyn2_State_1_0 + (((tmp5_) * (tmp10_) + tmp6_ * (tmp13_)) - tmp8_ * tmp24_ + tmp11_ * tmp28_ + tmp14_ * tmp32_) * mLocPolyn2_State_0_0) - (mLocPolyn2_State_1_0 + (((tmp5_) * (tmp16_) + tmp6_ * (tmp18_)) - tmp8_ * tmp25_ + tmp11_ * tmp29_ + tmp14_ * tmp33_) * mLocPolyn2_State_0_0 + mLocPolyn2_State_1_0 + (((tmp5_) * (tmp20_) + tmp6_ * (tmp22_)) - tmp8_ * tmp26_ + tmp11_ * tmp30_ + tmp14_ * tmp34_) * mLocPolyn2_State_0_0);

  mCompDer[0][0] = 0;
  mCompDer[0][1] = 0;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = tmp45_;
  mCompDer[0][4] = ((tmp3_) * mLocPolyn2_State_0_0 + (tmp13_) * mLocPolyn2_State_0_0) - ((tmp18_) * mLocPolyn2_State_0_0 + (tmp22_) * mLocPolyn2_State_0_0);
  mCompDer[0][5] = (-(2 * tmp23_) * mLocPolyn2_State_0_0 + -(2 * tmp24_) * mLocPolyn2_State_0_0) - (-(2 * tmp25_) * mLocPolyn2_State_0_0 + -(2 * tmp26_) * mLocPolyn2_State_0_0);
  mCompDer[0][6] = tmp52_;
  mCompDer[0][7] = (tmp31_ * mLocPolyn2_State_0_0 + tmp32_ * mLocPolyn2_State_0_0) - (tmp33_ * mLocPolyn2_State_0_0 + tmp34_ * mLocPolyn2_State_0_0);
  mCompDer[0][8] = 0;
  mVal[1] = (mLocPolyn2_State_2_0 + (((tmp35_) * (tmp3_) + tmp6_ * (tmp1_) + tmp7_ * tmp27_) - tmp36_ * tmp31_ + tmp37_ * tmp23_) * mLocPolyn2_State_0_0 + mLocPolyn2_State_2_0 + (((tmp35_) * (tmp13_) + tmp6_ * (tmp10_) + tmp7_ * tmp28_) - tmp36_ * tmp32_ + tmp37_ * tmp24_) * mLocPolyn2_State_0_0) - (mLocPolyn2_State_2_0 + (((tmp35_) * (tmp18_) + tmp6_ * (tmp16_) + tmp7_ * tmp29_) - tmp36_ * tmp33_ + tmp37_ * tmp25_) * mLocPolyn2_State_0_0 + mLocPolyn2_State_2_0 + (((tmp35_) * (tmp22_) + tmp6_ * (tmp20_) + tmp7_ * tmp30_) - tmp36_ * tmp34_ + tmp37_ * tmp26_) * mLocPolyn2_State_0_0);

  mCompDer[1][0] = 0;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 0;
  mCompDer[1][3] = (tmp38_ * (tmp3_) * mLocPolyn2_State_0_0 + tmp38_ * (tmp13_) * mLocPolyn2_State_0_0) - (tmp38_ * (tmp18_) * mLocPolyn2_State_0_0 + tmp38_ * (tmp22_) * mLocPolyn2_State_0_0);
  mCompDer[1][4] = tmp45_;
  mCompDer[1][5] = tmp52_;
  mCompDer[1][6] = (-(2 * tmp31_) * mLocPolyn2_State_0_0 + -(2 * tmp32_) * mLocPolyn2_State_0_0) - (-(2 * tmp33_) * mLocPolyn2_State_0_0 + -(2 * tmp34_) * mLocPolyn2_State_0_0);
  mCompDer[1][7] = 0;
  mCompDer[1][8] = (tmp23_ * mLocPolyn2_State_0_0 + tmp24_ * mLocPolyn2_State_0_0) - (tmp25_ * mLocPolyn2_State_0_0 + tmp26_ * mLocPolyn2_State_0_0);
}


void cREgDistDxDy_Polyn2::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cREgDistDxDy_Polyn2 Has no Der Sec");
}

void cREgDistDxDy_Polyn2::SetPolyn2_State_0_0(double aVal){ mLocPolyn2_State_0_0 = aVal;}
void cREgDistDxDy_Polyn2::SetPolyn2_State_1_0(double aVal){ mLocPolyn2_State_1_0 = aVal;}
void cREgDistDxDy_Polyn2::SetPolyn2_State_2_0(double aVal){ mLocPolyn2_State_2_0 = aVal;}
void cREgDistDxDy_Polyn2::SetRegDistxy1_x(double aVal){ mLocRegDistxy1_x = aVal;}
void cREgDistDxDy_Polyn2::SetRegDistxy1_y(double aVal){ mLocRegDistxy1_y = aVal;}
void cREgDistDxDy_Polyn2::SetRegDistxy2_x(double aVal){ mLocRegDistxy2_x = aVal;}
void cREgDistDxDy_Polyn2::SetRegDistxy2_y(double aVal){ mLocRegDistxy2_y = aVal;}
void cREgDistDxDy_Polyn2::SetRegDistxy3_x(double aVal){ mLocRegDistxy3_x = aVal;}
void cREgDistDxDy_Polyn2::SetRegDistxy3_y(double aVal){ mLocRegDistxy3_y = aVal;}
void cREgDistDxDy_Polyn2::SetRegDistxy4_x(double aVal){ mLocRegDistxy4_x = aVal;}
void cREgDistDxDy_Polyn2::SetRegDistxy4_y(double aVal){ mLocRegDistxy4_y = aVal;}



double * cREgDistDxDy_Polyn2::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Polyn2_State_0_0") return & mLocPolyn2_State_0_0;
   if (aName == "Polyn2_State_1_0") return & mLocPolyn2_State_1_0;
   if (aName == "Polyn2_State_2_0") return & mLocPolyn2_State_2_0;
   if (aName == "RegDistxy1_x") return & mLocRegDistxy1_x;
   if (aName == "RegDistxy1_y") return & mLocRegDistxy1_y;
   if (aName == "RegDistxy2_x") return & mLocRegDistxy2_x;
   if (aName == "RegDistxy2_y") return & mLocRegDistxy2_y;
   if (aName == "RegDistxy3_x") return & mLocRegDistxy3_x;
   if (aName == "RegDistxy3_y") return & mLocRegDistxy3_y;
   if (aName == "RegDistxy4_x") return & mLocRegDistxy4_x;
   if (aName == "RegDistxy4_y") return & mLocRegDistxy4_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cREgDistDxDy_Polyn2::mTheAuto("cREgDistDxDy_Polyn2",cREgDistDxDy_Polyn2::Alloc);


cElCompiledFonc *  cREgDistDxDy_Polyn2::Alloc()
{  return new cREgDistDxDy_Polyn2();
}


