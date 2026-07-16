class CfgPatches
{
	class USASOC_backpacks_cut_2
	{
		units[]=
		{
			"Assault_Pack"
		};
		weapons[]=
		{};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"usasoc_backpacks_cut",
			"A3_Weapons_F_Ammoboxes"
		};
	};
};
class CfgVehicles
{
	class B_AssaultPack_mcamo;
	class Assault_Pack: B_AssaultPack_mcamo
	{
		author="Mac n Socks";
		scope=2;
		displayName="JPC Backpanel, Assaulter";
		model="USASOC_backpacks_2\JPCPanel1.p3d";
		picture="USASOC_backpacks_2\ui\assbag_ca.paa";
		maximumLoad=300;
		mass=30;
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
};
