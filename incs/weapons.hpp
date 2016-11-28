class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class HandGrenade;
class SlotInfo;

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
        picture = "\bde\pics\weapons\gear_spas12.paa";
        magazines[] = {"bde_8rnd_12gauge_pellets"};

        autoFire = false;
        autoReload = false;
        reloadTime = 0.15;
        model = "\bde\models\bde_w_spas12";

        nertia = 0.5;
        bullet1[] = {"a3\sounds_f\weapons\Shells\shotgun\metal_shotgun_01",0.501187,1,15};
        bullet2[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_02",0.501187,1,15};
        bullet3[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_03",0.501187,1,15};
        bullet4[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_04",0.501187,1,15};
        bullet5[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_01",0.398107,1,15};
        bullet6[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_02",0.398107,1,15};
        bullet7[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_03",0.398107,1,15};
        bullet8[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_04",0.398107,1,15};
        bullet9[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_01",0.223872,1,15};
        bullet10[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_02",0.223872,1,15};
        bullet11[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_03",0.223872,1,15};
        bullet12[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_04",0.223872,1,15};
        soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};

        fireSpreadAngle = 0.784825;

        modes[] = {Single,Pump};
        class Single : Mode_SemiAuto
 		{
            displayName = "Semi Automatic";
 		};

        class Pump : Mode_SemiAuto
 		{
            displayName = "Pump Action";
 		};

        class WeaponSlotsInfo
 		{
 			mass = 4; // default mass of a weapon
 			class MuzzleSlot : SlotInfo
 			{
 			  // targetProxy
 			  linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";

 			  // display name
 			  displayName = "Muzzle Slot";

 			  // class names with items supported by weapon
 			  compatibleItems[] = {}; // moved to each weapon
 			};

 			//class CowsSlot: CowsSlot {};
            class CowsSlot : SlotInfo
            {
               // targetProxy
               linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";

               // display name
               displayName = "CowsSlot";

               // class names with items supported by weapon
               compatibleItems[] = {"optic_Arco","optic_aco", "optic_ACO_grn","optic_hamr","optic_Holosight"};
            };

 			//class PointerSlot: PointerSlot {};
            class PointerSlot : SlotInfo
            {
               // targetProxy
               linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";

               // display name
               displayName = "PointerSlot";

               // class names with items supported by weapon
               compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
            };

 			allowedSlots[] = {901}; // you simply cannot put this into your pants
 		};
    };

    class bde_melee_weapon : Rifle
	{
        scope = 2;
        displayName = "melee";
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

        cursor = "EmptyCursor";
        cursorAim = "gl";
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