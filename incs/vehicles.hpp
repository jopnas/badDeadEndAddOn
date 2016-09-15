class CfgVehicles
{
    class Bag_Base;
    class ContainerSupply;

    // Backpacks
    class bde_smallBackpack: Bag_Base
    {
        author = "jopnas";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
        displayName = "Small Backpack";
        picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
        hiddenSelectionsTextures[]={"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_digi_co.paa"};
        maximumLoad = 60;
        mass = 10;
    };

    // Dogstuff
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

    // Tents
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