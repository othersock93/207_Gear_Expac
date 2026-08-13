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
	class 20Rnd_762x51_Mag;

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
		displayNameShort = "Mk207 SPR Red";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 1;
	};
	class Mk207_SPR_Mag_Sand_TR: 30Rnd_556x45_Stanag_Sand_Tracer_Red
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm STANAG Mk207 SPR (Tracers)";
		displayNameShort = "Mk207 SPR Red";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 1;
	};
	class Mk207_SPR_Mag_IR: Mk207_SPR_Mag_TR
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm STANAG Mk207 SPR (IR-DIM)";
		displayNameShort = "Mk207 SPR IR";
	};
	class Mk207_SPR_Mag_Sand_IR: Mk207_SPR_Mag_Sand_TR
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm STANAG Mk207 SPR (IR-DIM)";
		displayNameShort = "Mk207 SPR IR";
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
		displayNameShort = "Mk207 SPR Red";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 1;
	};
	class Mk207_SPR_Steyr_Mag_IR: Mk207_SPR_Steyr_Mag_TR
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm Steyr Mk207 SPR (IR-DIM)";
		displayNameShort = "Mk207 SPR IR";
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
		displayNameShort = "Mk207 SPR Red";
		tracersEvery = 1;
	};
	class Mk207_SPR_PMAG_Tan_TR: Mk207_SPR_PMAG_Tan
	{
		displayName = "5.56mm PMAG Mk207 SPR (Tracers)";
		displayNameShort = "Mk207 SPR Red";
		tracersEvery = 1;
	};
	class Mk207_SPR_PMAG_IR: Mk207_SPR_PMAG_TR
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm PMAG Mk207 SPR (IR-DIM)";
		displayNameShort = "Mk207 SPR IR";
	};
	class Mk207_SPR_PMAG_Tan_IR: Mk207_SPR_PMAG_Tan_TR
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm PMAG Mk207 SPR (IR-DIM)";
		displayNameShort = "Mk207 SPR IR";
	};

	class Mk207_SPR_100Rnd: ADFRC_100Rnd_556_Minimi
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm 100Rnd Mk207 SPR (Red 1:5)";
		displayNameShort = "Mk207 SPR Red";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 4;
	};
	class Mk207_SPR_100Rnd_IR: Mk207_SPR_100Rnd
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm 100Rnd Mk207 SPR (IR 1:5)";
		displayNameShort = "Mk207 SPR IR";
	};
	class Mk207_SPR_200Rnd: ADFRC_200Rnd_556_Minimi
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm 200Rnd Mk207 SPR (Red 1:5)";
		displayNameShort = "Mk207 SPR Red";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 4;
	};
	class Mk207_SPR_200Rnd_IR: Mk207_SPR_200Rnd
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm 200Rnd Mk207 SPR (IR 1:5)";
		displayNameShort = "Mk207 SPR IR";
	};
	class Mk207_SPR_250Rnd: ADFRC_250Rnd_556_Minimi
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm 250Rnd Mk207 SPR (Red 1:5)";
		displayNameShort = "Mk207 SPR Red";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 4;
	};
	class Mk207_SPR_250Rnd_IR: Mk207_SPR_250Rnd
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm 250Rnd Mk207 SPR (IR 1:5)";
		displayNameShort = "Mk207 SPR IR";
	};

	class Mk207_SPR_100Rnd_Soft: rhsusf_100Rnd_556x45_M855_soft_pouch_coyote
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm 100Rnd Mk207 SPR (Red 1:5)";
		displayNameShort = "Mk207 SPR Red";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 4;
		mass = 22;
	};
	class Mk207_SPR_100Rnd_Soft_IR: Mk207_SPR_100Rnd_Soft
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm 100Rnd Mk207 SPR (IR 1:5)";
		displayNameShort = "Mk207 SPR IR";
	};
	class Mk207_SPR_200Rnd_Soft: rhsusf_200Rnd_556x45_M855_soft_pouch_coyote
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm 200Rnd Mk207 SPR (Red 1:5)";
		displayNameShort = "Mk207 SPR Red";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 4;
		mass = 44;
	};
	class Mk207_SPR_200Rnd_Soft_IR: Mk207_SPR_200Rnd_Soft
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm 200Rnd Mk207 SPR (IR 1:5)";
		displayNameShort = "Mk207 SPR IR";
	};
	class Mk207_SPR_200Rnd_Box: rhsusf_200rnd_556x45_M855_box
	{
		author = "Socks";
		ammo = "Mk207_SPR";
		displayName = "5.56mm 200Rnd Mk207 SPR (Red 1:5)";
		displayNameShort = "Mk207 SPR Red";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 4;
		mass = 50;
	};
	class Mk207_SPR_200Rnd_Box_IR: Mk207_SPR_200Rnd_Box
	{
		ammo = "Mk207_SPR_IR";
		displayName = "5.56mm 200Rnd Mk207 SPR (IR 1:5)";
		displayNameShort = "Mk207 SPR IR";
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

	class Mk207_762_20Rnd: 20Rnd_762x51_Mag
	{
		author = "Socks";
		ammo = "Mk207_762";
		displayName = "7.62mm 20Rnd Mag Mk207LR";
		displayNameShort = "Mk207LR";
		descriptionShort = "Mk207 Special Purpose Round";
		tracersEvery = 0;
	};
	class Mk207_762_20Rnd_TR: Mk207_762_20Rnd
	{
		displayName = "7.62mm 20Rnd Mag Mk207LR (Tracers)";
		displayNameShort = "Mk207LR Red";
		tracersEvery = 1;
	};
	class Mk207_762_20Rnd_IR: Mk207_762_20Rnd
	{
		displayName = "7.62mm 20Rnd Mag Mk207LR (IR-DIM)";
		displayNameShort = "Mk207LR IR";
		tracersEvery = 1;
	};