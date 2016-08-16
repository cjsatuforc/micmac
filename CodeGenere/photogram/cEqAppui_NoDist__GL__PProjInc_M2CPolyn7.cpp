// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_NoDist__GL__PProjInc_M2CPolyn7.h"


cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::cEqAppui_NoDist__GL__PProjInc_M2CPolyn7():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,69));
   AddIntRef (cIncIntervale("Orient",69,75));
   AddIntRef (cIncIntervale("Tmp_PTer",75,78));
   Close(false);
}



void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::ComputeVal()
{
   double tmp0_ = mCompCoord[69];
   double tmp1_ = mCompCoord[70];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = cos(tmp0_);
   double tmp4_ = tmp3_*tmp2_;
   double tmp5_ = sin(tmp0_);
   double tmp6_ = tmp5_*tmp2_;
   double tmp7_ = sin(tmp1_);
   double tmp8_ = mCompCoord[75];
   double tmp9_ = mCompCoord[76];
   double tmp10_ = mCompCoord[77];
   double tmp11_ = mCompCoord[71];
   double tmp12_ = sin(tmp11_);
   double tmp13_ = -(tmp12_);
   double tmp14_ = -(tmp7_);
   double tmp15_ = cos(tmp11_);
   double tmp16_ = mLocProjI_x*tmp8_;
   double tmp17_ = mLocProjP0_x+tmp16_;
   double tmp18_ = mLocProjJ_x*tmp9_;
   double tmp19_ = tmp17_+tmp18_;
   double tmp20_ = mLocProjK_x/tmp10_;
   double tmp21_ = tmp19_+tmp20_;
   double tmp22_ = mCompCoord[72];
   double tmp23_ = (tmp21_)-tmp22_;
   double tmp24_ = -(tmp5_);
   double tmp25_ = tmp24_*tmp13_;
   double tmp26_ = tmp3_*tmp14_;
   double tmp27_ = tmp26_*tmp15_;
   double tmp28_ = tmp25_+tmp27_;
   double tmp29_ = tmp3_*tmp13_;
   double tmp30_ = tmp5_*tmp14_;
   double tmp31_ = tmp30_*tmp15_;
   double tmp32_ = tmp29_+tmp31_;
   double tmp33_ = tmp2_*tmp15_;
   double tmp34_ = mLocProjI_y*tmp8_;
   double tmp35_ = mLocProjP0_y+tmp34_;
   double tmp36_ = mLocProjJ_y*tmp9_;
   double tmp37_ = tmp35_+tmp36_;
   double tmp38_ = mLocProjK_y/tmp10_;
   double tmp39_ = tmp37_+tmp38_;
   double tmp40_ = mCompCoord[73];
   double tmp41_ = (tmp39_)-tmp40_;
   double tmp42_ = mLocProjI_z*tmp8_;
   double tmp43_ = mLocProjP0_z+tmp42_;
   double tmp44_ = mLocProjJ_z*tmp9_;
   double tmp45_ = tmp43_+tmp44_;
   double tmp46_ = mLocProjK_z/tmp10_;
   double tmp47_ = tmp45_+tmp46_;
   double tmp48_ = mCompCoord[74];
   double tmp49_ = (tmp47_)-tmp48_;
   double tmp50_ = tmp24_*tmp15_;
   double tmp51_ = tmp26_*tmp12_;
   double tmp52_ = tmp50_+tmp51_;
   double tmp53_ = tmp3_*tmp15_;
   double tmp54_ = tmp30_*tmp12_;
   double tmp55_ = tmp53_+tmp54_;
   double tmp56_ = tmp2_*tmp12_;
   double tmp57_ = (tmp28_)*mLocGL_0_0;
   double tmp58_ = (tmp32_)*mLocGL_1_0;
   double tmp59_ = tmp57_+tmp58_;
   double tmp60_ = tmp33_*mLocGL_2_0;
   double tmp61_ = tmp59_+tmp60_;
   double tmp62_ = (tmp61_)*(tmp23_);
   double tmp63_ = (tmp28_)*mLocGL_0_1;
   double tmp64_ = (tmp32_)*mLocGL_1_1;
   double tmp65_ = tmp63_+tmp64_;
   double tmp66_ = tmp33_*mLocGL_2_1;
   double tmp67_ = tmp65_+tmp66_;
   double tmp68_ = (tmp67_)*(tmp41_);
   double tmp69_ = tmp62_+tmp68_;
   double tmp70_ = (tmp28_)*mLocGL_0_2;
   double tmp71_ = (tmp32_)*mLocGL_1_2;
   double tmp72_ = tmp70_+tmp71_;
   double tmp73_ = tmp33_*mLocGL_2_2;
   double tmp74_ = tmp72_+tmp73_;
   double tmp75_ = (tmp74_)*(tmp49_);
   double tmp76_ = tmp69_+tmp75_;
   double tmp77_ = tmp4_*mLocGL_0_0;
   double tmp78_ = tmp6_*mLocGL_1_0;
   double tmp79_ = tmp77_+tmp78_;
   double tmp80_ = tmp7_*mLocGL_2_0;
   double tmp81_ = tmp79_+tmp80_;
   double tmp82_ = (tmp81_)*(tmp23_);
   double tmp83_ = tmp4_*mLocGL_0_1;
   double tmp84_ = tmp6_*mLocGL_1_1;
   double tmp85_ = tmp83_+tmp84_;
   double tmp86_ = tmp7_*mLocGL_2_1;
   double tmp87_ = tmp85_+tmp86_;
   double tmp88_ = (tmp87_)*(tmp41_);
   double tmp89_ = tmp82_+tmp88_;
   double tmp90_ = tmp4_*mLocGL_0_2;
   double tmp91_ = tmp6_*mLocGL_1_2;
   double tmp92_ = tmp90_+tmp91_;
   double tmp93_ = tmp7_*mLocGL_2_2;
   double tmp94_ = tmp92_+tmp93_;
   double tmp95_ = (tmp94_)*(tmp49_);
   double tmp96_ = tmp89_+tmp95_;
   double tmp97_ = (tmp96_)/(tmp76_);
   double tmp98_ = (tmp52_)*mLocGL_0_0;
   double tmp99_ = (tmp55_)*mLocGL_1_0;
   double tmp100_ = tmp98_+tmp99_;
   double tmp101_ = tmp56_*mLocGL_2_0;
   double tmp102_ = tmp100_+tmp101_;
   double tmp103_ = (tmp102_)*(tmp23_);
   double tmp104_ = (tmp52_)*mLocGL_0_1;
   double tmp105_ = (tmp55_)*mLocGL_1_1;
   double tmp106_ = tmp104_+tmp105_;
   double tmp107_ = tmp56_*mLocGL_2_1;
   double tmp108_ = tmp106_+tmp107_;
   double tmp109_ = (tmp108_)*(tmp41_);
   double tmp110_ = tmp103_+tmp109_;
   double tmp111_ = (tmp52_)*mLocGL_0_2;
   double tmp112_ = (tmp55_)*mLocGL_1_2;
   double tmp113_ = tmp111_+tmp112_;
   double tmp114_ = tmp56_*mLocGL_2_2;
   double tmp115_ = tmp113_+tmp114_;
   double tmp116_ = (tmp115_)*(tmp49_);
   double tmp117_ = tmp110_+tmp116_;
   double tmp118_ = (tmp117_)/(tmp76_);

  mVal[0] = (mLocNDP0_x+mLocNDdx_x*(tmp97_)+mLocNDdy_x*(tmp118_))-mLocXIm;

  mVal[1] = (mLocNDP0_y+mLocNDdx_y*(tmp97_)+mLocNDdy_y*(tmp118_))-mLocYIm;

}


void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[69];
   double tmp1_ = mCompCoord[70];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = cos(tmp0_);
   double tmp4_ = tmp3_*tmp2_;
   double tmp5_ = sin(tmp0_);
   double tmp6_ = tmp5_*tmp2_;
   double tmp7_ = sin(tmp1_);
   double tmp8_ = mCompCoord[75];
   double tmp9_ = mCompCoord[76];
   double tmp10_ = mCompCoord[77];
   double tmp11_ = mCompCoord[71];
   double tmp12_ = sin(tmp11_);
   double tmp13_ = -(tmp12_);
   double tmp14_ = -(tmp7_);
   double tmp15_ = cos(tmp11_);
   double tmp16_ = mLocProjI_x*tmp8_;
   double tmp17_ = mLocProjP0_x+tmp16_;
   double tmp18_ = mLocProjJ_x*tmp9_;
   double tmp19_ = tmp17_+tmp18_;
   double tmp20_ = mLocProjK_x/tmp10_;
   double tmp21_ = tmp19_+tmp20_;
   double tmp22_ = mCompCoord[72];
   double tmp23_ = (tmp21_)-tmp22_;
   double tmp24_ = -(tmp5_);
   double tmp25_ = tmp24_*tmp13_;
   double tmp26_ = tmp3_*tmp14_;
   double tmp27_ = tmp26_*tmp15_;
   double tmp28_ = tmp25_+tmp27_;
   double tmp29_ = tmp3_*tmp13_;
   double tmp30_ = tmp5_*tmp14_;
   double tmp31_ = tmp30_*tmp15_;
   double tmp32_ = tmp29_+tmp31_;
   double tmp33_ = tmp2_*tmp15_;
   double tmp34_ = mLocProjI_y*tmp8_;
   double tmp35_ = mLocProjP0_y+tmp34_;
   double tmp36_ = mLocProjJ_y*tmp9_;
   double tmp37_ = tmp35_+tmp36_;
   double tmp38_ = mLocProjK_y/tmp10_;
   double tmp39_ = tmp37_+tmp38_;
   double tmp40_ = mCompCoord[73];
   double tmp41_ = (tmp39_)-tmp40_;
   double tmp42_ = mLocProjI_z*tmp8_;
   double tmp43_ = mLocProjP0_z+tmp42_;
   double tmp44_ = mLocProjJ_z*tmp9_;
   double tmp45_ = tmp43_+tmp44_;
   double tmp46_ = mLocProjK_z/tmp10_;
   double tmp47_ = tmp45_+tmp46_;
   double tmp48_ = mCompCoord[74];
   double tmp49_ = (tmp47_)-tmp48_;
   double tmp50_ = tmp24_*tmp15_;
   double tmp51_ = tmp26_*tmp12_;
   double tmp52_ = tmp50_+tmp51_;
   double tmp53_ = tmp3_*tmp15_;
   double tmp54_ = tmp30_*tmp12_;
   double tmp55_ = tmp53_+tmp54_;
   double tmp56_ = tmp2_*tmp12_;
   double tmp57_ = (tmp28_)*mLocGL_0_0;
   double tmp58_ = (tmp32_)*mLocGL_1_0;
   double tmp59_ = tmp57_+tmp58_;
   double tmp60_ = tmp33_*mLocGL_2_0;
   double tmp61_ = tmp59_+tmp60_;
   double tmp62_ = (tmp61_)*(tmp23_);
   double tmp63_ = (tmp28_)*mLocGL_0_1;
   double tmp64_ = (tmp32_)*mLocGL_1_1;
   double tmp65_ = tmp63_+tmp64_;
   double tmp66_ = tmp33_*mLocGL_2_1;
   double tmp67_ = tmp65_+tmp66_;
   double tmp68_ = (tmp67_)*(tmp41_);
   double tmp69_ = tmp62_+tmp68_;
   double tmp70_ = (tmp28_)*mLocGL_0_2;
   double tmp71_ = (tmp32_)*mLocGL_1_2;
   double tmp72_ = tmp70_+tmp71_;
   double tmp73_ = tmp33_*mLocGL_2_2;
   double tmp74_ = tmp72_+tmp73_;
   double tmp75_ = (tmp74_)*(tmp49_);
   double tmp76_ = tmp69_+tmp75_;
   double tmp77_ = -(1);
   double tmp78_ = tmp77_*tmp5_;
   double tmp79_ = tmp78_*tmp2_;
   double tmp80_ = tmp4_*mLocGL_0_0;
   double tmp81_ = tmp6_*mLocGL_1_0;
   double tmp82_ = tmp80_+tmp81_;
   double tmp83_ = tmp7_*mLocGL_2_0;
   double tmp84_ = tmp82_+tmp83_;
   double tmp85_ = (tmp84_)*(tmp23_);
   double tmp86_ = tmp4_*mLocGL_0_1;
   double tmp87_ = tmp6_*mLocGL_1_1;
   double tmp88_ = tmp86_+tmp87_;
   double tmp89_ = tmp7_*mLocGL_2_1;
   double tmp90_ = tmp88_+tmp89_;
   double tmp91_ = (tmp90_)*(tmp41_);
   double tmp92_ = tmp85_+tmp91_;
   double tmp93_ = tmp4_*mLocGL_0_2;
   double tmp94_ = tmp6_*mLocGL_1_2;
   double tmp95_ = tmp93_+tmp94_;
   double tmp96_ = tmp7_*mLocGL_2_2;
   double tmp97_ = tmp95_+tmp96_;
   double tmp98_ = (tmp97_)*(tmp49_);
   double tmp99_ = tmp92_+tmp98_;
   double tmp100_ = -(tmp3_);
   double tmp101_ = tmp100_*tmp13_;
   double tmp102_ = tmp78_*tmp14_;
   double tmp103_ = tmp102_*tmp15_;
   double tmp104_ = tmp101_+tmp103_;
   double tmp105_ = tmp78_*tmp13_;
   double tmp106_ = tmp105_+tmp27_;
   double tmp107_ = tmp100_*tmp15_;
   double tmp108_ = tmp102_*tmp12_;
   double tmp109_ = tmp107_+tmp108_;
   double tmp110_ = tmp78_*tmp15_;
   double tmp111_ = tmp110_+tmp51_;
   double tmp112_ = (tmp52_)*mLocGL_0_0;
   double tmp113_ = (tmp55_)*mLocGL_1_0;
   double tmp114_ = tmp112_+tmp113_;
   double tmp115_ = tmp56_*mLocGL_2_0;
   double tmp116_ = tmp114_+tmp115_;
   double tmp117_ = (tmp116_)*(tmp23_);
   double tmp118_ = (tmp52_)*mLocGL_0_1;
   double tmp119_ = (tmp55_)*mLocGL_1_1;
   double tmp120_ = tmp118_+tmp119_;
   double tmp121_ = tmp56_*mLocGL_2_1;
   double tmp122_ = tmp120_+tmp121_;
   double tmp123_ = (tmp122_)*(tmp41_);
   double tmp124_ = tmp117_+tmp123_;
   double tmp125_ = (tmp52_)*mLocGL_0_2;
   double tmp126_ = (tmp55_)*mLocGL_1_2;
   double tmp127_ = tmp125_+tmp126_;
   double tmp128_ = tmp56_*mLocGL_2_2;
   double tmp129_ = tmp127_+tmp128_;
   double tmp130_ = (tmp129_)*(tmp49_);
   double tmp131_ = tmp124_+tmp130_;
   double tmp132_ = (tmp104_)*mLocGL_0_0;
   double tmp133_ = (tmp106_)*mLocGL_1_0;
   double tmp134_ = tmp132_+tmp133_;
   double tmp135_ = (tmp134_)*(tmp23_);
   double tmp136_ = (tmp104_)*mLocGL_0_1;
   double tmp137_ = (tmp106_)*mLocGL_1_1;
   double tmp138_ = tmp136_+tmp137_;
   double tmp139_ = (tmp138_)*(tmp41_);
   double tmp140_ = tmp135_+tmp139_;
   double tmp141_ = (tmp104_)*mLocGL_0_2;
   double tmp142_ = (tmp106_)*mLocGL_1_2;
   double tmp143_ = tmp141_+tmp142_;
   double tmp144_ = (tmp143_)*(tmp49_);
   double tmp145_ = tmp140_+tmp144_;
   double tmp146_ = ElSquare(tmp76_);
   double tmp147_ = tmp77_*tmp7_;
   double tmp148_ = tmp147_*tmp3_;
   double tmp149_ = tmp147_*tmp5_;
   double tmp150_ = -(tmp2_);
   double tmp151_ = tmp150_*tmp3_;
   double tmp152_ = tmp151_*tmp15_;
   double tmp153_ = tmp150_*tmp5_;
   double tmp154_ = tmp153_*tmp15_;
   double tmp155_ = tmp147_*tmp15_;
   double tmp156_ = tmp151_*tmp12_;
   double tmp157_ = tmp153_*tmp12_;
   double tmp158_ = tmp147_*tmp12_;
   double tmp159_ = tmp152_*mLocGL_0_0;
   double tmp160_ = tmp154_*mLocGL_1_0;
   double tmp161_ = tmp159_+tmp160_;
   double tmp162_ = tmp155_*mLocGL_2_0;
   double tmp163_ = tmp161_+tmp162_;
   double tmp164_ = (tmp163_)*(tmp23_);
   double tmp165_ = tmp152_*mLocGL_0_1;
   double tmp166_ = tmp154_*mLocGL_1_1;
   double tmp167_ = tmp165_+tmp166_;
   double tmp168_ = tmp155_*mLocGL_2_1;
   double tmp169_ = tmp167_+tmp168_;
   double tmp170_ = (tmp169_)*(tmp41_);
   double tmp171_ = tmp164_+tmp170_;
   double tmp172_ = tmp152_*mLocGL_0_2;
   double tmp173_ = tmp154_*mLocGL_1_2;
   double tmp174_ = tmp172_+tmp173_;
   double tmp175_ = tmp155_*mLocGL_2_2;
   double tmp176_ = tmp174_+tmp175_;
   double tmp177_ = (tmp176_)*(tmp49_);
   double tmp178_ = tmp171_+tmp177_;
   double tmp179_ = -(tmp15_);
   double tmp180_ = tmp77_*tmp12_;
   double tmp181_ = tmp179_*tmp24_;
   double tmp182_ = tmp180_*tmp26_;
   double tmp183_ = tmp181_+tmp182_;
   double tmp184_ = tmp179_*tmp3_;
   double tmp185_ = tmp180_*tmp30_;
   double tmp186_ = tmp184_+tmp185_;
   double tmp187_ = tmp180_*tmp2_;
   double tmp188_ = tmp180_*tmp24_;
   double tmp189_ = tmp15_*tmp26_;
   double tmp190_ = tmp188_+tmp189_;
   double tmp191_ = tmp180_*tmp3_;
   double tmp192_ = tmp15_*tmp30_;
   double tmp193_ = tmp191_+tmp192_;
   double tmp194_ = tmp15_*tmp2_;
   double tmp195_ = (tmp183_)*mLocGL_0_0;
   double tmp196_ = (tmp186_)*mLocGL_1_0;
   double tmp197_ = tmp195_+tmp196_;
   double tmp198_ = tmp187_*mLocGL_2_0;
   double tmp199_ = tmp197_+tmp198_;
   double tmp200_ = (tmp199_)*(tmp23_);
   double tmp201_ = (tmp183_)*mLocGL_0_1;
   double tmp202_ = (tmp186_)*mLocGL_1_1;
   double tmp203_ = tmp201_+tmp202_;
   double tmp204_ = tmp187_*mLocGL_2_1;
   double tmp205_ = tmp203_+tmp204_;
   double tmp206_ = (tmp205_)*(tmp41_);
   double tmp207_ = tmp200_+tmp206_;
   double tmp208_ = (tmp183_)*mLocGL_0_2;
   double tmp209_ = (tmp186_)*mLocGL_1_2;
   double tmp210_ = tmp208_+tmp209_;
   double tmp211_ = tmp187_*mLocGL_2_2;
   double tmp212_ = tmp210_+tmp211_;
   double tmp213_ = (tmp212_)*(tmp49_);
   double tmp214_ = tmp207_+tmp213_;
   double tmp215_ = tmp77_*(tmp61_);
   double tmp216_ = tmp77_*(tmp67_);
   double tmp217_ = tmp77_*(tmp74_);
   double tmp218_ = mLocProjI_x*(tmp61_);
   double tmp219_ = mLocProjI_y*(tmp67_);
   double tmp220_ = tmp218_+tmp219_;
   double tmp221_ = mLocProjI_z*(tmp74_);
   double tmp222_ = tmp220_+tmp221_;
   double tmp223_ = mLocProjJ_x*(tmp61_);
   double tmp224_ = mLocProjJ_y*(tmp67_);
   double tmp225_ = tmp223_+tmp224_;
   double tmp226_ = mLocProjJ_z*(tmp74_);
   double tmp227_ = tmp225_+tmp226_;
   double tmp228_ = ElSquare(tmp10_);
   double tmp229_ = -(mLocProjK_x);
   double tmp230_ = tmp229_/tmp228_;
   double tmp231_ = -(mLocProjK_y);
   double tmp232_ = tmp231_/tmp228_;
   double tmp233_ = -(mLocProjK_z);
   double tmp234_ = tmp233_/tmp228_;
   double tmp235_ = (tmp230_)*(tmp61_);
   double tmp236_ = (tmp232_)*(tmp67_);
   double tmp237_ = tmp235_+tmp236_;
   double tmp238_ = (tmp234_)*(tmp74_);
   double tmp239_ = tmp237_+tmp238_;
   double tmp240_ = (tmp99_)/(tmp76_);
   double tmp241_ = (tmp131_)/(tmp76_);
   double tmp242_ = tmp79_*mLocGL_0_0;
   double tmp243_ = tmp4_*mLocGL_1_0;
   double tmp244_ = tmp242_+tmp243_;
   double tmp245_ = (tmp244_)*(tmp23_);
   double tmp246_ = tmp79_*mLocGL_0_1;
   double tmp247_ = tmp4_*mLocGL_1_1;
   double tmp248_ = tmp246_+tmp247_;
   double tmp249_ = (tmp248_)*(tmp41_);
   double tmp250_ = tmp245_+tmp249_;
   double tmp251_ = tmp79_*mLocGL_0_2;
   double tmp252_ = tmp4_*mLocGL_1_2;
   double tmp253_ = tmp251_+tmp252_;
   double tmp254_ = (tmp253_)*(tmp49_);
   double tmp255_ = tmp250_+tmp254_;
   double tmp256_ = (tmp255_)*(tmp76_);
   double tmp257_ = (tmp99_)*(tmp145_);
   double tmp258_ = tmp256_-tmp257_;
   double tmp259_ = (tmp258_)/tmp146_;
   double tmp260_ = (tmp109_)*mLocGL_0_0;
   double tmp261_ = (tmp111_)*mLocGL_1_0;
   double tmp262_ = tmp260_+tmp261_;
   double tmp263_ = (tmp262_)*(tmp23_);
   double tmp264_ = (tmp109_)*mLocGL_0_1;
   double tmp265_ = (tmp111_)*mLocGL_1_1;
   double tmp266_ = tmp264_+tmp265_;
   double tmp267_ = (tmp266_)*(tmp41_);
   double tmp268_ = tmp263_+tmp267_;
   double tmp269_ = (tmp109_)*mLocGL_0_2;
   double tmp270_ = (tmp111_)*mLocGL_1_2;
   double tmp271_ = tmp269_+tmp270_;
   double tmp272_ = (tmp271_)*(tmp49_);
   double tmp273_ = tmp268_+tmp272_;
   double tmp274_ = (tmp273_)*(tmp76_);
   double tmp275_ = (tmp131_)*(tmp145_);
   double tmp276_ = tmp274_-tmp275_;
   double tmp277_ = (tmp276_)/tmp146_;
   double tmp278_ = tmp148_*mLocGL_0_0;
   double tmp279_ = tmp149_*mLocGL_1_0;
   double tmp280_ = tmp278_+tmp279_;
   double tmp281_ = tmp2_*mLocGL_2_0;
   double tmp282_ = tmp280_+tmp281_;
   double tmp283_ = (tmp282_)*(tmp23_);
   double tmp284_ = tmp148_*mLocGL_0_1;
   double tmp285_ = tmp149_*mLocGL_1_1;
   double tmp286_ = tmp284_+tmp285_;
   double tmp287_ = tmp2_*mLocGL_2_1;
   double tmp288_ = tmp286_+tmp287_;
   double tmp289_ = (tmp288_)*(tmp41_);
   double tmp290_ = tmp283_+tmp289_;
   double tmp291_ = tmp148_*mLocGL_0_2;
   double tmp292_ = tmp149_*mLocGL_1_2;
   double tmp293_ = tmp291_+tmp292_;
   double tmp294_ = tmp2_*mLocGL_2_2;
   double tmp295_ = tmp293_+tmp294_;
   double tmp296_ = (tmp295_)*(tmp49_);
   double tmp297_ = tmp290_+tmp296_;
   double tmp298_ = (tmp297_)*(tmp76_);
   double tmp299_ = (tmp99_)*(tmp178_);
   double tmp300_ = tmp298_-tmp299_;
   double tmp301_ = (tmp300_)/tmp146_;
   double tmp302_ = tmp156_*mLocGL_0_0;
   double tmp303_ = tmp157_*mLocGL_1_0;
   double tmp304_ = tmp302_+tmp303_;
   double tmp305_ = tmp158_*mLocGL_2_0;
   double tmp306_ = tmp304_+tmp305_;
   double tmp307_ = (tmp306_)*(tmp23_);
   double tmp308_ = tmp156_*mLocGL_0_1;
   double tmp309_ = tmp157_*mLocGL_1_1;
   double tmp310_ = tmp308_+tmp309_;
   double tmp311_ = tmp158_*mLocGL_2_1;
   double tmp312_ = tmp310_+tmp311_;
   double tmp313_ = (tmp312_)*(tmp41_);
   double tmp314_ = tmp307_+tmp313_;
   double tmp315_ = tmp156_*mLocGL_0_2;
   double tmp316_ = tmp157_*mLocGL_1_2;
   double tmp317_ = tmp315_+tmp316_;
   double tmp318_ = tmp158_*mLocGL_2_2;
   double tmp319_ = tmp317_+tmp318_;
   double tmp320_ = (tmp319_)*(tmp49_);
   double tmp321_ = tmp314_+tmp320_;
   double tmp322_ = (tmp321_)*(tmp76_);
   double tmp323_ = (tmp131_)*(tmp178_);
   double tmp324_ = tmp322_-tmp323_;
   double tmp325_ = (tmp324_)/tmp146_;
   double tmp326_ = (tmp99_)*(tmp214_);
   double tmp327_ = -(tmp326_);
   double tmp328_ = tmp327_/tmp146_;
   double tmp329_ = (tmp190_)*mLocGL_0_0;
   double tmp330_ = (tmp193_)*mLocGL_1_0;
   double tmp331_ = tmp329_+tmp330_;
   double tmp332_ = tmp194_*mLocGL_2_0;
   double tmp333_ = tmp331_+tmp332_;
   double tmp334_ = (tmp333_)*(tmp23_);
   double tmp335_ = (tmp190_)*mLocGL_0_1;
   double tmp336_ = (tmp193_)*mLocGL_1_1;
   double tmp337_ = tmp335_+tmp336_;
   double tmp338_ = tmp194_*mLocGL_2_1;
   double tmp339_ = tmp337_+tmp338_;
   double tmp340_ = (tmp339_)*(tmp41_);
   double tmp341_ = tmp334_+tmp340_;
   double tmp342_ = (tmp190_)*mLocGL_0_2;
   double tmp343_ = (tmp193_)*mLocGL_1_2;
   double tmp344_ = tmp342_+tmp343_;
   double tmp345_ = tmp194_*mLocGL_2_2;
   double tmp346_ = tmp344_+tmp345_;
   double tmp347_ = (tmp346_)*(tmp49_);
   double tmp348_ = tmp341_+tmp347_;
   double tmp349_ = (tmp348_)*(tmp76_);
   double tmp350_ = (tmp131_)*(tmp214_);
   double tmp351_ = tmp349_-tmp350_;
   double tmp352_ = (tmp351_)/tmp146_;
   double tmp353_ = tmp77_*(tmp84_);
   double tmp354_ = tmp353_*(tmp76_);
   double tmp355_ = (tmp99_)*tmp215_;
   double tmp356_ = tmp354_-tmp355_;
   double tmp357_ = (tmp356_)/tmp146_;
   double tmp358_ = tmp77_*(tmp116_);
   double tmp359_ = tmp358_*(tmp76_);
   double tmp360_ = (tmp131_)*tmp215_;
   double tmp361_ = tmp359_-tmp360_;
   double tmp362_ = (tmp361_)/tmp146_;
   double tmp363_ = tmp77_*(tmp90_);
   double tmp364_ = tmp363_*(tmp76_);
   double tmp365_ = (tmp99_)*tmp216_;
   double tmp366_ = tmp364_-tmp365_;
   double tmp367_ = (tmp366_)/tmp146_;
   double tmp368_ = tmp77_*(tmp122_);
   double tmp369_ = tmp368_*(tmp76_);
   double tmp370_ = (tmp131_)*tmp216_;
   double tmp371_ = tmp369_-tmp370_;
   double tmp372_ = (tmp371_)/tmp146_;
   double tmp373_ = tmp77_*(tmp97_);
   double tmp374_ = tmp373_*(tmp76_);
   double tmp375_ = (tmp99_)*tmp217_;
   double tmp376_ = tmp374_-tmp375_;
   double tmp377_ = (tmp376_)/tmp146_;
   double tmp378_ = tmp77_*(tmp129_);
   double tmp379_ = tmp378_*(tmp76_);
   double tmp380_ = (tmp131_)*tmp217_;
   double tmp381_ = tmp379_-tmp380_;
   double tmp382_ = (tmp381_)/tmp146_;
   double tmp383_ = mLocProjI_x*(tmp84_);
   double tmp384_ = mLocProjI_y*(tmp90_);
   double tmp385_ = tmp383_+tmp384_;
   double tmp386_ = mLocProjI_z*(tmp97_);
   double tmp387_ = tmp385_+tmp386_;
   double tmp388_ = (tmp387_)*(tmp76_);
   double tmp389_ = (tmp99_)*(tmp222_);
   double tmp390_ = tmp388_-tmp389_;
   double tmp391_ = (tmp390_)/tmp146_;
   double tmp392_ = mLocProjI_x*(tmp116_);
   double tmp393_ = mLocProjI_y*(tmp122_);
   double tmp394_ = tmp392_+tmp393_;
   double tmp395_ = mLocProjI_z*(tmp129_);
   double tmp396_ = tmp394_+tmp395_;
   double tmp397_ = (tmp396_)*(tmp76_);
   double tmp398_ = (tmp131_)*(tmp222_);
   double tmp399_ = tmp397_-tmp398_;
   double tmp400_ = (tmp399_)/tmp146_;
   double tmp401_ = mLocProjJ_x*(tmp84_);
   double tmp402_ = mLocProjJ_y*(tmp90_);
   double tmp403_ = tmp401_+tmp402_;
   double tmp404_ = mLocProjJ_z*(tmp97_);
   double tmp405_ = tmp403_+tmp404_;
   double tmp406_ = (tmp405_)*(tmp76_);
   double tmp407_ = (tmp99_)*(tmp227_);
   double tmp408_ = tmp406_-tmp407_;
   double tmp409_ = (tmp408_)/tmp146_;
   double tmp410_ = mLocProjJ_x*(tmp116_);
   double tmp411_ = mLocProjJ_y*(tmp122_);
   double tmp412_ = tmp410_+tmp411_;
   double tmp413_ = mLocProjJ_z*(tmp129_);
   double tmp414_ = tmp412_+tmp413_;
   double tmp415_ = (tmp414_)*(tmp76_);
   double tmp416_ = (tmp131_)*(tmp227_);
   double tmp417_ = tmp415_-tmp416_;
   double tmp418_ = (tmp417_)/tmp146_;
   double tmp419_ = (tmp230_)*(tmp84_);
   double tmp420_ = (tmp232_)*(tmp90_);
   double tmp421_ = tmp419_+tmp420_;
   double tmp422_ = (tmp234_)*(tmp97_);
   double tmp423_ = tmp421_+tmp422_;
   double tmp424_ = (tmp423_)*(tmp76_);
   double tmp425_ = (tmp99_)*(tmp239_);
   double tmp426_ = tmp424_-tmp425_;
   double tmp427_ = (tmp426_)/tmp146_;
   double tmp428_ = (tmp230_)*(tmp116_);
   double tmp429_ = (tmp232_)*(tmp122_);
   double tmp430_ = tmp428_+tmp429_;
   double tmp431_ = (tmp234_)*(tmp129_);
   double tmp432_ = tmp430_+tmp431_;
   double tmp433_ = (tmp432_)*(tmp76_);
   double tmp434_ = (tmp131_)*(tmp239_);
   double tmp435_ = tmp433_-tmp434_;
   double tmp436_ = (tmp435_)/tmp146_;

  mVal[0] = (mLocNDP0_x+mLocNDdx_x*(tmp240_)+mLocNDdy_x*(tmp241_))-mLocXIm;

  mCompDer[0][0] = 0;
  mCompDer[0][1] = 0;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = 0;
  mCompDer[0][4] = 0;
  mCompDer[0][5] = 0;
  mCompDer[0][6] = 0;
  mCompDer[0][7] = 0;
  mCompDer[0][8] = 0;
  mCompDer[0][9] = 0;
  mCompDer[0][10] = 0;
  mCompDer[0][11] = 0;
  mCompDer[0][12] = 0;
  mCompDer[0][13] = 0;
  mCompDer[0][14] = 0;
  mCompDer[0][15] = 0;
  mCompDer[0][16] = 0;
  mCompDer[0][17] = 0;
  mCompDer[0][18] = 0;
  mCompDer[0][19] = 0;
  mCompDer[0][20] = 0;
  mCompDer[0][21] = 0;
  mCompDer[0][22] = 0;
  mCompDer[0][23] = 0;
  mCompDer[0][24] = 0;
  mCompDer[0][25] = 0;
  mCompDer[0][26] = 0;
  mCompDer[0][27] = 0;
  mCompDer[0][28] = 0;
  mCompDer[0][29] = 0;
  mCompDer[0][30] = 0;
  mCompDer[0][31] = 0;
  mCompDer[0][32] = 0;
  mCompDer[0][33] = 0;
  mCompDer[0][34] = 0;
  mCompDer[0][35] = 0;
  mCompDer[0][36] = 0;
  mCompDer[0][37] = 0;
  mCompDer[0][38] = 0;
  mCompDer[0][39] = 0;
  mCompDer[0][40] = 0;
  mCompDer[0][41] = 0;
  mCompDer[0][42] = 0;
  mCompDer[0][43] = 0;
  mCompDer[0][44] = 0;
  mCompDer[0][45] = 0;
  mCompDer[0][46] = 0;
  mCompDer[0][47] = 0;
  mCompDer[0][48] = 0;
  mCompDer[0][49] = 0;
  mCompDer[0][50] = 0;
  mCompDer[0][51] = 0;
  mCompDer[0][52] = 0;
  mCompDer[0][53] = 0;
  mCompDer[0][54] = 0;
  mCompDer[0][55] = 0;
  mCompDer[0][56] = 0;
  mCompDer[0][57] = 0;
  mCompDer[0][58] = 0;
  mCompDer[0][59] = 0;
  mCompDer[0][60] = 0;
  mCompDer[0][61] = 0;
  mCompDer[0][62] = 0;
  mCompDer[0][63] = 0;
  mCompDer[0][64] = 0;
  mCompDer[0][65] = 0;
  mCompDer[0][66] = 0;
  mCompDer[0][67] = 0;
  mCompDer[0][68] = 0;
  mCompDer[0][69] = (tmp259_)*mLocNDdx_x+(tmp277_)*mLocNDdy_x;
  mCompDer[0][70] = (tmp301_)*mLocNDdx_x+(tmp325_)*mLocNDdy_x;
  mCompDer[0][71] = (tmp328_)*mLocNDdx_x+(tmp352_)*mLocNDdy_x;
  mCompDer[0][72] = (tmp357_)*mLocNDdx_x+(tmp362_)*mLocNDdy_x;
  mCompDer[0][73] = (tmp367_)*mLocNDdx_x+(tmp372_)*mLocNDdy_x;
  mCompDer[0][74] = (tmp377_)*mLocNDdx_x+(tmp382_)*mLocNDdy_x;
  mCompDer[0][75] = (tmp391_)*mLocNDdx_x+(tmp400_)*mLocNDdy_x;
  mCompDer[0][76] = (tmp409_)*mLocNDdx_x+(tmp418_)*mLocNDdy_x;
  mCompDer[0][77] = (tmp427_)*mLocNDdx_x+(tmp436_)*mLocNDdy_x;
  mVal[1] = (mLocNDP0_y+mLocNDdx_y*(tmp240_)+mLocNDdy_y*(tmp241_))-mLocYIm;

  mCompDer[1][0] = 0;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 0;
  mCompDer[1][3] = 0;
  mCompDer[1][4] = 0;
  mCompDer[1][5] = 0;
  mCompDer[1][6] = 0;
  mCompDer[1][7] = 0;
  mCompDer[1][8] = 0;
  mCompDer[1][9] = 0;
  mCompDer[1][10] = 0;
  mCompDer[1][11] = 0;
  mCompDer[1][12] = 0;
  mCompDer[1][13] = 0;
  mCompDer[1][14] = 0;
  mCompDer[1][15] = 0;
  mCompDer[1][16] = 0;
  mCompDer[1][17] = 0;
  mCompDer[1][18] = 0;
  mCompDer[1][19] = 0;
  mCompDer[1][20] = 0;
  mCompDer[1][21] = 0;
  mCompDer[1][22] = 0;
  mCompDer[1][23] = 0;
  mCompDer[1][24] = 0;
  mCompDer[1][25] = 0;
  mCompDer[1][26] = 0;
  mCompDer[1][27] = 0;
  mCompDer[1][28] = 0;
  mCompDer[1][29] = 0;
  mCompDer[1][30] = 0;
  mCompDer[1][31] = 0;
  mCompDer[1][32] = 0;
  mCompDer[1][33] = 0;
  mCompDer[1][34] = 0;
  mCompDer[1][35] = 0;
  mCompDer[1][36] = 0;
  mCompDer[1][37] = 0;
  mCompDer[1][38] = 0;
  mCompDer[1][39] = 0;
  mCompDer[1][40] = 0;
  mCompDer[1][41] = 0;
  mCompDer[1][42] = 0;
  mCompDer[1][43] = 0;
  mCompDer[1][44] = 0;
  mCompDer[1][45] = 0;
  mCompDer[1][46] = 0;
  mCompDer[1][47] = 0;
  mCompDer[1][48] = 0;
  mCompDer[1][49] = 0;
  mCompDer[1][50] = 0;
  mCompDer[1][51] = 0;
  mCompDer[1][52] = 0;
  mCompDer[1][53] = 0;
  mCompDer[1][54] = 0;
  mCompDer[1][55] = 0;
  mCompDer[1][56] = 0;
  mCompDer[1][57] = 0;
  mCompDer[1][58] = 0;
  mCompDer[1][59] = 0;
  mCompDer[1][60] = 0;
  mCompDer[1][61] = 0;
  mCompDer[1][62] = 0;
  mCompDer[1][63] = 0;
  mCompDer[1][64] = 0;
  mCompDer[1][65] = 0;
  mCompDer[1][66] = 0;
  mCompDer[1][67] = 0;
  mCompDer[1][68] = 0;
  mCompDer[1][69] = (tmp259_)*mLocNDdx_y+(tmp277_)*mLocNDdy_y;
  mCompDer[1][70] = (tmp301_)*mLocNDdx_y+(tmp325_)*mLocNDdy_y;
  mCompDer[1][71] = (tmp328_)*mLocNDdx_y+(tmp352_)*mLocNDdy_y;
  mCompDer[1][72] = (tmp357_)*mLocNDdx_y+(tmp362_)*mLocNDdy_y;
  mCompDer[1][73] = (tmp367_)*mLocNDdx_y+(tmp372_)*mLocNDdy_y;
  mCompDer[1][74] = (tmp377_)*mLocNDdx_y+(tmp382_)*mLocNDdy_y;
  mCompDer[1][75] = (tmp391_)*mLocNDdx_y+(tmp400_)*mLocNDdy_y;
  mCompDer[1][76] = (tmp409_)*mLocNDdx_y+(tmp418_)*mLocNDdy_y;
  mCompDer[1][77] = (tmp427_)*mLocNDdx_y+(tmp436_)*mLocNDdy_y;
}


void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_NoDist__GL__PProjInc_M2CPolyn7 Has no Der Sec");
}

void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetGL_0_0(double aVal){ mLocGL_0_0 = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetGL_0_1(double aVal){ mLocGL_0_1 = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetGL_0_2(double aVal){ mLocGL_0_2 = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetGL_1_0(double aVal){ mLocGL_1_0 = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetGL_1_1(double aVal){ mLocGL_1_1 = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetGL_1_2(double aVal){ mLocGL_1_2 = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetGL_2_0(double aVal){ mLocGL_2_0 = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetGL_2_1(double aVal){ mLocGL_2_1 = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetGL_2_2(double aVal){ mLocGL_2_2 = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetNDP0_x(double aVal){ mLocNDP0_x = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetNDP0_y(double aVal){ mLocNDP0_y = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetNDdx_x(double aVal){ mLocNDdx_x = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetNDdx_y(double aVal){ mLocNDdx_y = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetNDdy_x(double aVal){ mLocNDdy_x = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetNDdy_y(double aVal){ mLocNDdy_y = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetProjI_x(double aVal){ mLocProjI_x = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetProjI_y(double aVal){ mLocProjI_y = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetProjI_z(double aVal){ mLocProjI_z = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetProjJ_x(double aVal){ mLocProjJ_x = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetProjJ_y(double aVal){ mLocProjJ_y = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetProjJ_z(double aVal){ mLocProjJ_z = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetProjK_x(double aVal){ mLocProjK_x = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetProjK_y(double aVal){ mLocProjK_y = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetProjK_z(double aVal){ mLocProjK_z = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetProjP0_x(double aVal){ mLocProjP0_x = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetProjP0_y(double aVal){ mLocProjP0_y = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetProjP0_z(double aVal){ mLocProjP0_z = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::SetYIm(double aVal){ mLocYIm = aVal;}



double * cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "GL_0_0") return & mLocGL_0_0;
   if (aName == "GL_0_1") return & mLocGL_0_1;
   if (aName == "GL_0_2") return & mLocGL_0_2;
   if (aName == "GL_1_0") return & mLocGL_1_0;
   if (aName == "GL_1_1") return & mLocGL_1_1;
   if (aName == "GL_1_2") return & mLocGL_1_2;
   if (aName == "GL_2_0") return & mLocGL_2_0;
   if (aName == "GL_2_1") return & mLocGL_2_1;
   if (aName == "GL_2_2") return & mLocGL_2_2;
   if (aName == "NDP0_x") return & mLocNDP0_x;
   if (aName == "NDP0_y") return & mLocNDP0_y;
   if (aName == "NDdx_x") return & mLocNDdx_x;
   if (aName == "NDdx_y") return & mLocNDdx_y;
   if (aName == "NDdy_x") return & mLocNDdy_x;
   if (aName == "NDdy_y") return & mLocNDdy_y;
   if (aName == "ProjI_x") return & mLocProjI_x;
   if (aName == "ProjI_y") return & mLocProjI_y;
   if (aName == "ProjI_z") return & mLocProjI_z;
   if (aName == "ProjJ_x") return & mLocProjJ_x;
   if (aName == "ProjJ_y") return & mLocProjJ_y;
   if (aName == "ProjJ_z") return & mLocProjJ_z;
   if (aName == "ProjK_x") return & mLocProjK_x;
   if (aName == "ProjK_y") return & mLocProjK_y;
   if (aName == "ProjK_z") return & mLocProjK_z;
   if (aName == "ProjP0_x") return & mLocProjP0_x;
   if (aName == "ProjP0_y") return & mLocProjP0_y;
   if (aName == "ProjP0_z") return & mLocProjP0_z;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "YIm") return & mLocYIm;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::mTheAuto("cEqAppui_NoDist__GL__PProjInc_M2CPolyn7",cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::Alloc);


cElCompiledFonc *  cEqAppui_NoDist__GL__PProjInc_M2CPolyn7::Alloc()
{  return new cEqAppui_NoDist__GL__PProjInc_M2CPolyn7();
}


