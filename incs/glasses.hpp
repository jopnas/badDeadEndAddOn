class CfgGlasses
{
	class None;
    class bde_gasmask:None
    {
        author = "NotSure";
        displayname = "Gasmask";
        model = "\bde\models\bde_gasmask.p3d";
        picture = "\bde\pics\bde_gasmask.paa";
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
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
        // model = "\bde\models\bde_gasmask_empty.p3d";
        picture = "\bde\pics\bde_gasmask.paa";
        // picture = "\bde\pics\bde_gasmask_empty.paa";
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
        mass = 5;
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