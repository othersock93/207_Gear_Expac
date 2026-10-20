	class Man;
	class CAManBase: Man
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_gunbag_weaponTo
				{
					displayName="$STR_ace_gunbag_ToGunbag";
					condition="([_target] call ace_gunbag_fnc_hasGunbag) && {[_player, _target] call ace_gunbag_fnc_canInteract == 0}";
					statement="[_player, _target] call ace_gunbag_fnc_toGunbag";
					showDisabled=0;
					icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
				};
				class ace_gunbag_weaponSwap
				{
					displayName="$STR_ace_gunbag_SwapGunbag";
					condition="(ace_gunbag_swapGunbagEnabled) && ([_target] call ace_gunbag_fnc_hasGunbag) && {[_player, _target] call ace_gunbag_fnc_canInteract == 2}";
					statement="[_player, _target] call ace_gunbag_fnc_swapGunbag";
					showDisabled=0;
					icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
				};
				class ace_gunbag_weaponOff
				{
					displayName="$STR_ace_gunbag_OffGunbag";
					condition="([_target] call ace_gunbag_fnc_hasGunbag) && {[_player, _target] call ace_gunbag_fnc_canInteract == 1}";
					statement="[_player, _target] call ace_gunbag_fnc_offGunbag";
					showDisabled=0;
					icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
				};
				class ace_gunbag_status
				{
					displayName="$STR_ace_gunbag_Status";
					condition="[_target] call ace_gunbag_fnc_hasGunbag";
					statement="[_target] call ace_gunbag_fnc_status";
					showDisabled=0;
					icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class ace_gunbag_actions
				{
					displayName="$STR_ace_gunbag_Displayname";
					condition="[_player] call ace_gunbag_fnc_hasGunbag";
					showDisabled=0;
					icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					class ace_gunbag_weaponTo
					{
						displayName="$STR_ace_gunbag_ToGunbag";
						condition="[_player, _player] call ace_gunbag_fnc_canInteract == 0";
						statement="[_player, _player] call ace_gunbag_fnc_toGunbag";
						showDisabled=0;
						icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					};
					class ace_gunbag_weaponSwap
					{
						displayName="$STR_ace_gunbag_SwapGunbag";
						condition="(ace_gunbag_swapGunbagEnabled) && ([_player, _player] call ace_gunbag_fnc_canInteract == 2)";
						statement="[_player, _player] call ace_gunbag_fnc_swapGunbag";
						showDisabled=0;
						icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					};
					class ace_gunbag_weaponOff
					{
						displayName="$STR_ace_gunbag_OffGunbag";
						condition="[_player, _player] call ace_gunbag_fnc_canInteract == 1";
						statement="[_player, _player] call ace_gunbag_fnc_offGunbag";
						showDisabled=0;
						icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					};
					class ace_gunbag_status
					{
						displayName="$STR_ace_gunbag_Status";
						condition="[_player] call ace_gunbag_fnc_hasGunbag";
						statement="[_player] call ace_gunbag_fnc_status";
						showDisabled=0;
						icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					};
				};
			};
		};
	};
    class B_AssaultPack_mcamo;
	class Bag_Base;
	class K_Backpack_Base: Bag_Base // dont modif name & setting here under except the name
	{
		scope=1; // Visibility |1 = No visible on Arsenal | 2 = Visible on Arsenal
		scopeCurator=0;
		author="Mac n Socks"; // use Your name or team name
		displayName="";
		picture="";
		isbackpack=1;
		model="";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={};
		maximumLoad=500;
		mass=30;
	};
	class ace_gunbag: Bag_Base
	{
		_generalMacro="ace_gunbag";
		author="Mac n Socks";
		scope=0;
		displayName="$STR_ace_gunbag_Displayname";
		model="\z\ace\addons\gunbag\data\ace_gunbag.p3d";
		picture="\z\ace\addons\gunbag\ui\gunbag_ca.paa";
		icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsdatatures[]=
		{
			"\z\ace\addons\gunbag\data\gunbag_co.paa"
		};
		maximumLoad=350;
		mass=11;
		ace_gunbag=1;
	};
	class ace_gunbag_Tan: ace_gunbag
	{
		_generalMacro="ace_gunbag_Tan";
		author="Mac n Socks";
		scope=0;
		displayName="$STR_ace_gunbag_Displayname_Tan";
		picture="\z\ace\addons\gunbag\ui\gunbag_tan_ca.paa";
		hiddenSelectionsdatatures[]=
		{
			"\z\ace\addons\gunbag\data\gunbag_tan_co.paa"
		};
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportBackpacks
		{
			class _xx_ace_gunbag
			{
				backpack="ace_gunbag";
				count=3;
			};
			class _xx_ace_gunbag_Tan
			{
				backpack="ace_gunbag_Tan";
				count=3;
			};
		};
	};
	
	class Medic_Pack_AMC: Bag_Base
	{
		author="Mac n Socks";
		scope=2;
		displayName="TCCC RATS Pack (AMC)";
		model="\gearexp\bags\mesh\Medic_Pack.p3d";
		picture="\gearexp\bags\ui\mbag_ca.paa";
		maximumLoad=360;
		mass=60;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=10000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"airway",
			"bleed",
			"med_patch",
			"bandolier",
			"m9_camo"
		};
		hiddenSelectionsTextures[]=
		{
			"gearexp\bags\tx\Airway_Patch.paa",
			"gearexp\bags\tx\Bleed_Patch.paa",
			"gearexp\bags\tx\IR_MED_co.paa",
			"gearexp\bags\tx\C_Bandolier_amc.paa",
			"gearexp\bags\tx\amc_M9_Backpack_co.paa"
		};
		class XtdGearInfo
		{
			model = "medic";
			CAMO = "AMC";
		};
	};
	class JTAC_Pack_AMC: Bag_Base
	{
		author="Mac n Socks";
		scope=2;
		displayName="JTAC Kitbag (AMC)";
		model="\gearexp\bags\mesh\TACP_Pack.p3d";
		picture="\gearexp\bags\ui\jbag_ca.paa";
		maximumLoad=360;
		mass=60;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"jtac_patch",
			"holster",
			"pouches",
			"radio",
			"pouch_1",
			"pouchset"
		};
		hiddenSelectionsTextures[]=
		{
			"gearexp\bags\tx\IR_JTAC_co.paa",
			"gearexp\bags\tx\S&S_co.paa",
			"gearexp\bags\tx\pouches_amc.paa",
			"gearexp\bags\tx\Radio_amc_co.paa",
			"gearexp\bags\tx\pouch_1_amc_co.paa",
			"gearexp\bags\tx\c_pouchset_amc_co.paa"
		};
		class XtdGearInfo
		{
			model = "jtac";
			CAMO = "AMC";
		};
	};
	class MG_Pack_AMC: ace_gunbag
	{
		author="Mac n Socks";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		isbackpack=1;
		picture="\gearexp\bags\ui\mgbag_ca.paa";
		displayName="Heavy Weapons Rucksack (AMC)";
		model="\gearexp\bags\mesh\MG_Pack.p3d";
		allowedSlots[]={901};
		maximumLoad=480;
		mass=90;
		hiddenSelections[]=
        {
            "pouchset",
			"gunslinger",
			"boxmag"
        };
		hiddenSelectionstextures[]=
        {
            "gearexp\bags\tx\c_pouchset_amc_co.paa",
			"gearexp\bags\tx\g2_gunslinger_amc.paa",
			"gearexp\bags\tx\vsm_boxmag_amc.paa"
        };
		transportMaxWeapons=1;
		transportMaxMagazines=10;
		class DestructionEffects
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class XtdGearInfo
		{
			model = "mg";
			CAMO = "AMC";
		};
	};
	class Sapper_Pack_AMC: Bag_Base
	{
		author="Mac n Socks";
		scope=2;
		displayName="JPC Backpanel, Sapper (AMC)";
		model="\gearexp\bags\mesh\jpc_panel_2.p3d";
		picture="\gearexp\bags\ui\sapbag_ca.paa";
		maximumLoad=300;
		mass=30;
		hiddenSelections[]=
		{
			"gearasset3",
			"swatheavy"
		};
		hiddenSelectionsTextures[]=
		{
			"gearexp\bags\tx\gearasset3_amc_co.paa",
			"gearexp\bags\tx\t_swatheavy_gear_amc_co.paa"
		};
		class XtdGearInfo
		{
			model = "sapper";
			CAMO = "AMC";
		};
	};
	class Assault_Pack_AMC: B_AssaultPack_mcamo
	{
		author="Mac n Socks";
		scope=2;
		displayName="JPC Backpanel, Assaulter (AMC)";
		model="\gearexp\bags\mesh\JPCPanel1.p3d";
		picture="\gearexp\bags\ui\assbag_ca.paa";
		maximumLoad=300;
		mass=30;
		hiddenSelections[]=
		{
			"neutralpack",
			"p_gear",
			"panel_1"
		};
		hiddenSelectionsTextures[]=
		{
			"gearexp\bags\tx\neutralpack_fog_co",
			"gearexp\bags\tx\p_gear_ausmulticam_co.paa",
			"gearexp\bags\tx\panel_1_amc.paa"
		};
		class XtdGearInfo
		{
			model = "assault";
			CAMO = "AMC";
		};
	};

	class Medic_Pack_AMP: Medic_Pack_AMC
	{
		displayName = "TCCC RATS Pack (AMP)";
		hiddenSelections[]=
		{
			"airway",
			"bleed",
			"med_patch",
			"bandolier",
			"m9_camo"
		};
		hiddenSelectionsTextures[]=
		{
			"gearexp\bags\tx\Airway_Patch.paa",
			"gearexp\bags\tx\Bleed_Patch.paa",
			"gearexp\bags\tx\IR_MED_co.paa",
			"gearexp\bags\tx\C_Bandolier_amp.paa",
			"gearexp\bags\tx\amp_M9_Backpack_co.paa"
		};
		class XtdGearInfo
		{
			model = "medic";
			CAMO = "AMP";
		};
	};
	class JTAC_Pack_AMP: JTAC_Pack_AMC
	{
		displayName = "JTAC Kitbag (AMP)";
		hiddenSelections[]=
		{
			"jtac_patch",
			"holster",
			"pouches",
			"radio",
			"pouch_1",
			"pouchset"
		};
		hiddenSelectionsTextures[]=
		{
			"gearexp\bags\tx\IR_JTAC_co.paa",
			"gearexp\bags\tx\S&S_green_co.paa",
			"gearexp\bags\tx\pouches_amp.paa",
			"gearexp\bags\tx\Radio_amp_co.paa",
			"gearexp\bags\tx\pouch_1_amp_co.paa",
			"gearexp\bags\tx\c_pouchset_amp_co.paa"
		};
		class XtdGearInfo
		{
			model = "jtac";
			CAMO = "AMP";
		};
	};
	class MG_Pack_AMP: MG_Pack_AMC
	{
		displayName = "Heavy Weapons Rucksack (AMP)";
		hiddenSelections[]=
        {
            "pouchset",
			"gunslinger",
			"boxmag"
        };
		hiddenSelectionstextures[]=
        {
            "gearexp\bags\tx\c_pouchset_amp_co.paa",
			"gearexp\bags\tx\g2_gunslinger_amp.paa",
			"gearexp\bags\tx\vsm_boxmag_amp.paa"
        };
		class XtdGearInfo
		{
			model = "mg";
			CAMO = "AMP";
		};
	};
	class Sapper_Pack_AMP: Sapper_Pack_AMC
	{
		displayName = "JPC Backpanel, Sapper (AMP)";
		hiddenSelections[]=
		{
			"gearasset3",
			"swatheavy"
		};
		hiddenSelectionsTextures[]=
		{
			"gearexp\bags\tx\gearasset3_amp_co.paa",
			"gearexp\bags\tx\t_swatheavy_gear_amp_co.paa"
		};
		class XtdGearInfo
		{
			model = "sapper";
			CAMO = "AMP";
		};
	};
	class Assault_Pack_AMP: Assault_Pack_AMC
	{
		displayName = "JPC Backpanel, Assaulter (AMP)";
		hiddenSelections[]=
		{
			"neutralpack",
			"p_gear",
			"panel_1"
		};
		hiddenSelectionsTextures[]=
		{
			"gearexp\bags\tx\neutralpack_amp_co",
			"gearexp\bags\tx\p_gear_ausmultipat_co.paa",
			"gearexp\bags\tx\panel_1_amp.paa"
		};
		class XtdGearInfo
		{
			model = "assault";
			CAMO = "AMP";
		};
	}