class UniformItem;
class Uniform_Base;

/// gloves ///
class 207_g3_base_w: Uniform_Base
{
	scope = 0;
	scopeArsenal = 0;
	author="Mac n Socks";
	displayName = "Crye G3 Base";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"gearexp\uni\tx\g3_top_mc_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformClass = "207_g3_g_v";
		uniformModel = "-";
		containerClass = "Supply40";
		mass = 40;
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "full";
		gloves = "on";
		pads = "on";
		arms = "off";
	};
};
class 207_g3_g_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	author="Mac n Socks";
	displayName = "Crye G3, Full [G/P] (207)";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_g_v";
		uniformModel = "-";
		containerClass = "Supply40";
		mass = 40;
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "full";
		gloves = "on";
		pads = "on";
		arms = "off";
	};
};
class 207_g3_r1_g_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/4 Roll [G/P] (207)";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_r1_g_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "quarter";
		gloves = "on";
		pads = "on";
		arms = "off";
	};
};
class 207_g3_r2_g_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/2 Roll [G/P] (207)";
	picture = "\gearexp\uni\ui\uni1_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_r2_g_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "half";
		gloves = "on";
		pads = "on";
		arms = "off";
	};
};
class 207_g3_np_g_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, Full [G] (207)";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_np_g_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "full";
		gloves = "on";
		pads = "off";
		arms = "off";
	};
};
class 207_g3_r1_np_g_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/4 Roll [G] (207)";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_r1_np_g_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "quarter";
		gloves = "on";
		pads = "off";
		arms = "off";
	};
};
class 207_g3_r2_np_g_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/2 Roll [G] (207)";
	picture = "\gearexp\uni\ui\uni1_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_r2_np_g_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "half";
		gloves = "on";
		pads = "off";
		arms = "off";
	};
};
class 207_g3_r1_g_s_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/4 Roll [G/P/S] (207)";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_r1_g_s_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "quarter";
		gloves = "on";
		pads = "on";
		arms = "on";
	};
};
class 207_g3_r2_g_s_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/2 Roll [G/P/S] (207)";
	picture = "\gearexp\uni\ui\uni1_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_r2_g_s_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "half";
		gloves = "on";
		pads = "on";
		arms = "on";
	};
};
class 207_g3_r1_np_g_s_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/4 Roll [G/S] (207)";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_r1_np_g_s_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "quarter";
		gloves = "on";
		pads = "off";
		arms = "on";
	};
};
class 207_g3_r2_np_g_s_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/2 Roll [G/S] (207)";
	picture = "\gearexp\uni\ui\uni1_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_r2_np_g_s_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "half";
		gloves = "on";
		pads = "off";
		arms = "on";
	};
};

/// hands ///
class 207_g3_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, Full [P] (207)";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "full";
		gloves = "off";
		pads = "on";
		arms = "off";
	};
};
class 207_g3_r1_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/4 Roll [P] (207)";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_r1_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "quarter";
		gloves = "off";
		pads = "on";
		arms = "off";
	};
};
class 207_g3_r2_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/2 Roll [P] (207)";
	picture = "\gearexp\uni\ui\uni1_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_r2_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "half";
		gloves = "off";
		pads = "on";
		arms = "off";
	};
};
class 207_g3_np_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, Full (207)";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_np_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "full";
		gloves = "off";
		pads = "off";
		arms = "off";
	};
};
class 207_g3_r1_np_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/4 Roll (207)";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_r1_np_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "quarter";
		gloves = "off";
		pads = "off";
		arms = "off";
	};
};
class 207_g3_r2_np_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/2 Roll (207)";
	picture = "\gearexp\uni\ui\uni1_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_r2_np_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "half";
		gloves = "off";
		pads = "off";
		arms = "off";
	};
};
class 207_g3_r1_s_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/4 Roll [P/S] (207)";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_r1_s_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "quarter";
		gloves = "off";
		pads = "on";
		arms = "on";
	};
};
class 207_g3_r2_s_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/2 Roll [P/S] (207)";
	picture = "\gearexp\uni\ui\uni1_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_r2_s_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "half";
		gloves = "off";
		pads = "on";
		arms = "on";
	};
};
class 207_g3_r1_np_s_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/4 Roll [S] (207)";
	picture = "\gearexp\uni\ui\g3_mc_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_r1_np_s_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "quarter";
		gloves = "off";
		pads = "off";
		arms = "on";
	};
};
class 207_g3_r2_np_s_w: 207_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/2 Roll [S] (207)";
	picture = "\gearexp\uni\ui\uni1_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "207_g3_r2_np_s_v";
	};
	class XtdGearInfo
	{
		model = "207_g3_u";
		sleeves = "half";
		gloves = "off";
		pads = "off";
		arms = "on";
	};
};