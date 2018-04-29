class CfgGlasses
{
	class None;
    class bde_gasmask:None
    {
        author = "NotSure";
        displayname = "Gasmask";
        model = "\bde\models\bde_gasmask.p3d";
        picture = "\bde\pics\bde_gasmask.paa";
        identityTypes[] = {};  
        mass = 10;
        class itemActions {
            class action1 {
                actionText = "Detache filter";
                outputItem = "bde_gasmask_empty";
                consumesItems[] = {"bde_gasmask"};
                requiredItems[] = {};
                putOutputItem = "cargo";
                actionTime = 5;
                actionSound = "";
                customFunction = "";
            };
        };

    };
    class bde_gasmask_wasted:bde_gasmask
    {
        author = "NotSure";
        displayname = "Gasmask (wasted filter)";
        model = "\bde\models\bde_gasmask.p3d";
        picture = "\bde\pics\bde_gasmask.paa";
        mass = 10;
        class itemActions {
            class action1 {
                actionText = "Change filter";
                outputItem = "bde_gasmask";
                consumesItems[] = {"bde_gasmask_filter","bde_gasmask_wasted"};
                requiredItems[] = {"bde_gasmask_filter"};
                putOutputItem = "cargo";
                actionTime = 10;
                actionSound = "";
                customFunction = "";
            };
        };
    };
    
    class bde_gasmask_empty:bde_gasmask
    {
        author = "NotSure";
        displayname = "Gasmask without filter";
        model = "\bde\models\bde_gasmask_empty.p3d";
        picture = "\bde\pics\bde_gasmask_empty.paa";
        mass = 7;
        class itemActions {
            class action1 {
                actionText = "Attache filter";
                outputItem = "bde_gasmask";
                consumesItems[] = {"bde_gasmask_filter","bde_gasmask_empty"};
                requiredItems[] = {"bde_gasmask_filter"};
                putOutputItem = "cargo";
                actionTime = 5;
                actionSound = "";
                customFunction = "";
            };
        };
    };
};