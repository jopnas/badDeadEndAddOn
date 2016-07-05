class CfgPatches
{
    class bde
    {
        units[]={}
        weapons[]={}
        magazines[]={}
        ammo[]={}
        vehicles[]={}
        requiredVersion=0.1;
        requiredAddons[]={}
    }
}

class CfgVehicles {
    class ContainerSupply;
    class Rabbit_F;

    class bde_deadRabit:Rabbit_F {
        scope = 2;
        author="jopnas";
        displayName = "Dead Rabbit";
        icon = "";
        mapsize = 1;
        maximumLoad = 10000;
        linkedItems[] = {"bde_meat_small","bde_meat_small"};
        transportMaxMagazines = 2;
    }

    class bde_tentDome:ContainerSupply {
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
    }

    class bde_tentCamo:ContainerSupply {
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
    }
}

// New Items
class cfgMagazines
{
	class Default;
	class CA_Magazine;

    // Tent
    class bde_tentDomePacked:CA_Magazine {
        mass=15;
        scope = 2;
        author="jopnas";
        displayName = "Tent Dome Packed";
        picture = "\bde\pics\tentdomepacked.paa";
        model = "\A3\Structures_F\Civ\Camping\Sleeping_bag_folded_F";
        count=1;
    }

    class bde_tentCamoPacked:CA_Magazine {
        mass=10;
        scope = 2;
        author="jopnas";
        displayName = "Camo Tent Packed";
        picture = "\bde\pics\tentdomepacked.paa";
        model = "\A3\Structures_F\Civ\Camping\Sleeping_bag_brown_folded_F";
        count=1;
    }

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
	}

	class bde_bottleempty: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Plastic Bottle (Empty)";
		picture = "\bde\pics\bottleempty.paa";
		model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
		count=1;
	}
	class bde_bottlefilled: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Plastic Bottle (Dirty Water)";
		picture = "\bde\pics\bottledirty.paa";
		model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
        count=1;
	}

	class bde_bottleclean: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Plastic Bottle (Clean Water)";
		picture = "\bde\pics\bottleclean.paa";
		model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
        count=1;
	}

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
	}

	class bde_canteenfilled: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Canteen (Clean Water)";
		picture = "\bde\pics\canteen_empty.paa";
		model="\A3\structures_f_epa\Items\Food\Canteen_F";
        count=1;
	}

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
	}

	class bde_emptycanunknown: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Empty Can";
		picture = "\bde\pics\emptycanunknown.paa";
		model = "\bde\models\emptycanunknown";
        count=1;
	}

	class bde_canpasta: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Can (Pasta)";
		picture = "\bde\pics\canpasta.paa";
		model = "\bde\models\can_pasta";
        count=1;
	}

	class bde_emptycanpasta: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Empty Can (Pasta)";
		picture = "\bde\pics\emptycanpasta.paa";
		model = "\bde\models\empty_can_pasta";
        count=1;
	}

	class bde_bakedbeans: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Baked Beans";
		picture = "\bde\pics\bakedbeans.paa";
		model = "\A3\Structures_F_EPA\Items\Food\BakedBeans_F";
        count=1;
	}
	class bde_tacticalbacon: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Tactical Bacon";
		picture = "\bde\pics\TacticalBacon.paa";
		model="\A3\structures_f\Items\Food\TacticalBacon_F";
        count=1;
	}

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
	}
	class bde_meat_big_cooked: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Cooked Meat (Big)";
		picture = "\bde\pics\meat_big_cooked.paa";
		model="\bde\models\meat_big_cooked";
        count=1;
	}

	class bde_meat_small: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Meat (Small)";
		picture = "\bde\pics\meat_small.paa";
		model="\bde\models\meat_small";
        count=1;
	}

	class bde_meat_small_cooked: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Cooked Meat (Small)";
		picture = "\bde\pics\meat_small_cooked.paa";
		model="\bde\models\meat_small_cooked";
        count=1;
	}

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
	}

	class bde_vitamines: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Vitamin Bottle";
		picture = "\bde\pics\vitamines.paa";
		model = "\A3\Structures_F_EPA\Items\Medical\VitaminBottle_F";
        count=1;
	}

	class bde_antibiotics: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Antibiotics";
		picture = "\bde\pics\Antibiotic.paa";
		model="\A3\structures_f_epa\Items\medical\antibiotic_F";
        count=1;
	}

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
	}

	class bde_wood: CA_Magazine
	{
		mass=5;
		scope=2;
		author="jopnas";
		displayName="Wood";
		picture = "\bde\pics\wood.paa";
		model = "\bde\models\woodlog";
        count=1;
	}

	class bde_ducttape: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Ducttape";
		picture = "\bde\pics\ducttape.paa";
		model = "\A3\Structures_F_EPA\Items\Tools\DuctTape_F";
        count=1;
	}

    // Vehicle Parts
	class bde_tire: CA_Magazine
	{
		mass=10;
		scope=2;
		author="jopnas";
		displayName="Tire";
		picture = "\bde\pics\tire.paa";
		model = "\A3\Structures_F\Civ\Garbage\Tyre_F";
        count=1;
	}

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
	}

	class bde_matches: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Matches";
		picture = "\bde\pics\matches.paa";
		model = "\A3\Structures_F_EPA\Items\Tools\Matches_F";
        count=1;
	}

	class bde_lock: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Lock";
		picture = "\bde\pics\lock.paa";
		model = "\bde\models\lock";
        count=1;
	}

	class bde_hatchet: CA_Magazine
	{
		mass=3;
		scope=2;
		author="jopnas";
		displayName="Hatchet";
		picture = "\bde\pics\hatchet.paa";
		model = "\A3\Structures_F\Items\Tools\Axe_F";
        count=1;
	}

	class bde_fuelCanisterEmpty: CA_Magazine
	{
		mass=10;
		scope=2;
		author="jopnas";
		displayName="Fuel Canister (Empty)";
		picture = "\bde\pics\hatchet.paa";
		model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F";
        count=1;
	}

	class bde_fuelCanisterFilled: CA_Magazine
	{
		mass=10;
		scope=2;
		author="jopnas";
		displayName="Fuel Canister";
		picture = "\bde\pics\hatchet.paa";
		model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F";
        count=1;
	}

	// Trash&Rubbish
	// Soda
	class bde_canrusty: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Sodacan Spirit";
		picture = "\bde\pics\soda.paa";
		model = "\A3\Structures_F\Items\Food\Can_Rusty_F";
        count=1;
	}

    // Food
	class bde_canempty: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Empty sodacan";
		picture = "\bde\pics\soda2.paa";
		model = "\A3\Structures_F\Items\Food\Can_Dented_F";
        count=1;
	}


}

class cfgWeapons {
	// Item Model Replacement
	class ItemMap
	{
		model = "\A3\Structures_F_EPB\Items\Documents\Map_altis_F";
	}
	class ItemCompass
	{
		model = "\A3\Structures_F\Items\Gadgets\Compass_F";
	}
}
