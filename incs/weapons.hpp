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
	class ItemMap
	{
		model = "\bde\models\bde_map";
	};
	class ItemCompass
	{
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
    class srifle_DMR_06_olive_F;
    class bde_spas12:srifle_DMR_06_olive_F
    {
        author = "NotSure";
        scope = 2;
        displayName = "Spas-12";
        descriptionShort = "Spas-12";
        picture = "\bde\pics\gear_spas12.paa";
        magazines[] = {"bde_12gauge_pellets"};
        allowedslots[] = {701,901};
        autoFire = false;
        autoReload = false;
        reloadTime = 5.0;
        model = "\bde\models\bde_w_spas12";
        modes[] = {Single};
        class Single : Mode_SemiAuto
        {
            class BaseSoundModeType;
			/*class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"JPEX_MK14_Shot_SoundSet","JPEX_MK14_Tail_SoundSet","JPEX_FRAME_RIFLE_REFLECTORS","JPEX_FRAME_NOISE_LAYER_762MM"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"JPEX_MK14_Shot_Silenced_SoundSet","JPEX_MK14_Tail_Silenced_SoundSet","JPEX_FRAME_NOISE_LAYER_762MM"};
			};*/
        };
    };

    class bde_melee_weapon : Rifle
	{
		isMelee = true;

		distanceZoomMin = 50;
		distanceZoomMax = 50;
		fireLightDuration = 0;
		fireLightIntensity = 0;

		autoReload = true;
		magazineReloadTime = 0;

		soundBullet[] = {"emptySound", 1};
		drySound[] = {"", 1, 1};
		reloadMagazineSound[] = {"", 1, 1};

		//cursor = "Vehicle_Grenade_W";
		//cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;

		handAnim[] = {"OFP2_ManSkeleton","\bde\anims\melee_hatchet_holding.rtm"};

		modes[] = {Single};

		class Single : Mode_FullAuto
		{
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
        descriptionShort = "very sharp";
        magazines[] = {"bde_melee_magazine"};
        picture = "\bde\pics\hatchet.paa";
        model = "\A3\Structures_F\Items\Tools\Axe_F";
    };
};