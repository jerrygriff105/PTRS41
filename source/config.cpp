class CfgPatches {
    class PTRS41_Mod {
        units[] = {};
        weapons[] = {"PTRS41"};
        requiredVersion = 1.0;
        requiredAddons[] = {"A3_Weapons_F"};
    };
};

class CfgWeapons {
    class Rifle_Base_F; // base class to inherit

    class PTRS41 : Rifle_Base_F {
        scope = 2; // visible in editor
        displayName = "PTRS-41";
        model = "\path\to\your\PTRS41.p3d";
        picture = "\path\to\your\icon.paa";
        magazines[] = {"PTRS41_Mag"};
        reloadAction = "GestureReloadTRG"; 
        handAnim[] = {"OFP2_ManSkeleton", "\path\to\animation.rtm"};
        class WeaponSlotsInfo {
            mass = 120; // adjust weight
        };
    };
}
