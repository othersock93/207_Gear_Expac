	class B_Soldier_base_F;

	class 207_amcu: B_Soldier_base_F
	{
		author = "Socks";
		vehicleClass = "Men";
		scope = 1;
		displayName = "Crye G3 Combat Fatigues (AMCU)";
		picture = "\sox_extras\uni\ui\sleeve_ca.paa";
		identityTypes[] = {"Head_NATO", "G_NATO_default"};
		modelSides[] = {3,2,1,0};
		model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		uniformClass = "207_amcu_U";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"sox_extras\uni\tx\207amc_uni.paa"};
	};
	class 207_amcu_R: B_Soldier_base_F
	{
		author = "Socks";
		vehicleClass = "Men";
		scope = 1;
		displayName = "Crye G3 Combat Fatigues (AMCU/Rolled)";
		picture = "\sox_extras\uni\ui\roll_ca.paa";
		identityTypes[] = {"Head_NATO", "G_NATO_default"};
		modelSides[] = {3,2,1,0};
		model = "\A3\characters_f\BLUFOR\b_soldier_03.p3d";
		uniformClass = "207_amcu_RU";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"sox_extras\uni\tx\207amc_uni.paa"};
	};
