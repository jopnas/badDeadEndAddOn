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
    };

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
    };

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
    };
};
