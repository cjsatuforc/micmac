/*Header-MicMac-eLiSe-25/06/2007

    MicMac : Multi Image Correspondances par Methodes Automatiques de Correlation
    eLiSe  : ELements of an Image Software Environnement

    www.micmac.ign.fr

   
    Copyright : Institut Geographique National
    Author : Marc Pierrot Deseilligny
    Contributors : Gregoire Maillet, Didier Boldo.

[1] M. Pierrot-Deseilligny, N. Paparoditis.
    "A multiresolution and optimization-based image matching approach:
    An application to surface reconstruction from SPOT5-HRS stereo imagery."
    In IAPRS vol XXXVI-1/W41 in ISPRS Workshop On Topographic Mapping From Space
    (With Special Emphasis on Small Satellites), Ankara, Turquie, 02-2006.

[2] M. Pierrot-Deseilligny, "MicMac, un lociel de mise en correspondance
    d'images, adapte au contexte geograhique" to appears in 
    Bulletin d'information de l'Institut Geographique National, 2007.

Francais :

   MicMac est un logiciel de mise en correspondance d'image adapte 
   au contexte de recherche en information geographique. Il s'appuie sur
   la bibliotheque de manipulation d'image eLiSe. Il est distibue sous la
   licences Cecill-B.  Voir en bas de fichier et  http://www.cecill.info.


English :

    MicMac is an open source software specialized in image matching
    for research in geographic information. MicMac is built on the
    eLiSe image library. MicMac is governed by the  "Cecill-B licence".
    See below and http://www.cecill.info.

Header-MicMac-eLiSe-25/06/2007*/

#include "general/all.h"
#include "private/all.h"
#include "Digeo.h"


using namespace NS_ParamDigeo;

void DigeoBanniere()
{

   std::cout <<  "\n";
    std::cout <<  " *********************************\n";
    std::cout <<  " *     D-etermination d'         *\n";
    std::cout <<  " *     I-nvariants               *\n";
    std::cout <<  " *     GE-ometriques pour l'     *\n";
    std::cout <<  " *     O-rientation              *\n";
    std::cout <<  " *********************************\n\n";

}

cAppliDigeo * NewDigeo
              (
                   int argc,
                   char ** argv,
                   const std::string & aName,
                   cAppliDigeo * aMaster,
                   cModifGCC * aModif,
                   bool IsLastGCC
              )
{
   cResultSubstAndStdGetFile<cParamDigeo> aP2 
                                          (
                                              argc-2,argv+2,
		                              argv[1],
			                      StdGetFileXMLSpec("ParamDigeo.xml"),
			                      "ParamDigeo",
			                      "ParamDigeo",
                                              "DirectoryChantier",
                                              "FileChantierNameDescripteur"
                                          );

   if (aModif == 0)
   {
         IsLastGCC =     (!aP2.mObj->GenereCodeConvol().IsInit())
                      || (aP2.mObj->GenereCodeConvol().Val().ModifGCC().empty());
   }
   return new cAppliDigeo   (aP2,aMaster,aModif,IsLastGCC);
}

extern const char * theNameVar_ParamDigeo[];

#if ELISE_windows
int __cdecl main(int argc,char ** argv)
#else
int main(int argc,char ** argv)
#endif 
{
//for (int aK=0 ; aK<20 ; aK++)
//std::cout << "RRRRRRRRRRRRRRRRRRRRRRAAAAAAAAAAAAAAAAAAAAAAAAYYON UTILE \n";
   AddEntryStringifie
   (
        "include/XML_GEN/ParamDigeo.xml",
         theNameVar_ParamDigeo
   );
  // cAppliApero * anAppli = cAppliMICMAC::Alloc(argc,argv,eAllocAM_STD);

  //if (0) delete anAppli;
    
   ELISE_ASSERT(argc>=2,"Not enough arg");

   //  cElXMLTree aTree(argv[1]);  : A priori inutile depuis la stringification


   cAppliDigeo * aMaterApp = NewDigeo(argc,argv,argv[1],0,0,true);
   aMaterApp->DoAll();

   if (aMaterApp->GenereCodeConvol().IsInit())
   {
      cGenereCodeConvol aGCC = aMaterApp->GenereCodeConvol().Val();
      int aNbMod = aGCC.ModifGCC().size();
      for (int aK=0 ; aK<aNbMod ; aK++)
      {
          cAppliDigeo * anAp = NewDigeo
                               (
                                   argc,argv,argv[1],
                                   aMaterApp,
                                   &(aGCC.ModifGCC()[aK]),
                                   aK == (aNbMod-1)
                               );
            anAp->DoAll();
      }
   }

/*
   cResultSubstAndStdGetFile<cParamDigeo> aP2 
                                          (
                                              argc-2,argv+2,
		                              argv[1],
			                      StdGetFileXMLSpec("ParamDigeo.xml"),
			                      "ParamDigeo",
			                      "ParamDigeo",
                                              "DirectoryChantier",
                                              "FileChantierNameDescripteur"
                                          );

   cAppliDigeo   anAppli (aP2);
   anAppli.DoAll();
*/

/*
   if (anAppli.ModeMaping())
   {
       anAppli.DoMaping(argc,argv);
   }
   else
   {
      anAppli.DoCompensation();
   }

   cImInMem::Alloc(Pt2di(2,2),GenIm::u_int1,1,1);

*/
   DigeoBanniere();
   return 0;
}



/*Footer-MicMac-eLiSe-25/06/2007

Ce logiciel est un programme informatique servant à la mise en
correspondances d'images pour la reconstruction du relief.

Ce logiciel est régi par la licence CeCILL-B soumise au droit français et
respectant les principes de diffusion des logiciels libres. Vous pouvez
utiliser, modifier et/ou redistribuer ce programme sous les conditions
de la licence CeCILL-B telle que diffusée par le CEA, le CNRS et l'INRIA 
sur le site "http://www.cecill.info".

En contrepartie de l'accessibilité au code source et des droits de copie,
de modification et de redistribution accordés par cette licence, il n'est
offert aux utilisateurs qu'une garantie limitée.  Pour les mêmes raisons,
seule une responsabilité restreinte pèse sur l'auteur du programme,  le
titulaire des droits patrimoniaux et les concédants successifs.

A cet égard  l'attention de l'utilisateur est attirée sur les risques
associés au chargement,  à l'utilisation,  à la modification et/ou au
développement et à la reproduction du logiciel par l'utilisateur étant 
donné sa spécificité de logiciel libre, qui peut le rendre complexe à 
manipuler et qui le réserve donc à des développeurs et des professionnels
avertis possédant  des  connaissances  informatiques approfondies.  Les
utilisateurs sont donc invités à charger  et  tester  l'adéquation  du
logiciel à leurs besoins dans des conditions permettant d'assurer la
sécurité de leurs systèmes et ou de leurs données et, plus généralement, 
à l'utiliser et l'exploiter dans les mêmes conditions de sécurité. 

Le fait que vous puissiez accéder à cet en-tête signifie que vous avez 
pris connaissance de la licence CeCILL-B, et que vous en avez accepté les
termes.
Footer-MicMac-eLiSe-25/06/2007*/
