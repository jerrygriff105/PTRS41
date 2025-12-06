
class CfgPatches
{
    class PTRS41_Mod
    {
        units[] = {};
        weapons[] = {"PTRS41_Rifle"};
        magazines[] = {"PTRS41_5Rnd_145x114_Mag"};
        ammo[] = {"PTRS41_145x114_Ball"};
        requiredVersion = 1.0;
        requiredAddons[] = {"A3_Weapons_F"};
    };
};

class CfgWeapons
{
    class Rifle_Long_Base_F; // Inherit from Arma 3 base class

    class PTRS41_Rifle: Rifle_Long_Base_F
    {
        author = "nirot&jerry";
        _generalMacro = "PTRS41_Rifle";
        scope = 2;
        displayName = "PTRS-41 Anti-Tank Rifle";
        descriptionShort = "WWII Soviet Anti-Tank Rifle";
        model = "\PTRS41\PTRS41.p3d";
        picture = "\PTRS41\ui\PTRS41_icon_ca.paa";
        magazines[] = {"PTRS41_5Rnd_145x114_Mag"};
        reloadAction = "GestureReloadPTRS41";
        recoil = "recoil_dmr_03";
        initSpeed = 1000;
        handAnim[] = {"OFP2_ManSkeleton", "\PTRS41\anim\PTRS41_handanim.rtm"};
        dexterity = 1.5;
        mass = 350;
        aimTransitionSpeed = 0.2;
        inertia = 1.5;

        modes[] = {"Single"};
        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"PTRS41_Shot_SoundSet","PTRS41_Tail_SoundSet"};
            };
            reloadTime = 1.8;
            dispersion = 0.0005;
            recoil = "recoil_single_ptrs41";
            minRange = 5; minRangeProbab = 0.9;
            midRange = 300; midRangeProbab = 0.6;
            maxRange = 1000; maxRangeProbab = 0.1;
        };
    };
};

class CfgMagazines
{
    class CA_Magazine;
    class PTRS41_5Rnd_145x114_Mag: CA_Magazine
    {
        author = "niro&jerry";
        displayName = "PTRS-41 5Rnd Mag";
        ammo = "PTRS41_145x114_Ball";
        count = 5;
        initSpeed = 1000;
        picture = "\PTRS41\ui\PTRS41_mag_icon_ca.paa";
        mass = 25;
        descriptionShort = "5Rnd magazine for PTRS-41";
    };
};


#include "PTRS41_Ammo.hpp"

