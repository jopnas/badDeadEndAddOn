class cfgMagazines
{
	class Default;
	class CA_Magazine;

    // Camo Nets
    class bde_camonetSmallPacked:CA_Magazine
    {
        mass=15;
        scope = 2;
        author = "NotSure";
        displayName = "Camonet Small Packed";
        picture = "\bde\pics\tentdomepacked.paa";
        model = "\A3\Structures_F\Civ\Camping\Ground_sheet_folded_yellow_F";
        count=1;
    };

    class bde_camonetBigPacked:CA_Magazine
    {
        mass=15;
        scope = 2;
        author = "NotSure";
        displayName = "Camonet Big Packed";
        picture = "\bde\pics\tentdomepacked.paa";
        model = "\A3\Structures_F\Civ\Camping\Ground_sheet_folded_khaki_F";
        count=1;
    };

    class bde_camonetVehiclesPacked:CA_Magazine
    {
        mass=15;
        scope = 2;
        author = "NotSure";
        displayName = "Camonet Vehicles Packed";
        picture = "\bde\pics\tentdomepacked.paa";
        model = "\A3\Structures_F\Civ\Camping\Ground_sheet_folded_OPFOR_F";
        count=1;
    };

    // Tents
    class bde_tentDomePacked:CA_Magazine
    {
        mass=15;
        scope = 2;
        author = "NotSure";
        displayName = "Tent Dome Packed";
        picture = "\bde\pics\tentdomepacked.paa";
        model = "\A3\Structures_F\Civ\Camping\Sleeping_bag_folded_F";
        count=1;
    };

    class bde_tentCamoPacked:CA_Magazine
    {
        mass=10;
        scope = 2;
        author = "NotSure";
        displayName = "Camo Tent Packed";
        picture = "\bde\pics\tentdomepacked.paa";
        model = "\A3\Structures_F\Civ\Camping\Sleeping_bag_brown_folded_F";
        count=1;
    };

	// Drink
	// Plastic Bottle
	class bde_bottledirty: CA_Magazine
	{
		mass=2;
		scope=2;
		author = "NotSure";
		displayName="Plastic Bottle (Dirty Water)";
		picture = "\bde\pics\bottledirty.paa";
		model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
        count=1;
	};

	class bde_bottleclean: CA_Magazine
	{
		mass=2;
		scope=2;
		author = "NotSure";
		displayName="Plastic Bottle (Clean Water)";
		picture = "\bde\pics\bottleclean.paa";
		model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
        count=1;
        itemActions[] = {
            "'Drink clean water','bde_bottleclean_3_4',''",
            "'Empty bottle','bde_bottleempty',''"
        };
	};

	class bde_bottleclean_3_4: CA_Magazine
	{
		mass=2;
		scope=2;
		author = "NotSure";
		displayName="Plastic Bottle (Clean Water, 3/4 filled)";
		picture = "\bde\pics\bottleclean.paa";
		model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
        count=1;
	};

	class bde_bottleclean_2_4: CA_Magazine
	{
		mass=2;
		scope=2;
		author = "NotSure";
		displayName="Plastic Bottle (Clean Water, 2/4 filled)";
		picture = "\bde\pics\bottleclean.paa";
		model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
        count=1;
	};

	class bde_bottleclean_1_4: CA_Magazine
	{
		mass=2;
		scope=2;
		author = "NotSure";
		displayName="Plastic Bottle (Clean Water, 1/4 filled)";
		picture = "\bde\pics\bottleclean.paa";
		model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
        count=1;
	};

    class bde_bottleempty: CA_Magazine
	{
		mass=2;
		scope=2;
		author = "NotSure";
		displayName="Plastic Bottle (Empty)";
		picture = "\bde\pics\bottleempty.paa";
		model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
		count=1;
	};

    class bde_bottleuseless: CA_Magazine
    {
        mass=2;
        scope=2;
        author = "NotSure";
        displayName="Plastic Bottle (Useless)";
        picture = "\bde\pics\bottleempty.paa";
        model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
        count=1;
    };

	// Canteen
	class bde_canteenempty: CA_Magazine
	{
		mass=2;
		scope=2;
		author = "NotSure";
		displayName="Canteen (Empty)";
		picture = "\bde\pics\canteen_empty.paa";
		model="\A3\structures_f_epa\Items\Food\Canteen_F";
		count=1;
	};

	class bde_canteenfilled: CA_Magazine
	{
		mass=2;
		scope=2;
		author = "NotSure";
		displayName="Canteen (Clean Water)";
		picture = "\bde\pics\canteen_empty.paa";
		model="\A3\structures_f_epa\Items\Food\Canteen_F";
        count=1;
	};

	class bde_canteenfilled_3_4: CA_Magazine
	{
		mass=2;
		scope=2;
		author = "NotSure";
		displayName="Canteen (Clean Water, about 3/4 filled)";
		picture = "\bde\pics\canteen_empty.paa";
		model="\A3\structures_f_epa\Items\Food\Canteen_F";
        count=1;
	};

	class bde_canteenfilled_2_4: CA_Magazine
	{
		mass=2;
		scope=2;
		author = "NotSure";
		displayName="Canteen (Clean Water, about 2/4 filled)";
		picture = "\bde\pics\canteen_empty.paa";
		model="\A3\structures_f_epa\Items\Food\Canteen_F";
        count=1;
	};

	class bde_canteenfilled_1_4: CA_Magazine
	{
		mass=2;
		scope=2;
		author = "NotSure";
		displayName="Canteen (Clean Water, about 1/4 filled)";
		picture = "\bde\pics\canteen_empty.paa";
		model="\A3\structures_f_epa\Items\Food\Canteen_F";
        count=1;
	};

	// Food
	class bde_canunknown: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Unknown Can";
		picture = "\bde\pics\canunknown.paa";
		model = "\bde\models\canunknown";
        count=1;
        itemActions[] = {
            "'Eat something','bde_emptycanunknown','bde_multitool_tinopener'"
        };
	};

	class bde_emptycanunknown: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Empty Can";
		picture = "\bde\pics\emptycanunknown.paa";
		model = "\bde\models\emptycanunknown";
        count=1;
	};

	class bde_canpasta: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Can (Pasta)";
		picture = "\bde\pics\canpasta.paa";
		model = "\bde\models\can_pasta";
        count=1;
	};

	class bde_emptycanpasta: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Empty Can (Pasta)";
		picture = "\bde\pics\emptycanpasta.paa";
		model = "\bde\models\empty_can_pasta";
        count=1;
	};

	// Meat
	class bde_meat_big: CA_Magazine
	{
		mass=2;
		scope=2;
		author = "NotSure";
		displayName="Meat (Big)";
		picture = "\bde\pics\meat_big.paa";
		model="\bde\models\meat_big";
        count=1;
	};
	class bde_meat_big_cooked: CA_Magazine
	{
		mass=2;
		scope=2;
		author = "NotSure";
		displayName="Cooked Meat (Big)";
		picture = "\bde\pics\meat_big_cooked.paa";
		model="\bde\models\meat_big_cooked";
        count=1;
	};

	class bde_meat_small: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Meat (Small)";
		picture = "\bde\pics\meat_small.paa";
		model="\bde\models\meat_small";
        count=1;
	};

	class bde_meat_small_cooked: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Cooked Meat (Small)";
		picture = "\bde\pics\meat_small_cooked.paa";
		model="\bde\models\meat_small_cooked";
        count=1;
	};

    // Fruits
	class bde_apple: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Apple";
		picture = "\bde\pics\apple.paa";
        model="\bde\models\apple";
        count=1;
	};

    // Soda
    class bde_sodacan_01: CA_Magazine
    {
        mass=1;
        scope=2;
        author = "NotSure";
        displayName="Pepsi";
        picture = "\bde\pics\soda.paa";
        model = "\bde\models\soda_can_01";
        count=1;
    };

    class bde_sodacan_01_trash: CA_Magazine
    {
        mass=1;
        scope=2;
        author = "NotSure";
        displayName="Empty Pepsi";
        picture = "\bde\pics\soda.paa";
        model = "\bde\models\soda_can_01_trash";
        count=1;
    };

	// Medicals
	class bde_waterpurificationtablets: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Water Purification Tablets";
		picture = "\bde\pics\waterPure.paa";
		model="\A3\structures_f_epa\Items\medical\WaterPurificationTablets_F";
        count=1;
	};

	class bde_antiradiationtablets: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Anti Radiation Tablets";
		picture = "\bde\pics\waterPure.paa";
		model="\A3\structures_f_epa\Items\medical\WaterPurificationTablets_F";
        count=1;
	};

	class bde_vitamines: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Vitamin Bottle";
		picture = "\bde\pics\vitamines.paa";
		model = "\A3\Structures_F_EPA\Items\Medical\VitaminBottle_F";
        count=1;
	};

	class bde_antibiotics: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Antibiotics";
		picture = "\bde\pics\Antibiotic.paa";
		model="\A3\structures_f_epa\Items\medical\antibiotic_F";
        count=1;
	};

    class bde_gasmask_filter: CA_Magazine
	{
		mass=3;
		scope=2;
		author = "NotSure";
		displayName="Gasmask Filter";
		picture = "\bde\pics\bde_gasmask_filter.paa";
		model = "\bde\models\bde_gasmask_filter";
        count=1;
	};

	// Objects
	class bde_stone: CA_Magazine
	{
		mass=10;
		scope=2;
		author = "NotSure";
		displayName="Stone";
		picture = "\bde\pics\stone.paa";
		model = "\A3\Weapons_f\ammo\stone_2";
        count=1;
	};

	class bde_wood: CA_Magazine
	{
		mass=10;
		scope=2;
		author = "NotSure";
		displayName="Wood";
		picture = "\bde\pics\wood.paa";
		model = "\bde\models\woodlog";
        count=1;
	};

	class bde_ducttape: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Ducttape";
		picture = "\bde\pics\ducttape.paa";
		model = "\A3\Structures_F_EPA\Items\Tools\DuctTape_F";
        count=1;
	};

	class bde_ducttape_6: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Ducttape";
		picture = "\bde\pics\ducttape.paa";
		model = "\A3\Structures_F_EPA\Items\Tools\DuctTape_F";
        count=1;
	};

	class bde_ducttape_5: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Ducttape";
		picture = "\bde\pics\ducttape.paa";
		model = "\A3\Structures_F_EPA\Items\Tools\DuctTape_F";
        count=1;
	};

	class bde_ducttape_4: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Ducttape (half roll)";
		picture = "\bde\pics\ducttape.paa";
		model = "\A3\Structures_F_EPA\Items\Tools\DuctTape_F";
        count=1;
	};

	class bde_ducttape_3: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Ducttape (less than half a roll)";
		picture = "\bde\pics\ducttape.paa";
		model = "\A3\Structures_F_EPA\Items\Tools\DuctTape_F";
        count=1;
	};

	class bde_ducttape_2: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Ducttape (less than half a roll)";
		picture = "\bde\pics\ducttape.paa";
		model = "\A3\Structures_F_EPA\Items\Tools\DuctTape_F";
        count=1;
	};

	class bde_ducttape_1: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Ducttape (almost empty)";
		picture = "\bde\pics\ducttape.paa";
		model = "\A3\Structures_F_EPA\Items\Tools\DuctTape_F";
        count=1;
	};

	class bde_ducttape_empty: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Ducttape (empty roll)";
		picture = "\bde\pics\ducttape.paa";
		model = "\A3\Structures_F_EPA\Items\Tools\DuctTape_F";
        count=1;
	};

    // Vehicle Parts
	class bde_wheel: CA_Magazine
	{
		mass=30;
		scope=2;
		author = "NotSure";
		displayName="Wheel";
		picture = "\bde\pics\wheel.paa";
		model = "\bde\models\wheel";
        count=1;
	};

	class bde_vehicle_battery: CA_Magazine
	{
		mass=15;
		scope=2;
		author = "NotSure";
        displayName = "Vehicle Battery";
		picture = "\bde\pics\wheel.paa";
        model = "\A3\Structures_F_Bootcamp\Items\Electronics\CarBattery_02_F";
        count=1;
	};

	// Tools
	class bde_zippo: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Zippo Lighter";
		picture = "\bde\pics\zippo.paa";
		model = "\bde\models\zippo";
        count=1;
	};

	class bde_matches: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Matches";
		picture = "\bde\pics\matches.paa";
		model = "\A3\Structures_F_EPA\Items\Tools\Matches_F";
        count=1;
	};

	class bde_hatchet: CA_Magazine
	{
		mass=3;
		scope=2;
		author = "NotSure";
		displayName="Hatchet";
		picture = "\bde\pics\hatchet.paa";
		model = "\A3\Structures_F\Items\Tools\Axe_F";
        count=1;
	};

	class bde_wrench: CA_Magazine
	{
		mass=3;
		scope=2;
		author = "NotSure";
		displayName="Wrench";
		picture = "\bde\pics\hatchet.paa";
		model = "\A3\Structures_F\Items\Tools\Wrench_F";
        count=1;
	};

	class bde_multitool: CA_Magazine
	{
		mass=3;
		scope=2;
		author = "NotSure";
		displayName="Multitool";
		picture = "\bde\pics\hatchet.paa";
		model = "\A3\Structures_F\Items\Tools\Screwdriver_V2_F";
        count=1;
        itemActionNames[] = {
            "Screwdriver",
            "Tongs",
            "Knife",
            "Tin Opener"
        };
        itemActionOutputs[] = {
            "bde_multitool_screwdriver",
            "bde_multitool_tongs",
            "bde_multitool_knife",
            "bde_multitool_tinopener"
        };
	};

	class bde_multitool_screwdriver: CA_Magazine
	{
		mass=3;
		scope=2;
		author = "NotSure";
		displayName="Multitool";
		picture = "\bde\pics\hatchet.paa";
		model = "\A3\Structures_F\Items\Tools\Screwdriver_V2_F";
        count=1;
        itemActions[] = {
            ["Collapse","bde_multitool",[]],
            ["Knife","bde_multitool_knife",[]],
            ["Tongs","bde_multitool_tongs",[]],
            ["Tin Opener","bde_multitool_tinopener",[]]
        };
	};

	class bde_multitool_knife: CA_Magazine
	{
		mass=3;
		scope=2;
		author = "NotSure";
		displayName="Multitool";
		picture = "\bde\pics\hatchet.paa";
		model = "\A3\Structures_F\Items\Tools\Screwdriver_V2_F";
        count=1;
	};

	class bde_multitool_tongs: CA_Magazine
	{
		mass=3;
		scope=2;
		author = "NotSure";
		displayName="Multitool";
		picture = "\bde\pics\hatchet.paa";
		model = "\A3\Structures_F\Items\Tools\Screwdriver_V2_F";
        count=1;
	};

	class bde_multitool_tinopener: CA_Magazine
	{
		mass=3;
		scope=2;
		author = "NotSure";
		displayName="Multitool";
		picture = "\bde\pics\hatchet.paa";
		model = "\A3\Structures_F\Items\Tools\Screwdriver_V2_F";
        count=1;
	};

	class bde_fuelCanisterEmpty: CA_Magazine
	{
		mass=10;
		scope=2;
		author = "NotSure";
		displayName="Fuel Canister (Empty)";
		picture = "\bde\pics\fuelcan_empty.paa";
		model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F";
        count=1;
	};

	class bde_fuelCanisterFilled: CA_Magazine
	{
		mass=10;
		scope=2;
		author = "NotSure";
		displayName="Fuel Canister";
		picture = "\bde\pics\fuelcan_filled.paa";
		model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F";
        count=1;
	};

    class bde_lock: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Lock";
		picture = "\bde\pics\lock.paa";
		model = "\bde\models\lock";
        count=1;
	};

    class bde_hammer: CA_Magazine
	{
		mass=4;
		scope=2;
		author = "NotSure";
		displayName="Hammer";
		picture = "\bde\pics\bde_Hammer.paa";
		model = "\bde\models\bde_hammer";
        count=1;
	};

    class bde_nails: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Nails";
		picture = "\bde\pics\bde_nails.paa";
		model = "\bde\models\bde_nails";
        count=1;
	};

    class bde_plank: CA_Magazine
    {
        mass=3;
        scope=2;
        author = "NotSure";
        displayName="Single Plank";
        picture = "\bde\pics\bde_plank.paa";
        model = "\bde\models\bde_plank";
        count=1;
    };

    class bde_cable: CA_Magazine
	{
		mass=1;
		scope=2;
		author = "NotSure";
		displayName="Cable";
		picture = "\bde\pics\lock.paa";
		model = "\A3\Structures_F\Items\Electronics\ExtensionCord_F";
        count=1;
	};

    class bde_codelock_panel: CA_Magazine
	{
		mass=2;
		scope=2;
		author = "NotSure";
		displayName="Codelock Panel";
		picture = "\bde\pics\bde_codelock_panel.paa";
		model = "\bde\models\bde_codelock_panel";
        count=1;
	};

    class bde_codelock: CA_Magazine
	{
		mass=2;
		scope=2;
		author = "NotSure";
		displayName="Codelock";
        picture = "\bde\pics\bde_codelock_panel.paa";
		model = "\bde\models\bde_codelock_panel";
        count=1;
	};

    // Cloth
	class bde_scarf: CA_Magazine
	{
		mass = 1;
		scope = 2;
		author = "NotSure";
		displayName="Scarf";
		picture = "\bde\pics\fuelcan_filled.paa";
		model = "\A3\Structures_F\Items\Tools\Gloves_F.p3d";
        count=1;
	};

    // For Weapons
        //class B_12Gauge_Slug : BulletBase
        //class B_12Gauge_Pellets : ShotgunBase
    class bde_12Gauge_Pellets {
        author = "NotSure";
        scope = 2;
        displayName = "8 x Pellets";
        ammo = "B_12Gauge_Pellets";
        count = 8;
        initSpeed = 396;
        picture = "\bde\pics\fuelcan_filled.paa";
        descriptionShort = "Caliber: 12 gauge
        Rounds: 8 Pellets
        Used in: M1014";
        mass = 6;
        value = 1;
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        modelSpecial = "";
        useAction = 0;
        useActionTitle = "";
        reloadAction = "";
        type = 256;
        selectionFireAnim = "zasleh";
        nameSound = "magazine";
        maxLeadSpeed = 23;
        weaponpoolavailable = 1;
        simulation = "ProxyMagazines";
        displayNameShort = "";
        weight = 0;
        maxThrowHoldTime = 2;
        minThrowIntensityCoef = 0.3;
        maxThrowIntensityCoef = 1.4;
        quickReload = 0;
    };
};