#define _ARMA_

class CfgPatches
{
	class sox_extras
	{
		units[]=
		{
			"207_amcu_R",
			"207_amcu"
		};
		weapons[]=
		{
			"207_amcu_RU",
			"207_amcu_U",
			"207_ampu_boonie"
		};
		requiredVersion=2;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_EPB",
			"A3_Weapons_F",
			"A3_Weapons_F_Mark",
			"ADF_Core",
			"adfrc_facewear",
			"adfrc_helmets",
			"adfrc_magazines",
			"Extended_EventHandlers",
			"female3_ICEMAN",
			"patches",
			"rhs_weapons",
			"rhs_c_weapons"
		};
	};
};

class XtdGearModels
{
	#include "aceax.hpp"
};

class cfgVehicles
{
	#include "uni\uniforms_v.hpp"
//	#include "bags\bags.hpp"
};

class cfgWeapons
{
	#include "uni\uniforms_w.hpp"
	#include "headgear\wendy.hpp"
//	#include "headgear\hats.hpp"
//	#include "vests\vests.hpp"
	#include "tweaks\SMA_Fix.hpp"

	class H_Booniehat_khk_hs;

	class 207_ampu_boonie: H_Booniehat_khk_hs
	{
		author = "Socks";
		scope = 2;
		displayName = "Booniehat w/ Comms (AMP)";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		picture = "\A3\Characters_F\data\ui\icon_h_booniehat_mcamo_ca.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\sox_extras\headgear\tx\amp_boonie_co.paa"};
	};
};

class CfgAmmo
{
	#include "tweaks\Mk207_Ammo.hpp"
};

class CfgMagazines
{
	#include "tweaks\Mk207_Mags.hpp"
};

class CfgMagazineWells
{
	class STANAG_556x45
	{
		sox_extras[] = 
		{
			"Mk207_SPR_Mag",
			"Mk207_SPR_Mag_TR",
			"Mk207_SPR_Mag_IR",
			"Mk207_SPR_Mag_Sand",
			"Mk207_SPR_Mag_Sand_TR",
			"Mk207_SPR_Mag_Sand_IR",
			"Mk207_SPR_PMAG",
			"Mk207_SPR_PMAG_Tan",
			"Mk207_SPR_PMAG_TR",
			"Mk207_SPR_PMAG_Tan_TR",
			"Mk207_SPR_PMAG_IR",
			"Mk207_SPR_PMAG_Tan_IR"
		};
		SMA_mags[] = 
        {
            "SMA_30Rnd_556x45_M855A1",
            "SMA_30Rnd_556x45_M855A1_Tracer",
            "SMA_30Rnd_556x45_M855A1_IR",
            "SMA_30Rnd_556x45_Mk318",
            "SMA_30Rnd_556x45_Mk318_Tracer",
            "SMA_30Rnd_556x45_Mk318_IR",
            "SMA_30Rnd_556x45_Mk262",
            "SMA_30Rnd_556x45_Mk262_Tracer",
            "SMA_30Rnd_556x45_Mk262_IR"
        };
	};
	class CBA_762x51_HK417
	{
		sox_extras[] = 
		{
			"Mk207_762_20Rnd",
			"Mk207_762_20Rnd_TR",
			"Mk207_762_20Rnd_IR"
		};
		SMA_mags[] = 
        {
            "SMA_20Rnd_762x51mm_M80A1_EPR",
            "SMA_20Rnd_762x51mm_M80A1_EPR_Tracer",
            "SMA_20Rnd_762x51mm_M80A1_EPR_IR",
            "SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range",
            "SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range_Tracer",
            "SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range_IR",
            "SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic",
            "SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_Tracer",
            "SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_IR"
        };
	};
////// SOX_EXTRAS Mk207 //////
	class CBA_556x45_STANAG
	{
		sox_extras[] = 
		{
			"Mk207_SPR_Mag",
			"Mk207_SPR_Mag_TR",
			"Mk207_SPR_Mag_IR",
			"Mk207_SPR_Mag_Sand",
			"Mk207_SPR_Mag_Sand_TR",
			"Mk207_SPR_Mag_Sand_IR"
		};
	};
	class CBA_556x45_SCAR_EGLM
	{
		sox_extras[] = 
		{
			"Mk207_SPR_Mag",
			"Mk207_SPR_Mag_TR",
			"Mk207_SPR_Mag_IR",
			"Mk207_SPR_Mag_Sand",
			"Mk207_SPR_Mag_Sand_TR",
			"Mk207_SPR_Mag_Sand_IR",
			"Mk207_SPR_PMAG",
			"Mk207_SPR_PMAG_Tan",
			"Mk207_SPR_PMAG_TR",
			"Mk207_SPR_PMAG_Tan_TR",
			"Mk207_SPR_PMAG_IR",
			"Mk207_SPR_PMAG_Tan_IR"
		};
	};
	class CBA_556x45_STEYR
	{
		sox_extras[] = 
		{
			"Mk207_SPR_Steyr_Mag",
			"Mk207_SPR_Steyr_Mag_TR",
			"Mk207_SPR_Steyr_Mag_IR"
		};
	};
	class CBA_556x45_MINIMI
	{
		sox_extras[] = 
		{
			"Mk207_SPR_100Rnd",
			"Mk207_SPR_100Rnd_IR",
			"Mk207_SPR_200Rnd",
			"Mk207_SPR_200Rnd_IR",
			"Mk207_SPR_250Rnd",
			"Mk207_SPR_250Rnd_IR",
			"Mk207_SPR_100Rnd_Soft",
			"Mk207_SPR_100Rnd_Soft_IR",
			"Mk207_SPR_200Rnd_Soft",
			"Mk207_SPR_200Rnd_Soft_IR",
			"Mk207_SPR_200Rnd_Box",
			"Mk207_SPR_200Rnd_Box_IR"
		};
	};
	class CBA_762x51_AR10
	{
		sox_extras[] = 
		{
			"Mk207_762_20Rnd",
			"Mk207_762_20Rnd_TR",
			"Mk207_762_20Rnd_IR"
		};
	};
	class CBA_762x51_M14
	{
		sox_extras[] = 
		{
			"Mk207_762_20Rnd",
			"Mk207_762_20Rnd_TR",
			"Mk207_762_20Rnd_IR"
		};
	};
	class M14_762x51
	{
		sox_extras[] = 
		{
			"Mk207_762_20Rnd",
			"Mk207_762_20Rnd_TR",
			"Mk207_762_20Rnd_IR"
		};
	};
	class CBA_762x51_SR25
	{
		sox_extras[] = 
		{
			"Mk207_762_20Rnd",
			"Mk207_762_20Rnd_TR",
			"Mk207_762_20Rnd_IR"
		};
	};
	class CBA_300WM_AICS
	{
		sox_extras[] =
		{
			"Mk207_300_5Rnd"
		};
	};
	class MAR10_338
	{
		sox_extras[] =
		{
			"Mk207_338_10Rnd"
		};
	};
	class CBA_50BMG_M107
	{
		sox_extras[] =
		{
			"Mk207_127_10Rnd"
		};
	};
////// SMA FIXES //////
	class CBA_68SPC_STANAG
	{
		SMA_mags[] = 
        {
            "SMA_30Rnd_68x43_SPC_FMJ",
            "SMA_30Rnd_68x43_SPC_FMJ_Tracer",
            "SMA_30Rnd_68x43_SPC_FMJ_IR",
            "SMA_30Rnd_68x43_BT",
            "SMA_30Rnd_68x43_BT_Tracer",
            "SMA_30Rnd_68x43_BT_IR",
            "SMA_30Rnd_68x43_sub",
            "SMA_30Rnd_68x43_sub_Tracer",
            "SMA_30Rnd_68x43_sub_IR"
        };
	};
	class CBA_300BLK_STANAG
	{
		SMA_mags[] = 
        {
            "SMA_30Rnd_762x35_BLK_EPR",
            "SMA_30Rnd_762x35_SS"
        };
	};
	class CBA_762x51_LINKS
	{
		SMA_mags[] = 
        {
            "SMA_150Rnd_762_M80A1",
            "SMA_150Rnd_762_M80A1_Tracer",
            "SMA_150Rnd_762_M80A1_Mixed"
        };
	};
	class CBA_762x51_SCAR
	{
		SMA_mags[] = 
        {
            "SMA_20Rnd_762x51mm_M80A1_EPR",
            "SMA_20Rnd_762x51mm_M80A1_EPR_Tracer",
            "SMA_20Rnd_762x51mm_M80A1_EPR_IR",
            "SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range",
            "SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range_Tracer",
            "SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range_IR",
            "SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic",
            "SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_Tracer",
            "SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_IR"
        };
	};
	class CBA_762x51_SCAR_EGLM
	{
		SMA_mags[] = 
        {
            "SMA_20Rnd_762x51mm_M80A1_EPR",
            "SMA_20Rnd_762x51mm_M80A1_EPR_Tracer",
            "SMA_20Rnd_762x51mm_M80A1_EPR_IR",
            "SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range",
            "SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range_Tracer",
            "SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range_IR",
            "SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic",
            "SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_Tracer",
            "SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_IR"
        };
	};
};

class CfgFaces
{
//	#include "faces\fem_faces.hpp"
};

class CfgHeads
{
//	#include "faces\fem_heads.hpp"
};

class CfgGlasses
{
	#include "glasses\facemasks.hpp"
};

class CfgUnitInsignia
{
	class insignia_11_A
	{
		texture = "\sox_extras\ui\11A_ca.paa";
	};
};