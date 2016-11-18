class cfgWeapons
{
    class ItemCore;
    class HeadgearItem;

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
    class bde_remington870:srifle_DMR_06_olive_F {
        author = "NotSure";
        scope = 2;
        displayName = "Remington 870";
        descriptionShort = "Remington 870 12Gauge";
        magazines[] = {"bde_12Gauge_Pellets"};
        autoFire = false;
        autoReload = false;
    };
};