class CfgPatches
{
    class bde_items
    {
        units[]={};
        weapons[]={};
        magazines[]={};
        ammo[]={};
        vehicles[]={};
        requiredVersion=0.1;
        requiredAddons[]={};
    };
};

class CfgVehicles {
    class ContainerSupply;
    class bde_tentDome:ContainerSupply {
        scope = 2;
        author="jopnas";
        displayName = "Tent Dome";
        model = "\A3\Structures_F\Civ\Camping\TentDome_F";
        icon = "";
        mapsize = 2;
        maximumLoad = 1000;
        transportMaxMagazines = 20;
        transportMaxWeapons = 10;
        transportMaxBackpacks = 5;
        transportAmmo = 0;
        transportRepair = 0;
        transportFuel = 0;
        transportSoldier = 0;
        transportVehiclesCount = 0;
        transportVehiclesMass = 0;
        armor = 100;
    }
}

// Ammo
class cfgAmmo {
	class BulletBase;
	class M_Swing: BulletBase
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		simulation = "shotShell";
		model = "";
		caliber = 0.26;
		deflecting = 0;
		visibleFire = 0;
		audibleFire = 0;
		shotcount = 4;
		cost = 100;
		typicalSpeed = 275;
		airFriction = -0.0018;
		minRange = 1;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 1.5;
		maxRange = 3;
		maxRangeProbab = 2.5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.005;
		soundHit[] = {"","db-90",1};
		soundEngine[] = {"","db-80",4};
	};
};

// New Items
class cfgMagazines
{
	class Default;
	class CA_Magazine;
	class HandGrenade_Stone;

    // Tent
    class bde_tentDomePacked:HandGrenade_Stone {
        mass=10;
        scope = 2;
        author="jopnas";
        displayName = "Tent Dome Packed";
        picture = "\bde_items\pics\bottleempty.paa";
        model = "\A3\Structures_F\Civ\Camping\Sleeping_bag_folded_F";
        count=0;
    };

	// Drink
	// Plastic Bottle
	class bde_bottleuseless: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Plastic Bottle (Useless)";
		picture = "\bde_items\pics\bottleempty.paa";
		model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
		count=0;
	};
	class bde_bottleempty: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Plastic Bottle (Empty)";
		picture = "\bde_items\pics\bottleempty.paa";
		model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
		count=0;
	};
	class bde_bottlefilled: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Plastic Bottle (Infected Water)";
		picture = "\bde_items\pics\bottledirty.paa";
		model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
		count=10;
	};
	class bde_bottleclean: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Plastic Bottle (Clean Water)";
		picture = "\bde_items\pics\bottleclean.paa";
		model="\A3\structures_f_epa\Items\Food\bottleplastic_v2_F";
		count=10;
	};

	// Canteen
	class bde_canteenempty: CA_Magazine
	{
		mass=0.5;
		scope=2;
		author="jopnas";
		displayName="Canteen (Empty)";
		picture = "\bde_items\pics\canteen_empty.paa";
		model="\A3\structures_f_epa\Items\Food\Canteen_F";
		count=0;
	};
	class bde_canteenfilled: CA_Magazine
	{
		mass=2.5;
		scope=2;
		author="jopnas";
		displayName="Canteen (Clean Water)";
		picture = "\bde_items\pics\canteen_empty.paa";
		model="\A3\structures_f_epa\Items\Food\Canteen_F";
		count=5;
	};
	// Food
	class bde_canunknown: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Unknown Can";
		picture = "\bde_items\pics\canunknown.paa";
		model = "\bde_items\models\canunknown";
	};
	class bde_emptycanunknown: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Empty Can";
		picture = "\bde_items\pics\emptycanunknown.paa";
		model = "\bde_items\models\emptycanunknown";
	};

	class bde_canpasta: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Can (Pasta)";
		picture = "\bde_items\pics\canpasta.paa";
		model = "\bde_items\models\can_pasta";
	};
	class bde_emptycanpasta: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Empty Can (Pasta)";
		picture = "\bde_items\pics\emptycanpasta.paa";
		model = "\bde_items\models\empty_can_pasta";
	};

	class bde_bakedbeans: CA_Magazine
	{
		mass=0.5;
		scope=2;
		author="jopnas";
		displayName="Baked Beans";
		picture = "\bde_items\pics\bakedbeans.paa";
		model = "\A3\Structures_F_EPA\Items\Food\BakedBeans_F";
	};
	class bde_tacticalbacon: CA_Magazine
	{
		mass=0.5;
		scope=2;
		author="jopnas";
		displayName="Tactical Bacon";
		picture = "\bde_items\pics\TacticalBacon.paa";
		model="\A3\structures_f\Items\Food\TacticalBacon_F";
	};

	// Meat
	class bde_meat_big: CA_Magazine
	{
		mass=0.5;
		scope=2;
		author="jopnas";
		displayName="Meat (Big)";
		picture = "\bde_items\pics\meat_big.paa";
		model="\bde_items\models\meat_big";
	};
	class bde_meat_big_cooked: CA_Magazine
	{
		mass=0.5;
		scope=2;
		author="jopnas";
		displayName="Cooked Meat (Big)";
		picture = "\bde_items\pics\meat_big_cooked.paa";
		model="\bde_items\models\meat_big_cooked";
	};
	class bde_meat_small: CA_Magazine
	{
		mass=0.5;
		scope=2;
		author="jopnas";
		displayName="Meat (Small)";
		picture = "\bde_items\pics\meat_small.paa";
		model="\bde_items\models\meat_small";
	};
	class bde_meat_small_cooked: CA_Magazine
	{
		mass=0.5;
		scope=2;
		author="jopnas";
		displayName="Cooked Meat (Small)";
		picture = "\bde_items\pics\meat_small_cooked.paa";
		model="\bde_items\models\meat_small_cooked";
	};

	// Medicals
	class bde_waterpurificationtablets: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Water Purification Tablets";
		picture = "\bde_items\pics\waterPure.paa";
		model="\A3\structures_f_epa\Items\medical\WaterPurificationTablets_F";
	};
	class bde_vitamines: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Vitamin Bottle";
		picture = "\bde_items\pics\vitamines.paa";
		model = "\A3\Structures_F_EPA\Items\Medical\VitaminBottle_F";
	};
	class bde_antibiotics: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Antibiotics";
		picture = "\bde_items\pics\Antibiotic.paa";
		model="\A3\structures_f_epa\Items\medical\antibiotic_F";
		count=20;
	};
	// Objects
	class bde_stone: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Stone";
		picture = "\bde_items\pics\stone.paa";
		model = "\A3\Weapons_f\ammo\stone_2";
	};
	class bde_wood: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Wood";
		picture = "\bde_items\pics\wood.paa";
		model = "\bde_items\models\woodlog";
	};
	class bde_ducttape: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Ducttape";
		picture = "\bde_items\pics\ducttape.paa";
		model = "\A3\Structures_F_EPA\Items\Tools\DuctTape_F";
	};
    // Vehicle Parts
	class bde_tire: CA_Magazine
	{
		mass=5;
		scope=2;
		author="jopnas";
		displayName="Tire";
		picture = "\bde_items\pics\tire.paa";
		model = "\A3\Structures_F\Civ\Garbage\Tyre_F";
	};
	// Tools
	class bde_zippo: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Zippo Lighter";
		picture = "\bde_items\pics\zippo.paa";
		model = "\bde_items\models\zippo";
	};
	class bde_matches: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Matches";
		picture = "\bde_items\pics\matches.paa";
		model = "\A3\Structures_F_EPA\Items\Tools\Matches_F";
	};
	class bde_lock: CA_Magazine
	{
		mass=2;
		scope=2;
		author="jopnas";
		displayName="Lock";
		picture = "\bde_items\pics\lock.paa";
		model = "\bde_items\models\lock";
	};

	class bde_hatchet: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Hatchet";
		picture = "\bde_items\pics\hatchet.paa";
		model = "\A3\Structures_F\Items\Tools\Axe_F";
	};

	// Trash&Rubbish
	//Drink
	class bde_canrusty: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Sodacan Spirit";
		picture = "\bde_items\pics\soda.paa";
		model = "\A3\Structures_F\Items\Food\Can_Rusty_F";
	};
	class bde_canempty: CA_Magazine
	{
		mass=1;
		scope=2;
		author="jopnas";
		displayName="Empty sodacan";
		picture = "\bde_items\pics\soda2.paa";
		model = "\A3\Structures_F\Items\Food\Can_Dented_F";
	};


	// For Melee Weapons
	class melee_swing: CA_Magazine
	{
		scope = 2;
		displayName = "Swing";
		picture = "";
		ammo = "M_Swing";
		count = 1000;
		initSpeed = 100;
		tracersEvery = 0;
		lastRoundsTracer = 9999;
		descriptionShort = "Swing";
		mass = 0;
	};
};

class Mode_SemiAuto;
class cfgWeapons {
    class Rifle;
	class MeleeWeapon: Rifle {
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		canDrop = 0;
		optics = 1;
		modelOptics = "-";
		fireLightDuration = 0;
		fireLightIntensity = 0;
		reloadMagazineSound[] = {"",1};
		muzzles[] = {"this"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = { StandardSound, SilencedSound };

			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = { "", "db3", 1, 10 };
				closure2[] = { "", "db3", 1, 10 };
				soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
			};

			class StandardSound : BaseSoundModeType
			{
				begin1[] = { "", "db3", 1, 1200 };
				begin2[] = { "", "db3", 1, 1200 };
				soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
			};

			class SilencedSound : BaseSoundModeType
			{
				begin1[] = { "", "db3", 1, 1200 };
				begin2[] = { "", "db3", 1, 1200 };
				soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
			};

			reloadTime = 1.5;
			dispersion = 0.00087;
			recoil = "empty";
			recoilProne = "empty";
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 2;
			midRangeProbab = 0.7;
			maxRange = 3;
			maxRangeProbab = 0.3;
		};
		cursor = "EmptyCursor";
		cursorAim = "throw";
		cursorSize = 1;
		cameraDir = "look";
	};

	class HatchetWeapon: MeleeWeapon
	{
		scope = 2;
		type = 1;
		autoreload = 1;
		magazineReloadTime = 0;
		displayName="Hatchet";
		picture = "\bde_items\pics\hatchet.paa";
		model = "\A3\Structures_F\Items\Tools\Axe_F";
		magazines[] = {"melee_swing"};
		descriptionShort = "Hatchet";
	};

	// Item Model Replacement
	class ItemMap
	{
		model = "\A3\Structures_F_EPB\Items\Documents\Map_altis_F";
	};
	class ItemCompass
	{
		model = "\A3\Structures_F\Items\Gadgets\Compass_F";
	};
};
