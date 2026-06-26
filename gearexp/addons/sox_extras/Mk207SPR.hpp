class CfgAmmo
{
	class B_556x45_Ball;
	
	class M109_SPR: B_556x45_Ball
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
	class M109_SPR_IR: M109_SPR
	{
		nvgOnly = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
	};
};

class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class 30Rnd_556x45_Stanag_Tracer_Red;
	class ADFRC_30Rnd_aug;
	class ADFRC_30Rnd_aug_TR;
	class ADFRC_100Rnd_556_Minimi;
	class ADFRC_200Rnd_556_Minimi;
	class ADFRC_250Rnd_556_Minimi;

	class M109_SPR_Mag: 30Rnd_556x45_Stanag
	{
		author = "Socks";
		ammo = "M109_SPR";
		displayName = "5.56mm STANAG M109 SPR";
		displayNameShort = "M109 SPR";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		lastRoundsTracer = 0;
	};
	class M109_SPR_Mag_TR: 30Rnd_556x45_Stanag_Tracer_Red
	{
		author = "Socks";
		ammo = "M109_SPR";
		displayName = "5.56mm STANAG M109 SPR (Tracers)";
		displayNameShort = "M109 SPR Tracer";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 1;
	};
	class M109_SPR_Mag_IR: M109_SPR_Mag_TR
	{
		ammo = "M109_SPR_IR";
		displayName = "5.56mm STANAG M109 SPR (IR-DIM)";
		displayNameShort = "M109 SPR IR-DIM";
	};

	class M109_SPR_Steyr_Mag: ADFRC_30Rnd_aug
	{
		author = "Socks";
		ammo = "M109_SPR";
		displayName = "5.56mm Steyr M109 SPR";
		displayNameShort = "M109 SPR";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		lastRoundsTracer = 4;
	};
	class M109_SPR_Steyr_Mag_TR: ADFRC_30Rnd_aug_TR
	{
		author = "Socks";
		ammo = "M109_SPR";
		displayName = "5.56mm Steyr M109 SPR (Tracers)";
		displayNameShort = "M109 SPR Tracer";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 1;
	};
	class M109_SPR_Steyr_Mag_IR: M109_SPR_Steyr_Mag_TR
	{
		ammo = "M109_SPR_IR";
		displayName = "5.56mm Steyr M109 SPR (IR-DIM)";
		displayNameShort = "M109 SPR IR-DIM";
	};

	class M109_SPR_100Rnd: ADFRC_100Rnd_556_Minimi
	{
		author = "Socks";
		ammo = "M109_SPR";
		displayName = "5.56mm 100Rnd M109 SPR (Red 1:5)";
		displayNameShort = "M109 SPR Tracer";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 4;
	};
	class M109_SPR_100Rnd_IR: M109_SPR_100Rnd
	{
		ammo = "M109_SPR_IR";
		displayName = "5.56mm 100Rnd M109 SPR (IR 1:5)";
	};
	class M109_SPR_200Rnd: ADFRC_200Rnd_556_Minimi
	{
		author = "Socks";
		ammo = "M109_SPR";
		displayName = "5.56mm 200Rnd M109 SPR (Red 1:5)";
		displayNameShort = "M109 SPR Tracer";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 4;
	};
	class M109_SPR_200Rnd_IR: M109_SPR_200Rnd
	{
		ammo = "M109_SPR_IR";
		displayName = "5.56mm 200Rnd M109 SPR (IR 1:5)";
	};
	class M109_SPR_250Rnd: ADFRC_250Rnd_556_Minimi
	{
		author = "Socks";
		ammo = "M109_SPR";
		displayName = "5.56mm 250Rnd M109 SPR (Red 1:5)";
		displayNameShort = "M109 SPR Tracer";
		descriptionShort = "5.56mm Special Purpose Round";
		initSpeed = 950;
		tracersEvery = 4;
	};
	class M109_SPR_250Rnd_IR: M109_SPR_250Rnd
	{
		ammo = "M109_SPR_IR";
		displayName = "5.56mm 250Rnd M109 SPR (IR 1:5)";
	};
};

class CfgMagazineWells
{
	class CBA_556x45_STANAG
	{
		ADDON[] = 
		{
			"M109_SPR_Mag",
			"M109_SPR_Mag_TR",
			"M109_SPR_Mag_IR"
		};
	};
	class STANAG_556x45
	{
		ADDON[] = 
		{
			"M109_SPR_Mag",
			"M109_SPR_Mag_TR",
			"M109_SPR_Mag_IR"
		};
	};
	class CBA_556x45_SCAR_EGLM
	{
		ADDON[] = 
		{
			"M109_SPR_Mag",
			"M109_SPR_Mag_TR",
			"M109_SPR_Mag_IR"
		};
	};
	class CBA_556x45_STEYR
	{
		ADDON[] = 
		{
			"M109_SPR_Steyr_Mag",
			"M109_SPR_Steyr_Mag_TR",
			"M109_SPR_Steyr_Mag_IR"
		};
	};
	class CBA_556x45_MINIMI
	{
		ADDON[] = 
		{
			"M109_SPR_100Rnd",
			"M109_SPR_100Rnd_IR",
			"M109_SPR_200Rnd",
			"M109_SPR_200Rnd_IR",
			"M109_SPR_250Rnd",
			"M109_SPR_250Rnd_IR"
		};
	};
};
