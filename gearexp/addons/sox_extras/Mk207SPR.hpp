class CfgAmmo
{
	class B_556x45_Ball;
	
	class Mk207_SPR: B_556x45_Ball
	{
		airFriction=-0.00085157;
		caliber=2.0;
		hit=16;
        ACE_caliber=5.69;
        ACE_bulletLength=23.012;
        ACE_bulletMass=3.0176;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.504};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={780, 886, 950};
        ACE_barrelLengths[]={254.0, 393.7, 508.0};
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class Mk207_SPR_IR: Mk207_SPR
	{
		nvgOnly = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
	};
};

class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class 30Rnd_556x45_Stanag_Tracer_Red;
	class 30Rnd_556x45_Stanag_Sand_red;
	class 30Rnd_556x45_Stanag_Sand_Tracer_Red;
	class ADFRC_30Rnd_aug;
	class ADFRC_30Rnd_aug_TR;
	class ADFRC_100Rnd_556_Minimi;
	class ADFRC_200Rnd_556_Minimi;
	class ADFRC_250Rnd_556_Minimi;
	class rhs_mag_30Rnd_556x45_M855_PMAG;
	class rhs_mag_30Rnd_556x45_M855_PMAG_Tan;
	class rhsusf_100Rnd_556x45_M855_soft_pouch_coyote;
	class rhsusf_200rnd_556x45_M855_box;
	class rhsusf_200Rnd_556x45_M855_soft_pouch_coyote;

	class Mk207_SPR_Mag: 30Rnd_556x45_Stanag
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm STANAG Mk207 SPR";
		displayNameShort = "Mk207 SPR";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		lastRoundsTracer = 0;
	};
	class Mk207_SPR_Mag_Sand: 30Rnd_556x45_Stanag_Sand_red
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm STANAG Mk207 SPR";
		displayNameShort = "Mk207 SPR";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		lastRoundsTracer = 0;
	};
	class Mk207_SPR_Mag_TR: 30Rnd_556x45_Stanag_Tracer_Red
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm STANAG Mk207 SPR (Tracers)";
		displayNameShort = "Mk207 SPR Tracer";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 1;
	};
	class Mk207_SPR_Mag_Sand_TR: 30Rnd_556x45_Stanag_Sand_Tracer_Red
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm STANAG Mk207 SPR (Tracers)";
		displayNameShort = "Mk207 SPR Tracer";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 1;
	};
	class Mk207_SPR_Mag_IR: Mk207_SPR_Mag_TR
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm STANAG Mk207 SPR (IR-DIM)";
		displayNameShort = "Mk207 SPR IR-DIM";
	};
	class Mk207_SPR_Mag_Sand_IR: Mk207_SPR_Mag_Sand_TR
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm STANAG Mk207 SPR (IR-DIM)";
		displayNameShort = "Mk207 SPR IR-DIM";
	};

	class Mk207_SPR_Steyr_Mag: ADFRC_30Rnd_aug
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm Steyr Mk207 SPR";
		displayNameShort = "Mk207 SPR";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		lastRoundsTracer = 4;
	};
	class Mk207_SPR_Steyr_Mag_TR: ADFRC_30Rnd_aug_TR
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm Steyr Mk207 SPR (Tracers)";
		displayNameShort = "Mk207 SPR Tracer";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 1;
	};
	class Mk207_SPR_Steyr_Mag_IR: Mk207_SPR_Steyr_Mag_TR
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm Steyr Mk207 SPR (IR-DIM)";
		displayNameShort = "Mk207 SPR IR-DIM";
		picture = "\ADF_Weapons\adfrc_magazines\UI\gear_aug_mag_tir_ca.paa";
	};

	class Mk207_SPR_PMAG: rhs_mag_30Rnd_556x45_M855_PMAG
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm PMAG Mk207 SPR";
		displayNameShort = "Mk207 SPR";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		lastRoundsTracer = 0;
		mass = 8;
	};
	class Mk207_SPR_PMAG_Tan: rhs_mag_30Rnd_556x45_M855_PMAG_Tan
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm PMAG Mk207 SPR";
		displayNameShort = "Mk207 SPR";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		lastRoundsTracer = 0;
		mass = 8;
	};
	class Mk207_SPR_PMAG_TR: Mk207_SPR_PMAG
	{
		displayName = "5.56mm PMAG Mk207 SPR (Tracers)";
		displayNameShort = "Mk207 SPR Tracer";
		tracersEvery = 1;
	};
	class Mk207_SPR_PMAG_Tan_TR: Mk207_SPR_PMAG_Tan
	{
		displayName = "5.56mm PMAG Mk207 SPR (Tracers)";
		displayNameShort = "Mk207 SPR Tracer";
		tracersEvery = 1;
	};
	class Mk207_SPR_PMAG_IR: Mk207_SPR_PMAG_TR
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm PMAG Mk207 SPR (IR-DIM)";
		displayNameShort = "Mk207 SPR IR-DIM";
	};
	class Mk207_SPR_PMAG_Tan_IR: Mk207_SPR_PMAG_Tan_TR
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm PMAG Mk207 SPR (IR-DIM)";
		displayNameShort = "Mk207 SPR IR-DIM";
	};

	class Mk207_SPR_100Rnd: ADFRC_100Rnd_556_Minimi
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm 100Rnd Mk207 SPR (Red 1:5)";
		displayNameShort = "Mk207 SPR Tracer";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 4;
	};
	class Mk207_SPR_100Rnd_IR: Mk207_SPR_100Rnd
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm 100Rnd Mk207 SPR (IR 1:5)";
		displayNameShort = "Mk207 SPR IR-DIM";
	};
	class Mk207_SPR_200Rnd: ADFRC_200Rnd_556_Minimi
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm 200Rnd Mk207 SPR (Red 1:5)";
		displayNameShort = "Mk207 SPR Tracer";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 4;
	};
	class Mk207_SPR_200Rnd_IR: Mk207_SPR_200Rnd
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm 200Rnd Mk207 SPR (IR 1:5)";
		displayNameShort = "Mk207 SPR IR-DIM";
	};
	class Mk207_SPR_250Rnd: ADFRC_250Rnd_556_Minimi
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm 250Rnd Mk207 SPR (Red 1:5)";
		displayNameShort = "Mk207 SPR Tracer";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 4;
	};
	class Mk207_SPR_250Rnd_IR: Mk207_SPR_250Rnd
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm 250Rnd Mk207 SPR (IR 1:5)";
		displayNameShort = "Mk207 SPR IR-DIM";
	};

	class Mk207_SPR_100Rnd_Soft: rhsusf_100Rnd_556x45_M855_soft_pouch_coyote
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm 100Rnd Mk207 SPR (Red 1:5)";
		displayNameShort = "Mk207 SPR Tracer";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 4;
		mass = 22;
	};
	class Mk207_SPR_100Rnd_Soft_IR: Mk207_SPR_100Rnd_Soft
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm 100Rnd Mk207 SPR (IR 1:5)";
		displayNameShort = "Mk207 SPR IR-DIM";
	};
	class Mk207_SPR_200Rnd_Soft: rhsusf_200Rnd_556x45_M855_soft_pouch_coyote
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm 200Rnd Mk207 SPR (Red 1:5)";
		displayNameShort = "Mk207 SPR Tracer";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 4;
		mass = 44;
	};
	class Mk207_SPR_200Rnd_Soft_IR: Mk207_SPR_200Rnd_Soft
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm 200Rnd Mk207 SPR (IR 1:5)";
		displayNameShort = "Mk207 SPR IR-DIM";
	};
	class Mk207_SPR_200Rnd_Box: rhsusf_200rnd_556x45_M855_box
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm 200Rnd Mk207 SPR (Red 1:5)";
		displayNameShort = "Mk207 SPR Tracer";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 4;
		mass = 50;
	};
	class Mk207_SPR_200Rnd_Box_IR: Mk207_SPR_200Rnd_Box
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm 200Rnd Mk207 SPR (IR 1:5)";
		displayNameShort = "Mk207 SPR IR-DIM";
	};
};

class CfgMagazineWells
{
	class CBA_556x45_STANAG
	{
		ADDON[] = 
		{
			"Mk207_SPR_Mag",
			"Mk207_SPR_Mag_TR",
			"Mk207_SPR_Mag_IR",
			"Mk207_SPR_Mag_Sand",
			"Mk207_SPR_Mag_Sand_TR",
			"Mk207_SPR_Mag_Sand_IR"
		};
	};
	class STANAG_556x45
	{
		ADDON[] = 
		{
			"Mk207_SPR_Mag",
			"Mk207_SPR_Mag_TR",
			"Mk207_SPR_Mag_IR",
			"Mk207_SPR_Mag_Sand",
			"Mk207_SPR_Mag_Sand_TR",
			"Mk207_SPR_Mag_Sand_IR",
			"Mk207_SPR_PMAG",
			"Mk207_SPR_PMAG_Tan",
			"Mk207_SPR_PMAG_TR",
			"Mk207_SPR_PMAG_Tan_TR",
			"Mk207_SPR_PMAG_IR",
			"Mk207_SPR_PMAG_Tan_IR"
		};
	};
	class CBA_556x45_SCAR_EGLM
	{
		ADDON[] = 
		{
			"Mk207_SPR_Mag",
			"Mk207_SPR_Mag_TR",
			"Mk207_SPR_Mag_IR",
			"Mk207_SPR_Mag_Sand",
			"Mk207_SPR_Mag_Sand_TR",
			"Mk207_SPR_Mag_Sand_IR",
			"Mk207_SPR_PMAG",
			"Mk207_SPR_PMAG_Tan",
			"Mk207_SPR_PMAG_TR",
			"Mk207_SPR_PMAG_Tan_TR",
			"Mk207_SPR_PMAG_IR",
			"Mk207_SPR_PMAG_Tan_IR"
		};
	};
	class CBA_556x45_STEYR
	{
		ADDON[] = 
		{
			"Mk207_SPR_Steyr_Mag",
			"Mk207_SPR_Steyr_Mag_TR",
			"Mk207_SPR_Steyr_Mag_IR"
		};
	};
	class CBA_556x45_MINIMI
	{
		ADDON[] = 
		{
			"Mk207_SPR_100Rnd",
			"Mk207_SPR_100Rnd_IR",
			"Mk207_SPR_200Rnd",
			"Mk207_SPR_200Rnd_IR",
			"Mk207_SPR_250Rnd",
			"Mk207_SPR_250Rnd_IR",
			"Mk207_SPR_100Rnd_Soft",
			"Mk207_SPR_100Rnd_Soft_IR",
			"Mk207_SPR_200Rnd_Soft",
			"Mk207_SPR_200Rnd_Soft_IR",
			"Mk207_SPR_200Rnd_Box",
			"Mk207_SPR_200Rnd_Box_IR"
		};
	};
};
