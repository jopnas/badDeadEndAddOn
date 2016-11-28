class CfgMovesBasic {
	class ManActions {
		GestureSwing = " ";
	};

	class Actions {
		class NoActions : ManActions {
			GestureSwing[] = {"GestureSwing", "Gesture"};
		};
	};
};

class CfgGesturesMale {
	skeletonName = "OFP2_ManSkeleton";

	class ManActions {};

	class Actions {
		class NoActions {
			turnSpeed = 0;
			upDegree = 0;
			limitFast = 1;
			useFastMove = 0;
		};
	};

	class Default {
		actions = "NoActions";
		file = "";
		looped = true;
		speed = 0.5;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = false;
		soundOverride = "";
		soundEdge[] = {0.5, 1};
		terminal = false;
		equivalentTo = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		mask = "empty";
		interpolationSpeed = 6;
		interpolationRestart = false;
		preload = false;
		disableWeapons = true;
		enableOptics = true;
		showWeaponAim = true;
		enableMissile = true;
		enableBinocular = true;
		showItemInHand = false;
		showItemInRightHand = false;
		showHandGun = false;
		canPullTrigger = true;
		walkcycles = 1;
		headBobMode = 0;
		headBobStrength = 0;
		leftHandIKBeg = false;
		leftHandIKEnd = false;
		rightHandIKBeg = false;
		rightHandIKEnd = false;
		leftHandIKCurve[] = {1};
		rightHandIKCurve[] = {1};
		forceAim = 0;
	};

	class States {
		class GestureSwing : Default {
			file = "\bde\anims\melee_hatchet_swing.rtm";
			looped = false;
			speed = 1.28205;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = false;
			rightHandIKEnd = false;
		};
	};

	class BlendAnims {
		handsWeapon[] = {"head", 1, "neck1", 1, "neck", 1, "weapon", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine", 0.2, "Spine1", 0.3, "Spine2", 1, "Spine3", 1};
	};
};