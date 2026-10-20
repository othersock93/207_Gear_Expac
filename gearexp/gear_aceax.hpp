    class CfgWeapons {
        class 207_jpc_assaulter
        {
            options[] = 
			{
				"SETUP", 
				"CAMO",
                "BELT"
			}; 
            label = "JPC Assaulter";
            class SETUP
            {
                label = "Loadout";
                alwaysSelectable = 1;
                values[] = 
				{
					"A", 
					"B"
				}; 
            };
            class CAMO
            {
                label = "Camouflage";
                values[] =
                {
                    "AMC",
                    "AMP"
                };
                class AMC
                {
                    image = "gearexp\ui\amc.paa";
                };
                class AMP
                {
                    image = "gearexp\ui\amp.paa";
                };
            };
            class BELT
            {
                label = "Battle Belt";
                alwaysSelectable = 1;
                values[] = 
				{ 
					"ON", 
					"OFF"
				}; 
            };
        };
        class 207_jpc_comms
        {
            options[] = 
			{
				"SETUP", 
                "CAMO",
				"BELT"
			}; 
            label = "JPC Comms";
            class SETUP
            {
                label = "Loadout";
                alwaysSelectable = 1;
                values[] = 
				{
					"A"
				}; 
            };
            class CAMO
            {
                label = "Camouflage";
                values[] =
                {
                    "AMC",
                    "AMP"
                };
                class AMC
                {
                    image = "gearexp\ui\amc.paa";
                };
                class AMP
                {
                    image = "gearexp\ui\amp.paa";
                };
            };
            class BELT
            {
                label = "Battle Belt";
                alwaysSelectable = 1;
                values[] = 
				{ 
					"ON", 
					"OFF"
				}; 
            };
        };
        class 207_jpc_weapons
        {
            options[] = 
			{
				"SETUP", 
                "CAMO",
				"BELT"
			}; 
            label = "JPC Weapons";
            class SETUP
            {
                label = "Loadout";
                alwaysSelectable = 1;
                values[] = 
				{
					"A",
					"B"
				}; 
            };
            class CAMO
            {
                label = "Camouflage";
                values[] =
                {
                    "AMC",
                    "AMP"
                };
                class AMC
                {
                    image = "gearexp\ui\amc.paa";
                };
                class AMP
                {
                    image = "gearexp\ui\amp.paa";
                };
            };
            class BELT
            {
                label = "Battle Belt";
                alwaysSelectable = 1;
                values[] = 
				{ 
					"ON", 
					"OFF"
				}; 
            };
        };

		class 207_g3_u
		{
			label = "Crye G3 Combat Dress";
			author = "207";
			options[] = 
			{
				"sleeves",
				"gloves",
				"pads",
				"arms"
			};
			textureOptions[] =
			{
				"camo",
				"glove_co",
				"boot_co",
				"patch"
			};
			class camo
			{
				label = "Camo";
				values[] = 
				{
					"AMC",
					"AMP",
					"MC"
				};
				hiddenSelections[] = 
				{
					"_top",
					"_bottom",
					"_cuffs"
				};
				class AMC
				{
					textures[] = 
					{
						"gearexp\uni\tx\g3_top_amc_co.paa", 
						"gearexp\uni\tx\g3_bottom_amc_co.paa",
						"gearexp\uni\tx\cuffs_amc_co.paa"
					};
					image = "gearexp\ui\amc.paa";
				};
				class AMP
				{
					textures[] =
					{
						"gearexp\uni\tx\g3_top_amp_co.paa", 
						"gearexp\uni\tx\g3_bottom_amp_co.paa",
						"gearexp\uni\tx\cuffs_mc_co.paa"
					};
					image = "gearexp\ui\amp.paa";
				};
				class MC
				{
					textures[] =
					{
						"gearexp\uni\tx\g3_top_mc_co.paa", 
						"gearexp\uni\tx\g3_bottom_mc_co.paa",
						"gearexp\uni\tx\cuffs_mc_co.paa"
					};
					image = "gearexp\ui\mc.paa";
				};
			};
			class glove_co
			{
				label = "Glove Colour";
				values[] = 
				{
					"Black",
					"Brown"
				};
				hiddenSelection = "_gloves";
				class Black
				{
					texture = "gearexp\uni\tx\gunglove_grey_CO.paa";
					image = "gearexp\ui\blk.paa";
				};
				class Brown
				{
					texture = "gearexp\uni\tx\gunglove_brown_CO.paa";
					image = "gearexp\ui\brwn.paa";
				};
			};
			class boot_co
			{
				label = "Boot Colour";
				values[] = 
				{
					"Brown",
					"Tan"
				};
				hiddenSelection = "_boots";
				class Brown
				{
					texture = "gearexp\uni\tx\salomon_brown_co.paa";
					image = "gearexp\ui\brwn.paa";
				};
				class Tan
				{
					texture = "gearexp\uni\tx\salomon_tan_co.paa";
					image = "gearexp\ui\cb.paa";
				};
			};
			class patch
			{
				label = "Patch Type";
				values[] =
				{
					"Lo",
					"Hi"
				};
				hiddenSelections[] =
				{
					"_patchR",
					"_patchL"
				};
				class Lo
				{
					label = "Low Vis";
					textures[] =
					{
						"gearexp\uni\tx\207lo_CO.paa",
						"gearexp\uni\tx\207lo_CO.paa"
					};
				};
				class Hi
				{
					label = "Colour";
					textures[] =
					{
						"gearexp\uni\tx\207_CO.paa",
						"gearexp\uni\tx\207_CO.paa"
					};
				};
			};
			class sleeves
			{
				label = "Sleeves";
				values[] =
				{
					"full",
					"half",
					"quarter"
				};
				class full
				{
					label = "Full";
					description = "No Roll";
				};
				class half
				{
					label = "1/2";
					description = "Half Roll";
				};
				class quarter
				{
					label = "1/4";
					description = "Quarter Roll";
				};
			};
			class gloves
			{
				label = "Gloves";
				values[] = 
				{
					"on",
					"off"
				};
				class on
				{
					label = "On";
					description = "No Gloves";
				};
				class off
				{
					label = "Off";
					description = "Gloves";
				};
			};
			class pads
			{
				label = "Knee Pads";
				values[] =
				{
					"on",
					"off"
				};
				class on
				{
					label = "On";
					description = "No Kneepads";
				};
				class off
				{
					label = "Off";
					description = "Kneepads";
				};
			};
			class arms
			{
				label = "Undershirt";
				values[] =
				{
					"on",
					"off"
				};
				class on
				{
					label = "On";
					description = "No Undershirt";
				};
				class off
				{
					label = "Off";
					description = "Undershirt";
				};
			};
		};
    };
    class CfgVehicles
    {
        class medic
        {
            options[] = 
            {
                "CAMO"
            };
            class CAMO
            {
                label = "Camouflage";
                values[] =
                {
                    "AMC",
                    "AMP"
                };
                class AMC
                {
                    image = "gearexp\ui\amc.paa";
                };
                class AMP
                {
                    image = "gearexp\ui\amp.paa";
                };
            };
        };
        class jtac
        {
            options[] = 
            {
                "CAMO"
            };
            class CAMO
            {
                label = "Camouflage";
                values[] =
                {
                    "AMC",
                    "AMP"
                };
                class AMC
                {
                    image = "gearexp\ui\amc.paa";
                };
                class AMP
                {
                    image = "gearexp\ui\amp.paa";
                };
            };
        };
        class mg
        {
            options[] = 
            {
                "CAMO"
            };
            class CAMO
            {
                label = "Camouflage";
                values[] =
                {
                    "AMC",
                    "AMP"
                };
                class AMC
                {
                    image = "gearexp\ui\amc.paa";
                };
                class AMP
                {
                    image = "gearexp\ui\amp.paa";
                };
            };
        };
        class sapper
        {
            options[] = 
            {
                "CAMO"
            };
            class CAMO
            {
                label = "Camouflage";
                values[] =
                {
                    "AMC",
                    "AMP"
                };
                class AMC
                {
                    image = "gearexp\ui\amc.paa";
                };
                class AMP
                {
                    image = "gearexp\ui\amp.paa";
                };
            };
        };
        class assault
        {
            options[] = 
            {
                "CAMO"
            };
            class CAMO
            {
                label = "Camouflage";
                values[] =
                {
                    "AMC",
                    "AMP"
                };
                class AMC
                {
                    image = "gearexp\ui\amc.paa";
                };
                class AMP
                {
                    image = "gearexp\ui\amp.paa";
                };
            };
        };
 	 };
