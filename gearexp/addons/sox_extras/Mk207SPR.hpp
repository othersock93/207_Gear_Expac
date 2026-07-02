class CfgAmmo
{
	class B_556x45_Ball;
	class B_338_Ball;
	class B_127x108_APDS;
	class rhsusf_B_300winmag;

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
	class Mk207_338: B_338_Ball
	{
		hit = 30;
		caliber = 2.8;
        timeToLive=10;
        airFriction=-0.00060841;
        ACE_caliber=8.585;
        ACE_bulletLength=39.573;
        ACE_bulletMass=16.2;
        ACE_muzzleVelocityVariationSD=0.3;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.322};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={880, 915, 925};
        ACE_barrelLengths[]={508.0, 660.4, 711.2};
	};
	class Mk207_127: B_127x108_APDS
	{
		hit = 100;
		caliber = 5;
        airFriction = -0.00036;
        ACE_caliber = 7.13;
        ACE_bulletLength = 34.08;
        ACE_bulletMass = 27.95;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {1068};
        ACE_barrelLengths[]={736.6};
	};
	class Mk207_300: rhsusf_B_300winmag
	{
		hit = 60;
		caliber = 1.5;
        ACE_caliber = 7.823;
        ACE_bulletLength = 37.821;
        ACE_bulletMass = 14.256;
        ACE_muzzleVelocityVariationSD=0.3;
        ACE_ammoTempMuzzleVelocityShifts[] = {-5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2};
        ACE_ballisticCoefficients[] = {0.310};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {847, 867, 877};
        ACE_barrelLengths[] = {508.0, 609.6, 660.4};
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
	class 10Rnd_338_Mag;
	class ACE_10Rnd_127x99_AMAX_Mag;
	class rhsusf_5Rnd_300winmag_xm2010;

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

	class Mk207_300_5Rnd: rhsusf_5Rnd_300winmag_xm2010
	{
		author = "Socks";
		ammo = "Mk207_300";
		displayName = "5Rnd .300WM Mk207 Mod 1";
		displayNameShort = "Mk207 Mod 1";
		descriptionShort = ".300WM Special Purpose Round";
		tracersEvery = 0;
	};
	class Mk207_338_10Rnd: 10Rnd_338_Mag
	{
		author = "Socks";
		ammo = "Mk207_338";
		displayName = ".338LM Mk207 10Rnd Mag";
		displayNameShort = ".338LM Mk207";
		descriptionShort = ".338LM Special Purpose Round";
		tracersEvery = 0;
	};
	class Mk207_127_10Rnd: ACE_10Rnd_127x99_AMAX_Mag
	{
		author = "Socks";
		ammo = "Mk207_127";
		displayName = "10Rnd Mk207 APDS";
		displayNameShort = "Mk207 APDS";
		descriptionShort = ".50 BMG Special Purpose Round";
		tracersEvery = 0;
	};
};

class CfgMagazineWells
{
	class CBA_556x45_STANAG
	{
		sox_extras[] = 
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
		sox_extras[] = 
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
		sox_extras[] = 
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
		sox_extras[] = 
		{
			"Mk207_SPR_Steyr_Mag",
			"Mk207_SPR_Steyr_Mag_TR",
			"Mk207_SPR_Steyr_Mag_IR"
		};
	};
	class CBA_556x45_MINIMI
	{
		sox_extras[] = 
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
	class CBA_300WM_AICS
	{
		sox_extras[] =
		{
			"Mk207_300_5Rnd"
		};
	};
	class MAR10_338
	{
		sox_extras[] =
		{
			"Mk207_338_10Rnd"
		};
	};
	class CBA_50BMG_M107
	{
		sox_extras[] =
		{
			"Mk207_127_10Rnd"
		};
	};
};