#define _ARMA_

class CfgPatches
{
	class gearexp_vb
	{
		units[]=
		{
			"K_Backpack_Base",
			"ACE_Box_Misc",
			"Medic_Pack_AMC",
			"JTAC_Pack_AMC",
			"MG_Pack_AMC",
			"Sapper_Pack_AMC",
			"Assault_Pack_AMC",
			"Medic_Pack_AMP",
			"JTAC_Pack_AMP",
			"MG_Pack_AMP",
			"Sapper_Pack_AMP",
			"Assault_Pack_AMP",
			"207_g3_base_v",
			"207_g3_g_v",
			"207_g3_r1_g_v",
			"207_g3_r2_g_v",
			"207_g3_v",
			"207_g3_r1_v",
			"207_g3_r2_v",
			"207_g3_np_g_v",
			"207_g3_r1_np_g_v",
			"207_g3_r2_np_g_v",
			"207_g3_np_v",
			"207_g3_r1_np_v",
			"207_g3_r2_np_v",
			"207_g3_r1_g_s_v",
			"207_g3_r2_g_s_v",
			"207_g3_r1_s_v",
			"207_g3_r2_s_v",
			"207_g3_r1_np_g_s_v",
			"207_g3_r2_np_g_s_v",
			"207_g3_r1_np_s_v",
			"207_g3_r2_np_s_v"
		};
		weapons[]=
		{
			"AMC_JPC_Assaulter_13_152A",
			"AMC_JPC_Assaulter_13_152A_NB",
			"AMC_JPC_Assaulter_10_148",
			"AMC_JPC_Assaulter_10_148_NB",
			"AMC_JPC_Comms_2_Dual_2",
			"AMC_JPC_Comms_2_Dual_2_NB",
			"AMC_JPC_Weapons_2_148",
			"AMC_JPC_Weapons_2_148_NB",
			"AMC_JPC_Weapons_6_MPU5",
			"AMC_JPC_Weapons_6_MPU5_NB",
			"AMP_JPC_Assaulter_13_152A",
			"AMP_JPC_Assaulter_13_152A_NB",
			"AMP_JPC_Assaulter_10_148",
			"AMP_JPC_Assaulter_10_148_NB",
			"AMP_JPC_Comms_2_Dual_2",
			"AMP_JPC_Comms_2_Dual_2_NB",
			"AMP_JPC_Weapons_2_148",
			"AMP_JPC_Weapons_2_148_NB",
			"AMP_JPC_Weapons_6_MPU5",
			"AMP_JPC_Weapons_6_MPU5_NB",
			"207_g3_base_w",
			"207_g3_g_w",
			"207_g3_r1_g_w",
			"207_g3_r2_g_w",
			"207_g3_w",
			"207_g3_r1_w",
			"207_g3_r2_w",
			"207_g3_np_g_w",
			"207_g3_r1_np_g_w",
			"207_g3_r2_np_g_w",
			"207_g3_np_w",
			"207_g3_r1_np_w",
			"207_g3_r2_np_w",
			"207_g3_r1_g_s_w",
			"207_g3_r2_g_s_w",
			"207_g3_r1_s_w",
			"207_g3_r2_s_w",
			"207_g3_r1_np_g_s_w",
			"207_g3_r2_np_g_s_w",
			"207_g3_r1_np_s_w",
			"207_g3_r2_np_s_w"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_epb",
			"A3_Characters_F_exp",
			"A3_Characters_F_enoch",
			"A3_Data_F",
			"A3_Weapons_F",
			"ace_gunbag",
			"A3_Weapons_F_Ammoboxes",
			"Extended_EventHandlers"
		};
	};
};

class Extended_PreStart_EventHandlers
{
	class ace_gunbag
	{
		init="call compileScript ['\z\ace\addons\gunbag\XEH_preStart.sqf']";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_gunbag
	{
		init="call compileScript ['\z\ace\addons\gunbag\XEH_preInit.sqf']";
	};
};
class RscPicture;
class RscDisplayArsenal
{
	class Controls
	{
		class IconBackgroundPrimaryWeapon: RscPicture
		{
			onLoad="[ACE_player] call ace_gunbag_fnc_BIArsenalOpen";
		};
	};
};
class Extended_DisplayUnload_EventHandlers
{
	class RscDisplayArsenal
	{
		ace_gunbag="[ACE_player] call ace_gunbag_fnc_BIArsenalClose";
	};
};
class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};

class XtdGearModels
{
	#include "gear_aceax.hpp"
};

class CfgWeapons
{
	#include "vests\vests.hpp"
	#include "uni\CfgWeapons.hpp"
};

class CfgVehicles
{
	#include "bags\bags.hpp"
	#include "uni\CfgVehicles.hpp"
};

class CfgFaces
{
	#include "faces\faces.hpp"
};