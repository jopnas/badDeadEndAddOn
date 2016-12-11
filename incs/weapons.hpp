class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class HandGrenade;

class cfgWeapons
{
    class ItemCore;
    class HeadgearItem;
    class Rifle;
    class Pistol;
    class GrenadeLauncher;

    class ItemMap;
    class ItemCompass;

	// Item Model Replacement
	class bde_map:ItemMap
	{
        scope = 2;
		model = "\bde\models\bde_map";
	};

	class bde_compass:ItemCompass
	{
        scope = 2;
		model = "\A3\Structures_F\Items\Gadgets\Compass_F";
	};

    // Headgear
    class H_HelmetB: ItemCore
    {
        author = "NotSure";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "ECH";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\equip1_co.paa"};

        class ItemInfo: HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
            modelSides[] = {TCivilian, TWest};
            hiddenSelections[] = {"camo"};

            //subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.

            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 0;
                     passThrough = 1;
                };
            };
        };
    };

    // Weapons
	class Rifle_Base_F: Rifle {
		class WeaponSlotsInfo;
		class GunParticles;
	};

    class bde_spas12:Rifle_Base_F
    {
        author = "NotSure";
        scope = 2;
        displayName = "Spas-12";
        descriptionShort = "Spas-12";
        nameSound = "Shotgun";
        picture = "\bde\pics\weapons\gear_spas12.paa";
        magazines[] = {"bde_8rnd_12gauge_pellets","bde_8rnd_12gauge_slug"};
        model = "\bde\models\bde_w_spas12";
        inertia = 0.5;

        autoFire = false;
        autoReload = false;
        reloadTime = 0.15;
        reloadAction = "GestureReloadEBR";

        bullet1[] = {"a3\sounds_f\weapons\Shells\shotgun\metal_shotgun_01", 0.501187, 1, 15};
		bullet2[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_02", 0.501187, 1, 15};
		bullet3[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_03", 0.501187, 1, 15};
		bullet4[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_04", 0.501187, 1, 15};
		bullet5[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_01", 0.398107, 1, 15};
		bullet6[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_02", 0.398107, 1, 15};
		bullet7[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_03", 0.398107, 1, 15};
		bullet8[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_04", 0.398107, 1, 15};
		bullet9[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_01", 0.223872, 1, 15};
		bullet10[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_02", 0.223872, 1, 15};
		bullet11[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_03", 0.223872, 1, 15};
		bullet12[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_04", 0.223872, 1, 15};
		soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};

        fireSpreadAngle = 2.5;
		discreteDistance[] = {50, 100, 200};

        changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.316228,1,5};
        drySound[] = {"A3\Sounds_F\weapons\Other\dry6.wss", 0.100000, 1};
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL",0.562341,1,10};

        modelOptics = "-";
		modes[] = {"Single"};
        class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound"};

			class BaseSoundModeType {
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_1", 0.398107, 1, 30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_2", 0.398107, 1, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
			};

			class StandardSound: BaseSoundModeType {
				begin1[] = {"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_01", 5.011872, 1, 2200};
				begin2[] = {"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_02", 5.011872, 1, 2200};
				begin3[] = {"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_03", 5.011872, 1, 2200};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin2", 0.340000};

				class SoundTails {
					class TailInterior {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_interior", 1, 1, 1500};
						frequency = 1;
						volume = "interior";
					};

					class TailTrees {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_trees", 1, 1, 1500};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};

					class TailForest {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_forest", 1, 1, 1500};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};

					class TailMeadows {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_meadows", 1, 1, 1500};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};

					class TailHouses {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_houses", 1, 1, 1500};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};

			dispersion = 0.003;
			soundContinuous = 0;
			reloadTime = 0.1;
			magazineReloadTime = 0;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			minRange = 0;
			midRange = 60;
			maxRange = 100;
			minRangeProbab = 0.5;
			midRangeProbab = 0.2;
			maxRangeProbab = 0.0;
		};

        class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 4;

			class MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
		};

        class GunParticles: GunParticles {
			class SecondEffect {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
    };

    class bde_melee_weapon : Rifle
	{
        scope = 1;
        displayName = "Melee";
        nameSound = "Melee";

		distanceZoomMin = 50;
		distanceZoomMax = 50;
		fireLightDuration = 0;
		fireLightIntensity = 0;

		autoReload = true;
		magazineReloadTime = 0;
        magazines[] = {"bde_melee_magazine"};

		soundBullet[] = {"emptySound", 1};
		drySound[] = {"", 1, 1};
		reloadMagazineSound[] = {"", 1, 1};

        cursor = "EmptyCursor";
        cursoraim = "CursorAim";
		cursorSize = 1;

		handAnim[] = {"OFP2_ManSkeleton","\bde\anims\melee_hatchet_holding.rtm"};

        class EventHandlers {
            init = "systemChat format['cfgWeapons init: %1',_this]";
            fired = "systemChat format['cfgWeapons fired: %1',_this]";
        };

		modes[] = {"Single"};
		class Single : Mode_FullAuto
		{
            sounds[] = {"StandardSound"};

            class BaseSoundModeType {
                weaponSoundEffect = "";
                closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_1", 0.398107, 1, 30};
                closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_2", 0.398107, 1, 30};
                soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
            };
            class StandardSound: BaseSoundModeType {
                begin1[] = {"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_01", 5.011872, 1, 2200};
                begin2[] = {"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_02", 5.011872, 1, 2200};
                begin3[] = {"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_03", 5.011872, 1, 2200};
                soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin2", 0.340000};

                class SoundTails {
                    class TailInterior {
                        sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_interior", 1, 1, 1500};
                        frequency = 1;
                        volume = "interior";
                    };

                    class TailTrees {
                        sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_trees", 1, 1, 1500};
                        frequency = 1;
                        volume = "(1-interior/1.4)*trees";
                    };

                    class TailForest {
                        sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_forest", 1, 1, 1500};
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };

                    class TailMeadows {
                        sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_meadows", 1, 1, 1500};
                        frequency = 1;
                        volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
                    };

                    class TailHouses {
                        sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_houses", 1, 1, 1500};
                        frequency = 1;
                        volume = "(1-interior/1.4)*houses";
                    };
                };
            };

			displayName = "";
			dispersion = 0.1;
			reloadTime = 1;
		};
    };

    class bde_melee_katana : bde_melee_weapon
    {
        author = "NotSure";
        scope = 2;
        displayName = "Katana";
        descriptionShort = "Sharp Katana";
        picture = "\bde\pics\bde_katana.paa";
        model = "\bde\models\bde_w_katana";
    };
};