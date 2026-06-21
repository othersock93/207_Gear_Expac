	class CfgWeapons
	{
		class patch_helm
		{
			label = "Team Wendy EXFIL";
			author = "Socks | ADF Re-Cut";
			options[] =
			{
				"earpro",
				"scrim",
				"patch"
			};
			class earpro
			{
				label = "Earpro";
				values[] =
				{
					"comtac",
					"amps"
				};
				class comtac
				{
					label = "Comtac-6";
					description = "Comtac-6";
				};
				class amps
				{
					label = "Amps";
					description = "Amps";
				};
			};
			class scrim
			{
				label = "Scrim";
				values[] = 
				{
					"on",
					"off"
				};
				class on
				{
					label = "On";
					description = "Scrim On";
				};
				class off
				{
					label = "Off";
					description = "Scrim Off";
				};
			};
			class patch
			{
				label = "Morale Patch";
				values[] =
				{
					"D207",
					"PHQ",
					"Alpha",
					"Bravo",
					"Charlie",
					"Reaper",
					"SHQ",
					"Foxtrot",
					"Ghost",
					"Defend",
					"Pride"
				};
				class D207
				{
					label = "D207";
					image = "207 Skull";
				};
				class PHQ
				{
					label = "1-1 PHQ";
					image = "Platoon HQ";
				};
				class Alpha
				{
					label = "1-1 Alpha";
					image = "Alpha Section";
				};
				class Bravo
				{
					label = "1-1 Bravo";
					image = "Bravo Section";
				};
				class Charlie
				{
					label = "1-1 Charlie";
					image = "Charlie Section";
				};
				class Reaper
				{
					label = "1-1 Reaper";
					image = "Reaper DFSW";
				};
				class SHQ
				{
					label = "1-5 SHQ";
					image = "Support HQ";
				};
				class Foxtrot
				{
					label = "1-5 Foxtrot";
					image = "Foxtrot and Daisy";
				};
				class Ghost
				{
					label = "1-5 Ghost";
					image = "Ghost Element";
				};
				class Defend
				{
					label = "Defend";
					image = "Defend Equality";
				};
				class Pride
				{
					label = "Pride";
					image = "Pride!";
				};
			};
		};
	};