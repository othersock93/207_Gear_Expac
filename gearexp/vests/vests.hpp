	class Vest_Camo_Base;
	class VestItem;

////// AMC //////

	class AMC_JPC_Assaulter_10_148: Vest_Camo_Base
	{
		scope=2;
		picture="\gearexp\vests\ui\assves_ca.paa";
		displayname="JPC Vest Assaulter 1 (AMC)";
		model="\gearexp\vests\mesh\JPC_Assaulter_10_148.p3d";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_material2",
			"_otter",
			"_blwout",
			"_holster",
			"_belt3",
			"_fastmag2",
			"_upouch"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amc_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amc_co.paa",
			"\gearexp\vests\tx\jpc_main_amc_co.paa",
			"\gearexp\vests\tx\material_2_amc_co.paa",
			"\gearexp\vests\tx\mp_otter_ar_pouch_amc2_co.paa",
			"\gearexp\vests\tx\blwout_amc.paa",
			"\gearexp\vests\tx\holster_amc.paa",
			"\gearexp\vests\tx\ronin_belt_amc3.paa",
			"\gearexp\vests\tx\C_fastmagpouch_2_amc2_co.paa",
			"\gearexp\vests\tx\C_U_Pouch_Coyote_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\gearexp\vests\mesh\JPC_Assaulter_10_148.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[] =
			{
				"_avsb",
				"_cummerbund",
				"_jpcmain",
				"_material2",
				"_otter",
				"_blwout",
				"_holster",
				"_belt3",
				"_fastmag2",
				"_upouch"
			};
			overlaySelectionsInfo[]= {"ghillie_hide"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=24;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=24;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model = "207_jpc_assaulter";
			SETUP = "A";
			CAMO = "AMC";
			BELT = "ON";
		};
	};
	class AMC_JPC_Assaulter_13_152A: Vest_Camo_Base
	{
		scope=2;
		picture="\gearexp\vests\ui\assves2_ca.paa";
		displayname="JPC Vest Assaulter 2 (AMC)";
		model="\gearexp\vests\mesh\JPC_Assaulter_13_152A.p3d";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_material2",
			"_otter",
			"_blwout",
			"_holster",
			"_gppouch",
			"_kywi",
			"_belt3",
			"_jpc2d",
			"_gearasset5"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amc_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amc_co.paa",
			"\gearexp\vests\tx\jpc_main_amc_co.paa",
			"\gearexp\vests\tx\material_2_amc_co.paa",
			"\gearexp\vests\tx\mp_otter_ar_pouch_amc2_co.paa",
			"\gearexp\vests\tx\blwout_amc.paa",
			"\gearexp\vests\tx\holster_amc.paa",
			"\gearexp\vests\tx\gppouch1_amc.paa",
			"\gearexp\vests\tx\kywi_amc_co.paa",
			"\gearexp\vests\tx\ronin_belt_amc3.paa",
			"\gearexp\vests\tx\JPC2D_amc_co.paa",
			"\gearexp\vests\tx\GearAsset5_amc_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\gearexp\vests\mesh\JPC_Assaulter_13_152A.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[] =
			{
				"_avsb",
				"_cummerbund",
				"_jpcmain",
				"_material2",
				"_otter",
				"_blwout",
				"_holster",
				"_gppouch",
				"_kywi",
				"_belt3",
				"_jpc2d",
				"_gearasset5"
			};
			overlaySelectionsInfo[]= {"ghillie_hide"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=24;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=24;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model = "207_jpc_assaulter";
			SETUP = "B";
			CAMO = "AMC";
			BELT = "ON";
		};
	};
	class AMC_JPC_Comms_2_Dual_2: Vest_Camo_Base
	{
		scope=2;
		picture="\gearexp\vests\ui\comves_ca.paa";
		displayname="JPC Vest Comms 1 (AMC)";
		model="\gearexp\vests\mesh\JPC_Comms_2_Dual_2.p3d";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_material2",
			"_blwout",
			"_holster",
			"_gppouch",
			"_kywi",
			"_belt",
			"_fastmag2",
			"_grenpouch",
			"_paraclete",
			"_fastmag1"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amc_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amc_co.paa",
			"\gearexp\vests\tx\jpc_main_amc_co.paa",
			"\gearexp\vests\tx\material_2_amc_co.paa",
			"\gearexp\vests\tx\blwout_amc.paa",
			"\gearexp\vests\tx\holster_amc.paa",
			"\gearexp\vests\tx\gppouch1_amc.paa",
			"\gearexp\vests\tx\kywi_amc_co.paa",
			"\gearexp\vests\tx\ronin_belt_amc.paa",
			"\gearexp\vests\tx\C_fastmagpouch_2_amc2_co.paa",
			"\gearexp\vests\tx\C_grenadepouch_amc_co2.paa",
			"\gearexp\vests\tx\paracletetriple_amc_CO.paa",
			"\gearexp\vests\tx\C_fastmagpouch_2_amc_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\gearexp\vests\mesh\JPC_Comms_2_Dual_2.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[] =
			{
				"_avsb",
				"_cummerbund",
				"_jpcmain",
				"_material2",
				"_blwout",
				"_holster",
				"_gppouch",
				"_kywi",
				"_belt",
				"_fastmag2",
				"_grenpouch",
				"_paraclete",
				"_fastmag1"
			};
			overlaySelectionsInfo[]= {"ghillie_hide"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=24;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=24;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model = "207_jpc_comms";
			SETUP = "A";
			CAMO = "AMC";
			BELT = "ON";
		};
	};
	class AMC_JPC_Weapons_2_148: Vest_Camo_Base
	{
		scope=2;
		picture="\gearexp\vests\ui\wepves_ca.paa";
		displayname="JPC Vest Weapons 1 (AMC)";
		model="\gearexp\vests\mesh\JPC_Weapons_2_148.p3d";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_otter",
			"_blwout",
			"_holster",
			"_kywi",
			"_mgpouch",
			"_radiopouch",
			"_belt",
			"_gloves",
			"_medpouch"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amc_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amc_co.paa",
			"\gearexp\vests\tx\jpc_main_amc_co.paa",
			"\gearexp\vests\tx\mp_otter_ar_pouch_amc2_co.paa",
			"\gearexp\vests\tx\blwout_amc.paa",
			"\gearexp\vests\tx\holster_amc.paa",
			"\gearexp\vests\tx\kywi_amc_co.paa",
			"\gearexp\vests\tx\C_MG_Pouch_RG_2_co.paa",
			"\gearexp\vests\tx\tt_radio_pouch_amc_co.paa",
			"\gearexp\vests\tx\ronin_belt_amc.paa",
			"\gearexp\vests\tx\gloves.paa",
			"\gearexp\vests\tx\medpouch4_amc.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\gearexp\vests\mesh\JPC_Weapons_2_148.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[] =
			{
				"_avsb",
				"_cummerbund",
				"_jpcmain",
				"_otter",
				"_blwout",
				"_holster",
				"_kywi",
				"_mgpouch",
				"_radiopouch",
				"_belt",
				"_gloves",
				"_medpouch"
			};
			overlaySelectionsInfo[]= {"ghillie_hide"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=24;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=24;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model = "207_jpc_weapons";
			SETUP = "A";
			CAMO = "AMC";
			BELT = "ON";
		};
	};
	class AMC_JPC_Weapons_6_MPU5: Vest_Camo_Base
	{
		scope=2;
		picture="\gearexp\vests\ui\wepves2_ca.paa";
		displayname="JPC Vest Weapons 2 (AMC)";
		model="\gearexp\vests\mesh\JPC_Weapons_6_MPU5.p3d";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_blwout",
			"_holster",
			"_kywi",
			"_mgpouch",
			"_radiopouch",
			"_belt",
			"_grenpouch",
			"_upouch"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amc_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amc_co.paa",
			"\gearexp\vests\tx\jpc_main_amc_co.paa",
			"\gearexp\vests\tx\blwout_amc.paa",
			"\gearexp\vests\tx\holster_amc.paa",
			"\gearexp\vests\tx\kywi_amc_co.paa",
			"\gearexp\vests\tx\C_MG_Pouch_RG_2_co.paa",
			"\gearexp\vests\tx\tt_radio_pouch_amc_co.paa",
			"\gearexp\vests\tx\ronin_belt_amc.paa",
			"\gearexp\vests\tx\C_grenadepouch_amc_co2.paa",
			"\gearexp\vests\tx\C_U_Pouch_Coyote_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\gearexp\vests\mesh\JPC_Weapons_6_MPU5.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[] =
			{
				"_avsb",
				"_cummerbund",
				"_jpcmain",
				"_blwout",
				"_holster",
				"_kywi",
				"_mgpouch",
				"_radiopouch",
				"_belt",
				"_grenpouch",
				"_upouch"
			};
			overlaySelectionsInfo[]= {"ghillie_hide"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=24;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=24;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model = "207_jpc_weapons";
			SETUP = "B";
			CAMO = "AMC";
			BELT = "ON";
		};
	};

////// NO BELTS //////

	class AMC_JPC_Assaulter_10_148_NB: Vest_Camo_Base
	{
		scope=2;
		picture="\gearexp\vests\ui\assves_ca.paa";
		displayname="JPC Vest Assaulter 1, No Belt (AMC)";
		model="\gearexp\vests\mesh\JPC_Assaulter_10_148_NB.p3d";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_material2",
			"_otter"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amc_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amc_co.paa",
			"\gearexp\vests\tx\jpc_main_amc_co.paa",
			"\gearexp\vests\tx\material_2_amc_co.paa",
			"\gearexp\vests\tx\mp_otter_ar_pouch_amc2_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\gearexp\vests\mesh\JPC_Assaulter_10_148_NB.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[] =
			{
				"_avsb",
				"_cummerbund",
				"_jpcmain",
				"_material2",
				"_otter"
			};
			overlaySelectionsInfo[]= {"ghillie_hide"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=24;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=24;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model = "207_jpc_assaulter";
			SETUP = "A";
			CAMO = "AMC";
			BELT = "OFF";
		};
	};
	class AMC_JPC_Assaulter_13_152A_NB: Vest_Camo_Base
	{
		scope=2;
		picture="\gearexp\vests\ui\assves2_ca.paa";
		displayname="JPC Vest Assaulter 2, No Belt (AMC)";
		model="\gearexp\vests\mesh\JPC_Assaulter_13_152A_NB.p3d";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_material2",
			"_otter",
			"_gppouch",
			"_jpc2d"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amc_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amc_co.paa",
			"\gearexp\vests\tx\jpc_main_amc_co.paa",
			"\gearexp\vests\tx\material_2_amc_co.paa",
			"\gearexp\vests\tx\mp_otter_ar_pouch_amc2_co.paa",
			"\gearexp\vests\tx\gppouch1_amc.paa",
			"\gearexp\vests\tx\JPC2D_amc_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\gearexp\vests\mesh\JPC_Assaulter_13_152A_NB.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[] =
			{
				"_avsb",
				"_cummerbund",
				"_jpcmain",
				"_material2",
				"_otter",
				"_gppouch",
				"_jpc2d"
			};
			overlaySelectionsInfo[]= {"ghillie_hide"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=24;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=24;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model = "207_jpc_assaulter";
			SETUP = "B";
			CAMO = "AMC";
			BELT = "OFF";
		};
	};
	class AMC_JPC_Comms_2_Dual_2_NB: Vest_Camo_Base
	{
		scope=2;
		picture="\gearexp\vests\ui\comves_ca.paa";
		displayname="JPC Vest Comms 1, No Belt (AMC)";
		model="\gearexp\vests\mesh\JPC_Comms_2_Dual_2_NB.p3d";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_material2",
			"_gppouch",
			"_paraclete"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amc_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amc_co.paa",
			"\gearexp\vests\tx\jpc_main_amc_co.paa",
			"\gearexp\vests\tx\material_2_amc_co.paa",
			"\gearexp\vests\tx\gppouch1_amc.paa",
			"\gearexp\vests\tx\paracletetriple_amc_CO.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\gearexp\vests\mesh\JPC_Comms_2_Dual_2_NB.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[] =
			{
				"_avsb",
				"_cummerbund",
				"_jpcmain",
				"_material2",
				"_gppouch",
				"_paraclete"
			};
			overlaySelectionsInfo[]= {"ghillie_hide"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=24;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=24;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model = "207_jpc_comms";
			SETUP = "A";
			CAMO = "AMC";
			BELT = "OFF";
		};
	};
	class AMC_JPC_Weapons_2_148_NB: Vest_Camo_Base
	{
		scope=2;
		picture="\gearexp\vests\ui\wepves_ca.paa";
		displayname="JPC Vest Weapons 1, No Belt (AMC)";
		model="\gearexp\vests\mesh\JPC_Weapons_2_148_NB.p3d";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_otter",
			"_mgpouch",
			"_radiopouch",
			"_gloves",
			"_medpouch"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amc_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amc_co.paa",
			"\gearexp\vests\tx\jpc_main_amc_co.paa",
			"\gearexp\vests\tx\mp_otter_ar_pouch_amc2_co.paa",
			"\gearexp\vests\tx\C_MG_Pouch_RG_2_co.paa",
			"\gearexp\vests\tx\tt_radio_pouch_amc_co.paa",
			"\gearexp\vests\tx\gloves.paa",
			"\gearexp\vests\tx\medpouch4_amc.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\gearexp\vests\mesh\JPC_Weapons_2_148_NB.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[] =
			{
				"_avsb",
				"_cummerbund",
				"_jpcmain",
				"_otter",
				"_mgpouch",
				"_radiopouch",
				"_gloves",
				"_medpouch"
			};
			overlaySelectionsInfo[]= {"ghillie_hide"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=24;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=24;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model = "207_jpc_weapons";
			SETUP = "A";
			CAMO = "AMC";
			BELT = "OFF";
		};
	};
	class AMC_JPC_Weapons_6_MPU5_NB: Vest_Camo_Base
	{
		scope=2;
		picture="\gearexp\vests\ui\wepves2_ca.paa";
		displayname="JPC Vest Weapons 2, No Belt (AMC)";
		model="\gearexp\vests\mesh\JPC_Weapons_6_MPU5_NB.p3d";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_mgpouch",
			"_radiopouch"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amc_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amc_co.paa",
			"\gearexp\vests\tx\jpc_main_amc_co.paa",
			"\gearexp\vests\tx\C_MG_Pouch_RG_2_co.paa",
			"\gearexp\vests\tx\tt_radio_pouch_amc_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\gearexp\vests\mesh\JPC_Weapons_6_MPU5_NB.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[] =
			{
				"_avsb",
				"_cummerbund",
				"_jpcmain",
				"_mgpouch",
				"_radiopouch"
			};
			overlaySelectionsInfo[]= {"ghillie_hide"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=24;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=24;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model = "207_jpc_weapons";
			SETUP = "B";
			CAMO = "AMC";
			BELT = "OFF";
		};
	};
    
////// AMP //////

	class AMP_JPC_Assaulter_10_148: AMC_JPC_Assaulter_10_148
    {
        scope = 2;
        displayName = "JPC Vest Assaulter 2 (AMP)";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_material2",
			"_otter",
			"_blwout",
			"_holster",
			"_belt3",
			"_fastmag2",
			"_upouch"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amp_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amp_co.paa",
			"\gearexp\vests\tx\jpc_main_amp_co.paa",
			"\gearexp\vests\tx\material_2_amp_co.paa",
			"\gearexp\vests\tx\mp_otter_ar_pouch_amp2_co.paa",
			"\gearexp\vests\tx\blwout_amp.paa",
			"\gearexp\vests\tx\holster_g.paa",
			"\gearexp\vests\tx\ronin_belt_amp3.paa",
			"\gearexp\vests\tx\C_fastmagpouch_2_amp2_co.paa",
			"\gearexp\vests\tx\C_U_Pouch_AMP_co.paa"
		};
		class ItemInfo: ItemInfo
		{};
		class XtdGearInfo
		{
			model = "207_jpc_assaulter";
			SETUP = "A";
			CAMO = "AMP";
			BELT = "ON";
		};
    };
    class AMP_JPC_Assaulter_13_152A: AMC_JPC_Assaulter_13_152A
    {
        scope = 2;
        displayName = "JPC Vest Assaulter 1 (AMP)";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_material2",
			"_otter",
			"_blwout",
			"_holster",
			"_gppouch",
			"_kywi",
			"_belt3",
			"_jpc2d",
			"_gearasset5"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amp_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amp_co.paa",
			"\gearexp\vests\tx\jpc_main_amp_co.paa",
			"\gearexp\vests\tx\material_2_amp_co.paa",
			"\gearexp\vests\tx\mp_otter_ar_pouch_amp2_co.paa",
			"\gearexp\vests\tx\blwout_amp.paa",
			"\gearexp\vests\tx\holster_g.paa",
			"\gearexp\vests\tx\gppouch1_amp.paa",
			"\gearexp\vests\tx\kywi_amp_co.paa",
			"\gearexp\vests\tx\ronin_belt_amp3.paa",
			"\gearexp\vests\tx\JPC2D_amp_co.paa",
			"\gearexp\vests\tx\GearAsset5_amp_co.paa"
		};
		class ItemInfo: ItemInfo
		{};
		class XtdGearInfo
		{
			model = "207_jpc_assaulter";
			SETUP = "B";
			CAMO = "AMP";
			BELT = "ON";
		};
    };
	class AMP_JPC_Comms_2_Dual_2: AMC_JPC_Comms_2_Dual_2
    {
        scope = 2;
        displayName = "JPC Vest Comms 1 (AMP)";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_material2",
			"_blwout",
			"_holster",
			"_gppouch",
			"_kywi",
			"_belt",
			"_fastmag2",
			"_grenpouch",
			"_paraclete",
			"_fastmag1"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amp_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amp_co.paa",
			"\gearexp\vests\tx\jpc_main_amp_co.paa",
			"\gearexp\vests\tx\material_2_amp_co.paa",
			"\gearexp\vests\tx\blwout_amp.paa",
			"\gearexp\vests\tx\holster_g.paa",
			"\gearexp\vests\tx\gppouch1_amp.paa",
			"\gearexp\vests\tx\kywi_amp_co.paa",
			"\gearexp\vests\tx\ronin_belt_amp.paa",
			"\gearexp\vests\tx\C_fastmagpouch_2_amp2_co.paa",
			"\gearexp\vests\tx\C_grenadepouch_amp_co2.paa",
			"\gearexp\vests\tx\paracletetriple_amp_CO.paa",
			"\gearexp\vests\tx\C_fastmagpouch_2_amp_co.paa"
		};
		class ItemInfo: ItemInfo
		{};
		class XtdGearInfo
		{
			model = "207_jpc_comms";
			SETUP = "A";
			CAMO = "AMP";
			BELT = "ON";
		};
    };
	class AMP_JPC_Weapons_2_148: AMC_JPC_Weapons_2_148
    {
        scope = 2;
        displayName = "JPC Vest Weapons 1 (AMP)";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_otter",
			"_blwout",
			"_holster",
			"_kywi",
			"_mgpouch",
			"_radiopouch",
			"_belt",
			"_gloves",
			"_medpouch"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amp_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amp_co.paa",
			"\gearexp\vests\tx\jpc_main_amp_co.paa",
			"\gearexp\vests\tx\mp_otter_ar_pouch_amp2_co.paa",
			"\gearexp\vests\tx\blwout_amp.paa",
			"\gearexp\vests\tx\holster_g.paa",
			"\gearexp\vests\tx\kywi_amp_co.paa",
			"\gearexp\vests\tx\C_MG_Pouch_G_2_co.paa",
			"\gearexp\vests\tx\tt_radio_pouch_amp_co.paa",
			"\gearexp\vests\tx\ronin_belt_amp.paa",
			"\gearexp\vests\tx\gloves_g.paa",
			"\gearexp\vests\tx\medpouch4_amp.paa"
		};
		class ItemInfo: ItemInfo
		{};
		class XtdGearInfo
		{
			model = "207_jpc_weapons";
			SETUP = "A";
			CAMO = "AMP";
			BELT = "ON";
		};
    };
	class AMP_JPC_Weapons_6_MPU5: AMC_JPC_Weapons_6_MPU5
    {
        scope = 2;
        displayName = "JPC Vest Weapons 2 (AMP)";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_blwout",
			"_holster",
			"_kywi",
			"_mgpouch",
			"_radiopouch",
			"_belt",
			"_grenpouch",
			"_upouch"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amp_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amp_co.paa",
			"\gearexp\vests\tx\jpc_main_amp_co.paa",
			"\gearexp\vests\tx\blwout_amp.paa",
			"\gearexp\vests\tx\holster_g.paa",
			"\gearexp\vests\tx\kywi_amp_co.paa",
			"\gearexp\vests\tx\C_MG_Pouch_G_2_co.paa",
			"\gearexp\vests\tx\tt_radio_pouch_amp_co.paa",
			"\gearexp\vests\tx\ronin_belt_amp.paa",
			"\gearexp\vests\tx\C_grenadepouch_amp_co2.paa",
			"\gearexp\vests\tx\C_U_Pouch_AMP_co.paa"
		};
		class ItemInfo: ItemInfo
		{};
		class XtdGearInfo
		{
			model = "207_jpc_weapons";
			SETUP = "B";
			CAMO = "AMP";
			BELT = "ON";
		};
    };

////// NO BELT //////

	class AMP_JPC_Assaulter_10_148_NB: AMC_JPC_Assaulter_10_148_NB
    {
        scope = 2;
        displayName = "JPC Vest Assaulter 2, No Belt (AMP)";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_material2",
			"_otter"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amp_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amp_co.paa",
			"\gearexp\vests\tx\jpc_main_amp_co.paa",
			"\gearexp\vests\tx\material_2_amp_co.paa",
			"\gearexp\vests\tx\mp_otter_ar_pouch_amp2_co.paa"
		};
		class ItemInfo: ItemInfo
		{};
		class XtdGearInfo
		{
			model = "207_jpc_assaulter";
			SETUP = "A";
			CAMO = "AMP";
			BELT = "OFF";
		};
    };
	class AMP_JPC_Assaulter_13_152A_NB: AMC_JPC_Assaulter_13_152A_NB
    {
        scope = 2;
        displayName = "JPC Vest Assaulter 1, No Belt (AMP)";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_material2",
			"_otter",
			"_gppouch",
			"_jpc2d"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amp_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amp_co.paa",
			"\gearexp\vests\tx\jpc_main_amp_co.paa",
			"\gearexp\vests\tx\material_2_amp_co.paa",
			"\gearexp\vests\tx\mp_otter_ar_pouch_amp2_co.paa",
			"\gearexp\vests\tx\gppouch1_amp.paa",
			"\gearexp\vests\tx\JPC2D_amp_co.paa"
		};
		class ItemInfo: ItemInfo
		{};
		class XtdGearInfo
		{
			model = "207_jpc_assaulter";
			SETUP = "B";
			CAMO = "AMP";
			BELT = "OFF";
		};
    };
	class AMP_JPC_Comms_2_Dual_2_NB: AMC_JPC_Comms_2_Dual_2_NB
    {
        scope = 2;
        displayName = "JPC Vest Comms 1, No Belt (AMP)";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_material2",
			"_gppouch",
			"_paraclete"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amp_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amp_co.paa",
			"\gearexp\vests\tx\jpc_main_amp_co.paa",
			"\gearexp\vests\tx\material_2_amp_co.paa",
			"\gearexp\vests\tx\gppouch1_amp.paa",
			"\gearexp\vests\tx\paracletetriple_amp_CO.paa"
		};
		class ItemInfo: ItemInfo
		{};
		class XtdGearInfo
		{
			model = "207_jpc_comms";
			SETUP = "A";
			CAMO = "AMP";
			BELT = "OFF";
		};
    };
	class AMP_JPC_Weapons_2_148_NB: AMC_JPC_Weapons_2_148_NB
    {
        scope = 2;
        displayName = "JPC Vest Weapons 1, No Belt (AMP)";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_otter",
			"_mgpouch",
			"_radiopouch",
			"_gloves",
			"_medpouch"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amp_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amp_co.paa",
			"\gearexp\vests\tx\jpc_main_amp_co.paa",
			"\gearexp\vests\tx\mp_otter_ar_pouch_amp2_co.paa",
			"\gearexp\vests\tx\C_MG_Pouch_G_2_co.paa",
			"\gearexp\vests\tx\tt_radio_pouch_amp_co.paa",
			"\gearexp\vests\tx\gloves_g.paa",
			"\gearexp\vests\tx\medpouch4_amp.paa"
		};
		class ItemInfo: ItemInfo
		{};
		class XtdGearInfo
		{
			model = "207_jpc_weapons";
			SETUP = "A";
			CAMO = "AMP";
			BELT = "OFF";
		};
    };
	class AMP_JPC_Weapons_6_MPU5_NB: AMC_JPC_Weapons_6_MPU5_NB
    {
        scope = 2;
        displayName = "JPC Vest Weapons 2, No Belt (AMP)";
		hiddenSelections[]=
		{
			"_avsb",
			"_cummerbund",
			"_jpcmain",
			"_mgpouch",
			"_radiopouch"
		};
		hiddenSelectionsTextures[]=
		{
			"\gearexp\vests\tx\avs_b_amp_co.paa",
			"\gearexp\vests\tx\jpc_cummerbund_amp_co.paa",
			"\gearexp\vests\tx\jpc_main_amp_co.paa",
			"\gearexp\vests\tx\C_MG_Pouch_G_2_co.paa",
			"\gearexp\vests\tx\tt_radio_pouch_amp_co.paa"
		};
		class ItemInfo: ItemInfo
		{};
		class XtdGearInfo
		{
			model = "207_jpc_weapons";
			SETUP = "B";
			CAMO = "AMP";
			BELT = "OFF";
		};
    };
