class CfgGlasses
{
	class None;
    class bde_gasmask:None
    {
        author = "NotSure";
        displayname = "Gasmask";
        model = "\bde\models\bde_gasmask.p3d";
        picture = "\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};

        class EventHandlers
        {
            init = "_this addVariable['filter',1,true]";
        };
    };
    class bde_gasmask_wasted:bde_gasmask
    {
        author = "NotSure";
        displayname = "Gasmask (wasted filter)";
        model = "\bde\models\bde_gasmask_wasted.p3d";
        picture = "\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};

        class EventHandlers
        {
            init = "_this addVariable['filter',0,true]";
        };
    };
};