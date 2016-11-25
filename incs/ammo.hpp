class CfgAmmo {
    class Default;
	class BulletBase;
	class GrenadeHand;
    class GrenadeCore;

    // Melee
    class bde_melee_ammo : Default {
        simulation = "shotSpread";
        dispersion = 0.174;
        indirectHit = 0;
        indirectHitRange = 0;
        explosive = 0;
        simulationStep = 0.001;
        timeToLive = 0.04;
        airFriction = 0;
        hit = 3;

        visibleFire = 0.1;
        visibleFireTime = 0;
        audibleFire = 1;

        cost = 0.01;
        tracerColor[] = {0, 0, 0, 0};
        tracerColorR[] = {0, 0, 0, 0};
        typicalSpeed = 50;
        //explosionEffects = "ImpactBlood";
        //craterEffects = "ImpactEffectsBlood";
        //model = "\ca\Weapons\shell";
        caliber = 0.22;
    };
};