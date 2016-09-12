class CfgPatches
{
    class bde {
        units[]={};
        weapons[]={};
        magazines[]={};
        ammo[]={};
        vehicles[]={};
        requiredVersion=0.1;
        requiredAddons[]={};
    };
};

class CfgMovesAnimal_Base_F;
class CfgMovesDog_F: CfgMovesAnimal_Base_F
 {
    class States
    {
        class Dog_Stop;
        class Dog_Attack: Dog_Stop
        {
            file = "\A3\animals_f_beta\Dog\data\anim\dogAttack.rtm";
            speed = 1;
			looped = true;
            ConnectTo[] = {"Dog_Stop", 0.1};
			InterpolateTo[] = {"Dog_Die", 0.02};
        };
    };
};

class CfgVehicles
{
    class ContainerSupply;
    class bde_dogbag:ContainerSupply
    {
        scope = 2;
        author="jopnas";
        displayName = "Dogbag";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
        icon = "";
        mapsize = 2;
        maximumLoad = 1000;
        transportMaxMagazines = 10;
        transportMaxWeapons = 2;
        transportMaxBackpacks = 0;
        camouflage = 2;
        destrType = "DestructTent";
        armor = 100000;
    };

    class bde_tentDome:ContainerSupply
    {
        scope = 2;
        author="jopnas";
        displayName = "Tent Dome";
        model = "\A3\Structures_F\Civ\Camping\TentDome_F";
        icon = "";
        mapsize = 2;
        maximumLoad = 10000;
        transportMaxMagazines = 20;
        transportMaxWeapons = 10;
        transportMaxBackpacks = 5;
        camouflage = 2;
        destrType = "DestructTent";
        armor = 10;
    };

    class bde_tentCamo:ContainerSupply
    {
        scope = 2;
        author="jopnas";
        displayName = "Tent Dome";
        model = "\A3\Structures_F\Civ\Camping\TentA_F";
        icon = "";
        mapsize = 2;
        maximumLoad = 10000;
        transportMaxMagazines = 10;
        transportMaxWeapons = 5;
        transportMaxBackpacks = 2;
        camouflage = 1;
        destrType = "DestructTent";
        armor = 10;
    };
};

class cfgWeapons
{
	// Item Model Replacement
	class ItemMap
	{
		model = "\A3\Structures_F\Items\Documents\Map_unfolded_F";
	};
	class ItemCompass
	{
		model = "\A3\Structures_F\Items\Gadgets\Compass_F";
	};
};

class cfgMagazines
{
	class Default;
	class CA_Magazine;

    // Camo Nets
    class bde_camonetSmallPacked:CA_Magazine
    {
        mass=15;
        scope = 2;
        author="jopnas";
        displayName = "Camonet Small Packed";
        picture = "\bde\pics\tentdomepacked.paa";
        model = "\A3\Structures_F\Civ\Camping\Ground_sheet_folded_yellow_F";
        count=1;
    };

    class bde_camonetBigPacked:CA_Magazine
    {
        mass=15;
        scope = 2;
        author="jopnas";
        displayName = "Camonet Big Packed";
        picture = "\bde\pics\tentdomepacked.paa";
        model = "\A3\Structures_F\Civ\Camping\Ground_sheet_folded_khaki_F";
        count=1;
    };

    class bde_camonetVehiclesPacked:CA_Magazine
    {
        mass=15;
        scope = 2;
        author="jopnas";
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
        author="jopnas";
        displayName = "Tent Dome Packed";
        picture = "\bde\pics\tentdomepacked.paa";
        model = "\A3\Structures_F\Civ\Camping\Sleeping_bag_folded_F";
        count=1;
    };

    class bde_tentCamoPacked:CA_Magazine
    {
        mass=10;
        scope = 2;
        author="jopnas";
        displayName = "Camo Tent Packed";
        picture = "\bde\pics\tentdomepacked.paa";
        model = "\A3\Structures_F\Civ\Camping\Sleeping_bag_brown_folded_F";
        count=1;
    };

	// Drink
	// Plastic Bottle
	class bde_bottleuseless: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Plastic Bottle (Useless)";
		picture = "\bde\pics\bottleempty.paa";
		model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
		count=1;
	};

	class bde_bottleempty: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Plastic Bottle (Empty)";
		picture = "\bde\pics\bottleempty.paa";
		model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
		count=1;
	};
	class bde_bottlefilled: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Plastic Bottle (Dirty Water)";
		picture = "\bde\pics\bottledirty.paa";
		model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
        count=1;
	};

	class bde_bottleclean: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Plastic Bottle (Clean Water)";
		picture = "\bde\pics\bottleclean.paa";
		model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
        count=1;
	};

	// Canteen
	class bde_canteenempty: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Canteen (Empty)";
		picture = "\bde\pics\canteen_empty.paa";
		model="\A3\structures_f_epa\Items\Food\Canteen_F";
		count=1;
	};

	class bde_canteenfilled: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Canteen (Clean Water)";
		picture = "\bde\pics\canteen_empty.paa";
		model="\A3\structures_f_epa\Items\Food\Canteen_F";
        count=1;
	};

	// Food
	class bde_canunknown: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Unknown Can";
		picture = "\bde\pics\canunknown.paa";
		model = "\bde\models\canunknown";
        count=1;
	};

	class bde_emptycanunknown: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Empty Can";
		picture = "\bde\pics\emptycanunknown.paa";
		model = "\bde\models\emptycanunknown";
        count=1;
	};

	class bde_canpasta: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Can (Pasta)";
		picture = "\bde\pics\canpasta.paa";
		model = "\bde\models\can_pasta";
        count=1;
	};

	class bde_emptycanpasta: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Empty Can (Pasta)";
		picture = "\bde\pics\emptycanpasta.paa";
		model = "\bde\models\empty_can_pasta";
        count=1;
	};

	class bde_bakedbeans: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Baked Beans";
		picture = "\bde\pics\bakedbeans.paa";
		model = "\A3\Structures_F_EPA\Items\Food\BakedBeans_F";
        count=1;
	};
	class bde_tacticalbacon: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Tactical Bacon";
		picture = "\bde\pics\TacticalBacon.paa";
		model="\A3\structures_f\Items\Food\TacticalBacon_F";
        count=1;
	};

	// Meat
	class bde_meat_big: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Meat (Big)";
		picture = "\bde\pics\meat_big.paa";
		model="\bde\models\meat_big";
        count=1;
	};
	class bde_meat_big_cooked: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Cooked Meat (Big)";
		picture = "\bde\pics\meat_big_cooked.paa";
		model="\bde\models\meat_big_cooked";
        count=1;
	};

	class bde_meat_small: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Meat (Small)";
		picture = "\bde\pics\meat_small.paa";
		model="\bde\models\meat_small";
        count=1;
	};

	class bde_meat_small_cooked: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Cooked Meat (Small)";
		picture = "\bde\pics\meat_small_cooked.paa";
		model="\bde\models\meat_small_cooked";
        count=1;
	};

	class bde_apple: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
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
        author="jopnas";
        displayName="Pepsi";
        picture = "\bde\pics\soda.paa";
        model = "\bde\models\soda_can_01";
        count=1;
    };

    class bde_sodacan_01_trash: CA_Magazine
    {
        mass=1;
        scope=2;
        author="jopnas";
        displayName="Empty Pepsi";
        picture = "\bde\pics\soda.paa";
        model = "\bde\models\soda_can_01_trash";
        count=1;
    };

    class bde_sodacan_02: CA_Magazine
    {
        mass=1;
        scope=2;
        author="jopnas";
        displayName="Spirit";
        picture = "\bde\pics\soda.paa";
        model = "\A3\Structures_F\Items\Food\Can_Rusty_F";
        count=1;
    };

    class bde_canempty: CA_Magazine
    {
        mass=1;
        scope=2;
        author="jopnas";
        displayName="Empty sodacan";
        picture = "\bde\pics\soda2.paa";
        model = "\A3\Structures_F\Items\Food\Can_Dented_F";
        count=1;
    };

	// Medicals
	class bde_waterpurificationtablets: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Water Purification Tablets";
		picture = "\bde\pics\waterPure.paa";
		model="\A3\structures_f_epa\Items\medical\WaterPurificationTablets_F";
        count=1;
	};

	class bde_vitamines: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Vitamin Bottle";
		picture = "\bde\pics\vitamines.paa";
		model = "\A3\Structures_F_EPA\Items\Medical\VitaminBottle_F";
        count=1;
	};

	class bde_antibiotics: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Antibiotics";
		picture = "\bde\pics\Antibiotic.paa";
		model="\A3\structures_f_epa\Items\medical\antibiotic_F";
        count=1;
	};

	// Objects
	class bde_stone: CA_Magazine
	{
		mass=5;
		scope=2;
		author="jopnas";
		displayName="Stone";
		picture = "\bde\pics\stone.paa";
		model = "\A3\Weapons_f\ammo\stone_2";
        count=1;
	};

	class bde_wood: CA_Magazine
	{
		mass=5;
		scope=2;
		author="jopnas";
		displayName="Wood";
		picture = "\bde\pics\wood.paa";
		model = "\bde\models\woodlog";
        count=1;
	};

	class bde_ducttape: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Ducttape";
		picture = "\bde\pics\ducttape.paa";
		model = "\A3\Structures_F_EPA\Items\Tools\DuctTape_F";
        count=1;
	};

    // Vehicle Parts
	class bde_wheel: CA_Magazine
	{
		mass=10;
		scope=2;
		author="jopnas";
		displayName="Wheel";
		picture = "\bde\pics\wheel.paa";
		model = "\bde\models\wheel";
        count=1;
	};

	// Tools
	class bde_zippo: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Zippo Lighter";
		picture = "\bde\pics\zippo.paa";
		model = "\bde\models\zippo";
        count=1;
	};

	class bde_matches: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Matches";
		picture = "\bde\pics\matches.paa";
		model = "\A3\Structures_F_EPA\Items\Tools\Matches_F";
        count=1;
	};

	class bde_lock: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Lock";
		picture = "\bde\pics\lock.paa";
		model = "\bde\models\lock";
        count=1;
	};

	class bde_hatchet: CA_Magazine
	{
		mass=3;
		scope=2;
		author="jopnas";
		displayName="Hatchet";
		picture = "\bde\pics\hatchet.paa";
		model = "\A3\Structures_F\Items\Tools\Axe_F";
        count=1;
	};

	class bde_fuelCanisterEmpty: CA_Magazine
	{
		mass=10;
		scope=2;
		author="jopnas";
		displayName="Fuel Canister (Empty)";
		picture = "\bde\pics\fuelcan_empty.paa";
		model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F";
        count=1;
	};

	class bde_fuelCanisterFilled: CA_Magazine
	{
		mass=10;
		scope=2;
		author="jopnas";
		displayName="Fuel Canister";
		picture = "\bde\pics\fuelcan_filled.paa";
		model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F";
        count=1;
	};
};

// GUI
class RscListbox;
class ScrollBar;
class InventoryActionMenu: RscListbox
{
    idc = 666666;
    access = 0; // Control access (0 - ReadAndWrite, 1 - ReadAndCreate, 2 - ReadOnly, 3 - ReadOnlyVerified)
    type = 5; // Type is 5
    x = 0; // Horizontal coordinates
    y = 0; // Vertical coordinates
    w = 0.2; // Width
    h = 0.1; // Height
    sizeEx = 0.027; // Text size
    rowHeight = 0.027; // Row height
    itemSpacing = 0.01;
    period = 0; // Oscillation time between colorSelect/colorSelectBackground2 and colorSelect2/colorSelectBackground when selected
    blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

    colorBackground[] = {0,0,0,1}; // Fill color
    colorSelectBackground[] = {0,0,0,1}; // Selected item fill color
    colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)
    font = "TahomaB"; // Font from CfgFontFamilies
    shadow = 0; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
    colorText[] = {0.8,0.8,0.8,1}; // Text and frame color
    colorDisabled[] = {0.8,0.8,0.8,1}; // Disabled text color
    colorSelect[] = {0.8,0.8,0.8,1}; // Text selection color
    colorSelect2[] = {0.8,0.8,0.8,1}; // Text selection color (oscillates between this and colorSelect)
    colorShadow[] = {0,0,0,1}; // Text shadow color (used only when shadow is 1)

    pictureColor[] = {1,0.5,0,1}; // Picture color
    pictureColorSelect[] = {1,1,1,1}; // Selected picture color
    pictureColorDisabled[] = {1,1,1,1}; // Disabled picture color

    tooltip = ""; // Tooltip text
    tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
    tooltipColorText[] = {1,1,1,1}; // Tooltip text color
    tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color

    maxHistoryDelay = 1; // Time since last keyboard type search to reset it
    canDrag = 0; // 1 (true) to allow item dragging
};