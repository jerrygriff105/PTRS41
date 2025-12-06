class CfgAmmo
{
    class BulletBase;
    class PTRS41_145x114_Ball: BulletBase
    {
        cartridge = "FxCartridge_145";
        caliber = 7.12; // Higher than normal for anti-tank rifles
        displayName = "14.5x114mm Ball";
        hit = 36; // Damage value
        indirectHit = 0;
        indirectHitRange = 0;
        typicalSpeed = 1000;
        airFriction = -0.0005;
        model = "\A3\Weapons_Data_F\ammo\shell";
        tracerScale = 1.1;
        tracerStartTime = 0.03;
        tracerEndTime = 1.2;
        nvgOnly = 0;
        explosive = 0;
    };
};
