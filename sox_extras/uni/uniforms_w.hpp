	class Uniform_Base;
	class UniformItem;

	class 207_amcu_U: Uniform_Base 
	{ 
		scope = 2;
		author = "Socks";
		displayName = "Crye G3 Combat Fatigues (207)";
		picture = "\sox_extras\uni\ui\sleeve_ca.paa";
		model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\sox_extras\uni\tx\amc_suitpack.paa"};
		class ItemInfo: UniformItem 
		{
			uniformModel = "-";
			uniformClass = "207_amcu"; 
			containerClass = "Supply40";
			mass = 40;
		};
		class XtdGearInfo
		{
			model = "g3_207";
			sleeves = "full";
		};
	};
	class 207_amcu_RU: Uniform_Base 
	{ 
		scope = 2;
		author = "Socks";
		displayName = "Crye G3 Combat Fatigues (207/Rolled)";
		picture = "\sox_extras\uni\ui\roll_ca.paa";
		model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\sox_extras\uni\tx\amc_suitpack.paa"};
		class ItemInfo: UniformItem 
		{
			uniformModel = "-";
			uniformClass = "207_amcu_R"; 
			containerClass = "Supply40";
			mass = 40;
		};
		class XtdGearInfo
		{
			model = "g3_207";
			sleeves = "roll";
		};
	};
