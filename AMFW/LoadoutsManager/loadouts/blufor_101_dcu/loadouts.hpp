class Loadouts {
    class R {
        unitClassname = "B_Soldier_R_F";
        uniform = "R";
        vest = "R";
        primaryWeapon = "R";
        items = "R";
        backpack = "R";
    };
    class LAT : R {
        unitClassname = "B_Soldier_LAT_F";
        launcher = "LAT";
    };
    class AR : R {
        unitClassname = "B_Soldier_AR_F";
        uniform = "R_BASE";
        primaryWeapon = "AR";
        vest = "AR";
        backpack = "AR";
    };
    class GR : R {
        unitClassname = "B_Soldier_GL_F";
        primaryWeapon = "R_UGL";
        vest = "GR";
        backpack = "GR";
    };
    class DM : R {
        unitClassname = "B_Soldier_M_F";
        uniform = "DM";
        vest = "DM";
        primaryWeapon = "DMR";
        secondaryWeapon = "Pistol";
        backpack = "DM";
    };  
    class TL : GR {
        unitClassname = "B_Soldier_TL_F";
        uniform = "TL";
        primaryWeapon = "R_UGL_ACOG";
        backpack = "TL";
        items = "TL";
    };
    class SL : R {
        unitClassname = "B_Soldier_SL_F";
        uniform = "TL";
        primaryWeapon = "R_ACOG";
        items = "TL";
    };
    class MG : R {
        unitClassname = "B_support_MG_F";
        uniform = "R_BASE";
        primaryWeapon = "MG";
        vest = "MG";
        backpack = "MG";
    };
    class AMG : R {
        unitClassname = "B_support_AMG_F";
        backpack = "MG";
    };
    class HAT : R {
        unitClassname = "B_Soldier_AT_F";
        launcher = "HAT";
        backpack = "HAT";
    };
    class HAAT : R {
        unitClassname = "B_Soldier_AAT_F";
        backpack = "HAT";
    };
    class MED : R {
        unitClassname = "B_Patrol_Medic_F";
        backpack = "MED";
    };
    class RTO : R {
        unitClassname = "B_Patrol_Soldier_A_F";
        backpack = "RTO";
    };
    class PSG : TL {
        unitClassname = "B_Patrol_Soldier_TL_F";
    };
    class PL : SL {
        unitClassname = "B_officer_F";
    };
    class FO : R {
        unitClassname = "B_recon_JTAC_F";
        uniform = "TL";
        items = "TL";
    };
    class Pilot {
        unitClassname = "B_Pilot_F";
        uniform = "Pilot";
        vest = "Pilot";
        primaryWeapon = "SMG";
        items = "Pilot";
    };
    class Heli : Pilot {
        unitClassname = "B_Helipilot_F";
        items = "Heli";
    };
    class Crew : R {
        unitClassname = "B_crew_F";
        uniform = "Crew";
        items = "Crew";
    };
};