class CfgVehicles
{
    class Bag_Base;
    class Land_Pallet_F;
    class ContainerSupply;

    // Backpacks
    class bde_smallBackpack: Bag_Base
    {
        author = "NotSure";
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
        author = "NotSure";
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

    // Storages
    class bde_storage:ContainerSupply
    {
        scope = 2;
        author = "NotSure";
        displayName = "Storage";
        model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
        icon = "";
        mapsize = 2;
        maximumLoad = 10000;
        transportMaxMagazines = 20;
        transportMaxWeapons = 10;
        transportMaxBackpacks = 5;
        camouflage = 2;
        destrType = "DestructTent";
        armor = 100;
    };

    class bde_storage_lock:ContainerSupply
    {
        scope = 2;
        author = "NotSure";
        displayName = "Storage with Lock";
        model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
        icon = "";
        mapsize = 2;
        maximumLoad = 10000;
        transportMaxMagazines = 20;
        transportMaxWeapons = 10;
        transportMaxBackpacks = 5;
        camouflage = 2;
        destrType = "DestructTent";
        armor = 100;
    };

    class bde_storage_underground:ContainerSupply
    {
        scope = 2;
        author = "NotSure";
        displayName = "Storage Underground";
        model = "\A3\Structures_F\Training\ShootingPos_F";
        icon = "";
        mapsize = 2;
        maximumLoad = 10000;
        transportMaxMagazines = 20;
        transportMaxWeapons = 10;
        transportMaxBackpacks = 5;
        camouflage = 2;
        destrType = "DestructTent";
        armor = 100;
    };

    // Tents
    class bde_tentDome:ContainerSupply
    {
        scope = 2;
        author = "NotSure";
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
        author = "NotSure";
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

    // Barricading
    class bde_barricade_win_six:Land_Pallet_F {
        author = "NotSure";
        displayName = "Window Barricade. 6 Planks";
        model = "\bde\models\barricade_window_six";
        armor = 600;
    };
    class bde_barricade_win_five:bde_barricade_win_six {
        displayName = "Window Barricade. 5 Planks";
        model = "\bde\models\barricade_window_five";
        armor = 500;
    };
    class bde_barricade_win_four:bde_barricade_win_six {
        displayName = "Window Barricade. 4 Planks";
        model = "\bde\models\barricade_window_four";
        armor = 400;
    };
    class bde_barricade_win_three:bde_barricade_win_six {
        displayName = "Window Barricade. 3 Planks";
        model = "\bde\models\barricade_window_three";
        armor = 300;
    };
    class bde_barricade_win_two:bde_barricade_win_six {
        displayName = "Window Barricade. 2 Planks";
        model = "\bde\models\barricade_window_two";
        armor = 200;
    };
    class bde_barricade_win_one:bde_barricade_win_six {
        displayName = "Window Barricade. 1 Plank";
        model = "\bde\models\barricade_window_one";
        armor = 100;
    };

    class bde_codelock:Land_Pallet_F {
        author = "NotSure";
        model = "\bde\models\bde_codelock";
    };
};