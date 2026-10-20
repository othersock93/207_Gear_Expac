class B_Soldier_base_F;
// gloves ///
class 207_g3_base_v: B_Soldier_base_F
{
	scope = 0;
	camouflage = 1;
	scopeArsenal = 0;
	author="Mac n Socks";
	model = "\gearexp\uni\mesh\207_g3_g.p3d";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	uniformClass = "207_g3_g_w";
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
	vehicleClass = "Men";
	modelSides[] = {3,2,1,0};
};
class 207_g3_g_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	camouflage = 1;
	author="Mac n Socks";
	model = "\gearexp\uni\mesh\207_g3_g.p3d";
	uniformClass = "207_g3_g_w";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves", 
		"_pads", 
		"_cuffs",
		"_boots",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\gunglove_grey_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"",
		"gearexp\uni\tx\salomon_tan_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_r1_g_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3_r1_g.p3d";
	uniformClass = "207_g3_r1_g_w";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom",
		"_gloves", 
		"_pads", 
		"_cuffs", 
		"_boots",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\gunglove_grey_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\cuffs_amc_co.paa", 
		"gearexp\uni\tx\salomon_tan_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_r2_g_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3_r2_g.p3d";
	uniformClass = "207_g3_r2_g_w";
	picture = "\gearexp\uni\ui\uni1_ca.paa";
	hiddenSelections[] = 
	{
		"_top",
		"_bottom", 
		"_gloves", 
		"_pads", 
		"_cuffs", 
		"_boots",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\gunglove_grey_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\cuffs_amc_co.paa", 
		"gearexp\uni\tx\salomon_tan_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_np_g_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "gearexp\uni\mesh\207_g3_g.p3d";
	uniformClass = "207_g3_g_w";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves", 
		"_pads",  
		"_cuffs",
		"_boots",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\gunglove_grey_co.paa", 
		"", 
		"",
		"gearexp\uni\tx\salomon_tan_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_r1_np_g_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3_r1_g.p3d";
	uniformClass = "207_g3_r1_g_w";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves", 
		"_pads", 
		"_cuffs", 
		"_boots",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\gunglove_grey_co.paa", 
		"", 
		"gearexp\uni\tx\cuffs_amc_co.paa", 
		"gearexp\uni\tx\salomon_tan_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_r2_np_g_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3_r2_g.p3d";
	uniformClass = "207_g3_r2_g_w";
	picture = "\gearexp\uni\ui\uni1_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves", 
		"_pads", 
		"_cuffs", 
		"_boots",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\gunglove_grey_co.paa", 
		"", 
		"gearexp\uni\tx\cuffs_amc_co.paa", 
		"gearexp\uni\tx\salomon_tan_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_r1_g_s_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3_r1_g_s.p3d";
	uniformClass = "207_g3_r1_g_s_w";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves", 
		"_pads", 
		"_cuffs",  
		"_boots", 
		"_sleeve",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\gunglove_grey_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\cuffs_amc_co.paa", 
		"gearexp\uni\tx\salomon_tan_co.paa", 
		"gearexp\uni\tx\sleeve_blk_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_r2_g_s_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3_r2_g_s.p3d";
	uniformClass = "207_g3_r2_g_s_w";
	picture = "\gearexp\uni\ui\uni1_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves", 
		"_pads", 
		"_cuffs", 
		"_boots", 
		"_sleeve",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\gunglove_grey_co.paa",
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\cuffs_amc_co.paa", 
		"gearexp\uni\tx\salomon_tan_co.paa", 
		"gearexp\uni\tx\sleeve_blk_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_r1_np_g_s_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3_r1_g_s.p3d";
	uniformClass = "207_g3_r1_g_s_w";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves", 
		"_pads", 
		"_cuffs", 
		"_boots", 
		"_sleeve",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\gunglove_grey_co.paa", 
		"", 
		"gearexp\uni\tx\cuffs_amc_co.paa", 
		"gearexp\uni\tx\salomon_tan_co.paa", 
		"gearexp\uni\tx\sleeve_blk_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_r2_np_g_s_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3_r2_g_s.p3d";
	uniformClass = "207_g3_r2_g_s_w";
	picture = "\gearexp\uni\ui\uni1_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves", 
		"_pads", 
		"_cuffs", 
		"_boots", 
		"_sleeve",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\gunglove_grey_co.paa", 
		"", 
		"gearexp\uni\tx\cuffs_amc_co.paa", 
		"gearexp\uni\tx\salomon_tan_co.paa", 
		"gearexp\uni\tx\sleeve_blk_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};

/// hands ///
class 207_g3_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3.p3d";
	uniformClass = "207_g3_g_w";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves",
		"_pads", 
		"_cuffs",
		"_boots",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"",
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"",
		"gearexp\uni\tx\salomon_tan_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_r1_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3_r1.p3d";
	uniformClass = "207_g3_r1_g_w";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	hiddenSelections[] = 
	{
		"_top",
		"_bottom",
		"_gloves",
		"_pads",
		"_cuffs",
		"_boots",
		"_patchR",
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa",  
		"",
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\cuffs_amc_co.paa", 
		"gearexp\uni\tx\salomon_tan_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_r2_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3_r2.p3d";
	uniformClass = "207_g3_r3_g_w";
	picture = "\gearexp\uni\ui\uni1_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom",
		"_gloves", 
		"_pads", 
		"_cuffs", 
		"_boots",
		"_patchR",
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"",
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\cuffs_amc_co.paa", 
		"gearexp\uni\tx\salomon_tan_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_np_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3.p3d";
	uniformClass = "207_g3_np_w";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves",
		"_pads", 
		"_cuffs",
		"_boots",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa",
		"", 
		"", 
		"",
		"gearexp\uni\tx\salomon_tan_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_r1_np_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3_r1.p3d";
	uniformClass = "207_g3_r1_np_w";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves",
		"_pads", 
		"_cuffs", 
		"_boots",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"",
		"", 
		"gearexp\uni\tx\cuffs_amc_co.paa", 
		"gearexp\uni\tx\salomon_tan_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_r2_np_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3_r2.p3d";
	uniformClass = "207_g3_r2_np_w";
	picture = "\gearexp\uni\ui\uni1_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves",
		"_pads", 
		"_cuffs", 
		"_boots",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa",  
		"",
		"", 
		"gearexp\uni\tx\cuffs_amc_co.paa", 
		"gearexp\uni\tx\salomon_tan_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_r1_s_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3_r1_s.p3d";
	uniformClass = "207_g3_r1_g_s_w";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves",
		"_pads", 
		"_cuffs", 
		"_boots", 
		"_sleeve",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"",
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\cuffs_amc_co.paa", 
		"gearexp\uni\tx\salomon_tan_co.paa", 
		"gearexp\uni\tx\sleeve_blk_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_r2_s_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3_r2_s.p3d";
	uniformClass = "207_g3_r3_g_s_w";
	picture = "\gearexp\uni\ui\uni1_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves",
		"_pads", 
		"_cuffs", 
		"_boots", 
		"_sleeve",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"",
		"gearexp\uni\tx\g3_bottom_amc_co.paa", 
		"gearexp\uni\tx\cuffs_amc_co.paa", 
		"gearexp\uni\tx\salomon_tan_co.paa", 
		"gearexp\uni\tx\sleeve_blk_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_r1_np_s_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3_r1_s.p3d";
	uniformClass = "207_g3_r1_np_s_w";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves",
		"_pads", 
		"_cuffs", 
		"_boots", 
		"_sleeve",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa",  
		"",
		"", 
		"gearexp\uni\tx\cuffs_amc_co.paa", 
		"gearexp\uni\tx\salomon_tan_co.paa", 
		"gearexp\uni\tx\sleeve_blk_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
class 207_g3_r2_np_s_v: 207_g3_base_v
{
	scope = 1;
	scopeArsenal = 2;
	model = "\gearexp\uni\mesh\207_g3_r2_s.p3d";
	uniformClass = "207_g3_r2_np_s_w";
	picture = "\gearexp\uni\ui\uni1_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves",
		"_pads", 
		"_cuffs", 
		"_boots", 
		"_sleeve",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"gearexp\uni\tx\g3_top_amc_co.paa", 
		"gearexp\uni\tx\g3_bottom_amc_co.paa",  
		"",
		"", 
		"gearexp\uni\tx\cuffs_amc_co.paa", 
		"gearexp\uni\tx\salomon_tan_co.paa", 
		"gearexp\uni\tx\sleeve_blk_co.paa",
		"gearexp\uni\tx\207_CO.paa",
		"gearexp\uni\tx\207_CO.paa"
	};
};
