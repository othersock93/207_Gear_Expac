	class B_556x45_Ball;
	class B_338_Ball;
	class B_127x108_APDS;
	class rhsusf_B_300winmag;
	class B_762x51_Ball;

	class Mk207_SPR: B_556x45_Ball
	{
		caliber=1.6;
		hit=17;
        airFriction=-0.00126182;
        ACE_caliber=5.69;
        ACE_bulletLength=23.012;
        ACE_bulletMass=4.5359237;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.310};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={820, 865, 880};
        ACE_barrelLengths[]={254.0, 368.3, 508.0};
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
	class Mk207_762: B_762x51_Ball
	{
        airFriction=-0.00085157;
        caliber=1.8;
        hit=30;
        typicalSpeed=790;
        ACE_caliber=7.823;
        ACE_bulletLength=31.496;
        ACE_bulletMass=11.34;
        ACE_muzzleVelocityVariationSD=0.4;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.243};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={750, 780, 790, 794};
        ACE_barrelLengths[]={406.4, 508.0, 609.6, 660.4};
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class Mk207_762_IR: Mk207_762
	{
		nvgOnly = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
	};