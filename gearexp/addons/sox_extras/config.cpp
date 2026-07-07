#define _ARMA_

class CfgPatches
{
	class sox_extras
	{
		units[]=
		{
			"207_amcu_R",
			"207_amcu",
			"207_ampu_R",
			"207_ampu"
		};
		weapons[]=
		{
			"207_amcu_RU",
			"207_amcu_U",
			"207_ampu_RU",
			"207_ampu_U"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"ADF_Core",
			"adfrc_facewear",
			"adfrc_helmets",
			"Extended_EventHandlers",
			"A3_Weapons_F",
			"A3_Weapons_F_Mark",
			"adfrc_magazines",
			"rhs_weapons",
			"rhs_c_weapons",
			"patches"
		};
	};
};

#include "Mk207SPR.hpp"

class XtdGearModels
{
	#include "aceax.hpp"
};

class cfgVehicles
{
	class B_Soldier_base_F;

	class 207_amcu: B_Soldier_base_F
	{
		author = "Socks";
		vehicleClass = "Men";
		scope = 1;
		displayName = "Crye G3 Combat Fatigues (AMCU)";
		picture = "\sox_extras\ui\sleeve_ca.paa";
		identityTypes[] = {"Head_NATO", "G_NATO_default"};
		modelSides[] = {3,2,1,0};
		model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		uniformClass = "207_amcu_U";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"sox_extras\tx\207amc_uni.paa"};
	};
	class 207_amcu_R: B_Soldier_base_F
	{
		author = "Socks";
		vehicleClass = "Men";
		scope = 1;
		displayName = "Crye G3 Combat Fatigues (AMCU/Rolled)";
		picture = "\sox_extras\ui\roll_ca.paa";
		identityTypes[] = {"Head_NATO", "G_NATO_default"};
		modelSides[] = {3,2,1,0};
		model = "\A3\characters_f\BLUFOR\b_soldier_03.p3d";
		uniformClass = "207_amcu_RU";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"sox_extras\tx\207amc_uni.paa"};
	};

	class 207_ampu: B_Soldier_base_F
	{
		author = "Socks";
		vehicleClass = "Men";
		scope = 1;
		displayName = "Crye G3 Combat Fatigues (AMPU)";
		picture = "\sox_extras\ui\sleeve2_ca.paa";
		identityTypes[] = {"Head_NATO", "G_NATO_default"};
		modelSides[] = {3,2,1,0};
		model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		uniformClass = "207_ampu_U";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"sox_extras\tx\207amp_uni.paa"};
	};
	class 207_ampu_R: B_Soldier_base_F
	{
		author = "Socks";
		vehicleClass = "Men";
		scope = 1;
		displayName = "Crye G3 Combat Fatigues (AMPU/Rolled)";
		picture = "\sox_extras\ui\roll2_ca.paa";
		identityTypes[] = {"Head_NATO", "G_NATO_default"};
		modelSides[] = {3,2,1,0};
		model = "\A3\characters_f\BLUFOR\b_soldier_03.p3d";
		uniformClass = "207_ampu_RU";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"sox_extras\tx\207amp_uni.paa"};
	};
};

class cfgWeapons
{
	#include "wendy.hpp"
	class Uniform_Base;
	class UniformItem;

	class 207_amcu_U: Uniform_Base 
	{ 
		scope = 2;
		author = "Socks";
		displayName = "Crye G3 Combat Fatigues (AMCU)";
		picture = "\sox_extras\ui\sleeve_ca.paa";
		model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\sox_extras\tx\amc_suitpack.paa"};
		class ItemInfo: UniformItem 
		{
			uniformModel = "-";
			uniformClass = "207_amcu"; 
			containerClass = "Supply40";
			mass = 40;
		}; 
	};
	class 207_amcu_RU: Uniform_Base 
	{ 
		scope = 2;
		author = "Socks";
		displayName = "Crye G3 Combat Fatigues (AMCU/Rolled)";
		picture = "\sox_extras\ui\roll_ca.paa";
		model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\sox_extras\tx\amc_suitpack.paa"};
		class ItemInfo: UniformItem 
		{
			uniformModel = "-";
			uniformClass = "207_amcu_R"; 
			containerClass = "Supply40";
			mass = 40;
		}; 
	};

	class 207_ampu_U: Uniform_Base 
	{ 
		scope = 2;
		author = "Socks";
		displayName = "Crye G3 Combat Fatigues (AMPU)";
		picture = "\sox_extras\ui\sleeve2_ca.paa";
		model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\sox_extras\tx\amp_suitpack.paa"};
		class ItemInfo: UniformItem 
		{
			uniformModel = "-";
			uniformClass = "207_ampu"; 
			containerClass = "Supply40";
			mass = 40;
		}; 
	};
	class 207_ampu_RU: Uniform_Base 
	{ 
		scope = 2;
		author = "Socks";
		displayName = "Crye G3 Combat Fatigues (AMPU/Rolled)";
		picture = "\sox_extras\ui\roll2_ca.paa";
		model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\sox_extras\tx\amp_suitpack.paa"};
		class ItemInfo: UniformItem 
		{
			uniformModel = "-";
			uniformClass = "207_ampu_R"; 
			containerClass = "Supply40";
			mass = 40;
		}; 
	};
};

class CfgGlasses
{
	class adfrc_facewear_Balaclava_blk_1;
	class adfrc_facewear_Balaclava_blk_2;
	class adfrc_facewear_Bala_BLK_ess_1;
	class adfrc_facewear_Bala_BLK_gatorz_1;

	class skull_bala_b1: adfrc_facewear_Balaclava_blk_1
	{
		author = "Socks | ADF Re-Cut";
		displayName = "Balaclava (Black, Skull)";
		hiddenSelectionsTextures[] = {"sox_extras\tx\skull_b_co.paa"};
	};
	class skull_bala_o1: adfrc_facewear_Balaclava_blk_1
	{
		author = "Socks | ADF Re-Cut";
		displayName = "Balaclava (Olive, Skull)";
		picture = "\ADF_Gear\adfrc_facewear\icons\OLIVE_CA.paa";
		hiddenSelectionsTextures[] = {"sox_extras\tx\skull_o_co.paa"};
	};
	class skull_bala_t1: adfrc_facewear_Balaclava_blk_1
	{
		author = "Socks | ADF Re-Cut";
		displayName = "Balaclava (Tan, Skull)";
		picture = "\ADF_Gear\adfrc_facewear\icons\TAN_CA.paa";
		hiddenSelectionsTextures[] = {"sox_extras\tx\skull_t_co.paa"};
	};

	class skull_bala_b2: adfrc_facewear_Balaclava_blk_2
	{
		author = "Socks | ADF Re-Cut";
		displayName = "Half Balaclava (Black, Skull)";
		hiddenSelectionsTextures[] = {"sox_extras\tx\skull_b_co.paa"};
	};
	class skull_bala_o2: adfrc_facewear_Balaclava_blk_2
	{
		author = "Socks | ADF Re-Cut";
		displayName = "Half Balaclava (Olive, Skull)";
		picture = "\ADF_Gear\adfrc_facewear\icons\OLIVE-Half_CA.paa";
		hiddenSelectionsTextures[] = {"sox_extras\tx\skull_o_co.paa"};
	};
	class skull_bala_t2: adfrc_facewear_Balaclava_blk_2
	{
		author = "Socks | ADF Re-Cut";
		displayName = "Half Balaclava (Tan, Skull)";
		picture = "\ADF_Gear\adfrc_facewear\icons\TAN-Half_CA.paa";
		hiddenSelectionsTextures[] = {"sox_extras\tx\skull_t_co.paa"};
	};

	class skull_ess_b: adfrc_facewear_Bala_BLK_ess_1
	{
		author = "Socks | ADF Re-Cut";
		displayName = "ESS/Balaclava (Black, Skull)";
		hiddenSelectionsTextures[] = {"sox_extras\tx\skull_b_co.paa"};
	};
	class skull_ess_o: adfrc_facewear_Bala_BLK_ess_1
	{
		author = "Socks | ADF Re-Cut";
		displayName = "ESS/Balaclava (Olive, Skull)";
		hiddenSelectionsTextures[] = {"sox_extras\tx\skull_o_co.paa"};
	};
	class skull_ess_t: adfrc_facewear_Bala_BLK_ess_1
	{
		author = "Socks | ADF Re-Cut";
		displayName = "ESS/Balaclava (Tan, Skull)";
		hiddenSelectionsTextures[] = {"sox_extras\tx\skull_t_co.paa"};
	};

	class skull_gator_b: adfrc_facewear_Bala_BLK_gatorz_1
	{
		author = "Socks | ADF Re-Cut";
		displayName = "Gatorz/Balaclava (Black, Skull)";
		hiddenSelectionsTextures[] = {"sox_extras\tx\skull_b_co.paa"};
	};
	class skull_gator_o: adfrc_facewear_Bala_BLK_gatorz_1
	{
		author = "Socks | ADF Re-Cut";
		displayName = "Gatorz/Balaclava (Olive, Skull)";
		hiddenSelectionsTextures[] = {"sox_extras\tx\skull_o_co.paa"};
	};
	class skull_gator_t: adfrc_facewear_Bala_BLK_gatorz_1
	{
		author = "Socks | ADF Re-Cut";
		displayName = "Gatorz/Balaclava (Tan, Skull)";
		hiddenSelectionsTextures[] = {"sox_extras\tx\skull_t_co.paa"};
	};
};

class CfgUnitInsignia
{
	class insignia_11_A
	{
		texture = "\sox_extras\ui\11A_ca.paa";
	};
};