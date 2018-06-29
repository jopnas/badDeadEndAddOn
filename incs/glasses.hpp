class Headgear_Base_F;
class Item_Base_F;
class CfgGlasses
{
	class G_Balaclava_blk;
    class bde_gasmask:G_Balaclava_blk
    {
        author = "NotSure";
        displayname = "Gasmask";
        model = "\bde\models\gasmask\bde_gasmask.p3d";
        picture = "\bde\pics\bde_gasmask.paa";
        /*identityTypes[] = {};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        mass = 3;
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
        };*/

    };
    class bde_gasmask_wasted:bde_gasmask
    {
        displayname = "Gasmask (wasted filter)";
        model = "\bde\models\gasmask\bde_gasmask.p3d";
        picture = "\bde\pics\bde_gasmask.paa";
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
        displayname = "Gasmask without filter";
        model = "\bde\models\gasmask\bde_gasmask_empty.p3d";
        picture = "\bde\pics\bde_gasmask_empty.paa";
        mass = 2;
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