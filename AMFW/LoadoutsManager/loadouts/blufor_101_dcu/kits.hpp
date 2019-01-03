class Kits {
    class PrimaryWeapons {
        class R {
            weapon = "rhs_weap_m4_carryhandle";
            attachments[] = {"rhsusf_acc_anpeq15", "rhsusf_acc_grip3", "rhsusf_acc_compm4"};
        };
        class R_ACOG {
            weapon = "rhs_weap_m4_carryhandle";
            attachments[] = {"rhsusf_acc_anpeq15", "rhsusf_acc_grip3", "rhsusf_acc_ACOG"};
        };
        class R_UGL {
            weapon = "rhs_weap_m4_m203";
            attachments[] = {"rhsusf_acc_anpeq15", "rhsusf_acc_compm4"};
        };
        class R_UGL_ACOG {
            weapon = "rhs_weap_m4_m203";
            attachments[] = {"rhsusf_acc_anpeq15", "rhsusf_acc_ACOG"};
        };
        class AR {
            weapon = "rhs_weap_m249_pip_L_para";
            attachments[] = {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_ELCAN"};
        };
        class DMR {
            weapon = "CUP_srifle_M14_DMR";
            attachments[] = {"rhsusf_acc_LEUPOLDMK4", "rhsusf_acc_harris_bipod"};
        };
        class MG {
            weapon = "rhs_weap_m240B";
            attachments[] = {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_ELCAN"};
        };
        class SMG {
            weapon = "CUP_smg_MP5A5";
        };
    };
    class SecondaryWeapons {
        class Pistol {
            weapon = "rhsusf_weap_m9";
        };
    };
    class Launchers {
        class LAT {
            weapon = "rhs_weap_M136";
        };
        class MAT {
            weapon = "tf47_m3maaws";
        };
        class HAT {
            weapon = "rhs_weap_fgm148";
        };
    };
    class Uniforms {
        class R_BASE {
            container = "U_B_MC_mopp_blk";
            contents[] = {
                {"ACE_quikclot", 10},
                {"ACE_morphine", 2},
                {"ACE_tourniquet", 2},
                {"ACE_IR_Strobe_Item", 1},
                {"ACE_Flashlight_MX991", 1},
                {"ACE_CableTie", 2},
                {"ACE_EarPlugs", 1}
            };
        };
        class R {
            container = "U_B_MC_mopp_blk";
            contents[] = {
                {"ACE_quikclot", 10},
                {"ACE_morphine", 2},
                {"ACE_tourniquet", 2},
                {"ACE_IR_Strobe_Item", 1},
                {"ACE_Flashlight_MX991", 1},
                {"ACE_CableTie", 2},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag", 1},
                {"ACE_EarPlugs", 1}
            };
        };
        class TL {
            container = "U_B_MC_mopp_blk";
            contents[] = {
                {"ACE_quikclot", 10},
                {"ACE_morphine", 2},
                {"ACE_tourniquet", 2},
                {"ACE_IR_Strobe_Item", 1},
                {"ACE_MapTools", 1},
                {"ACE_DAGR", 1},
                {"ACE_Flashlight_MX991", 1},
                {"ACE_CableTie", 2},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag", 1},
                {"ACE_EarPlugs", 1}
            };
        };
        class DM {
            container = "U_B_MC_mopp_blk";
            contents[] = {
                {"ACE_quikclot", 10},
                {"ACE_morphine", 2},
                {"ACE_tourniquet", 2},
                {"ACE_IR_Strobe_Item", 1},
                {"ACE_MapTools", 1},
                {"ACE_Flashlight_MX991", 1},
                {"ACE_CableTie", 2},
                {"rhsusf_mag_15Rnd_9x19_JHP", 2},
                {"ACE_EarPlugs", 1}
            };
        };
        class Pilot {
            container = "nomex_desert";
            contents[] = {
                {"ACE_quikclot", 10},
                {"ACE_morphine", 2},
                {"ACE_tourniquet", 2},
                {"ACE_IR_Strobe_Item", 1},
                {"ACE_MapTools", 1},
                {"ACE_DAGR", 1},
                {"ACE_Flashlight_MX991", 1},
                {"ACE_CableTie", 2},
                {"ACE_EarPlugs", 1}
            };
        };
        class Pilot {
            container = "nomex_desert";
            contents[] = {
                {"ACE_quikclot", 10},
                {"ACE_morphine", 2},
                {"ACE_tourniquet", 2},
                {"ACE_IR_Strobe_Item", 1},
                {"ACE_MapTools", 1},
                {"ACE_DAGR", 1},
                {"ACE_Flashlight_MX991", 1},
                {"ACE_CableTie", 2},
                {"ACE_EarPlugs", 1}
            };
        };
        class Crew {
            container = "U_B_BDU_DCU_blk";
            contents[] = {
                {"ACE_quikclot", 10},
                {"ACE_morphine", 2},
                {"ACE_tourniquet", 2},
                {"ACE_IR_Strobe_Item", 1},
                {"ACE_MapTools", 1},
                {"ACE_DAGR", 1},
                {"ACE_Flashlight_MX991", 1},
                {"ACE_CableTie", 2},
                {"ACE_EarPlugs", 1}
            };
        };
    };
    class Vests {
        class R {
            container = "V_IBA_FLC";
            contents[] = {
              {"rhs_mag_m67", 4},
              {"SmokeShell", 4},
              {"rhs_mag_30Rnd_556x45_M855A1_Stanag", 8},
              {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 1}
            };
        };
        class GR {
            container = "V_IBA_FLC_TL";
            contents[] = {
              {"rhs_mag_m67", 4},
              {"SmokeShell", 4},
              {"rhs_mag_30Rnd_556x45_M855A1_Stanag", 4},
              {"rhs_mag_M441_HE", 4},
              {"rhs_mag_M397_HET", 2},
              {"rhs_mag_m714_White", 2},
              {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 1}
            };
        };
        class AR {
            container = "V_IBA_SAW";
            contents[] = {
              {"rhs_mag_m67", 4},
              {"SmokeShell", 4},
              {"rhsusf_100Rnd_762x51", 2}
            };
        };
        class DM {
            container = "V_IBA_FLC";
            contents[] = {
              {"rhs_mag_m67", 4},
              {"SmokeShell", 4},
              {"rhsusf_20Rnd_762x51_m118_special_Mag", 5},
              {"rhsusf_mag_15Rnd_9x19_JHP", 1}
            };
        };
        class MG {
            container = "V_IBA_SAW";
            contents[] = {
              {"rhs_mag_m67", 4},
              {"SmokeShell", 4},
              {"rhsusf_100Rnd_762x51", 2}
            };
        };
        class Pilot {
            container = "Airchew_vest";
            contents[] = {
              {"SmokeShellGreen", 4},
              {"SmokeShellOrange", 4},
              {"SmokeShellBlue", 4},
              {"SmokeShellYellow", 4},
              {"CUP_30Rnd_9x19_MP5", 7}
            };
        };
    };
    class Backpacks {
        class R {
            container = "B_Kitbag_rgr";
            contents[] = {
                {"ACE_EntrenchingTool", 1}
            };
        };
        class AR {
            container = "B_Kitbag_rgr";
            contents[] = {
                {"ACE_EntrenchingTool", 1},
                {"rhsusf_200rnd_556x45_mixed_box", 4}
            };
        };
        class TL {
            container = "B_Kitbag_rgr";
            contents[] = {
                {"ACE_EntrenchingTool", 1},
                {"SmokeShellBlue", 3},
                {"SmokeShellGreen", 3},
                {"SmokeShellOrange", 3},
                {"SmokeShellPurple", 3},
                {"SmokeShellRed", 3},
                {"SmokeShellYellow", 3},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 1},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag", 3},
                {"Chemlight_blue", 2},
                {"Chemlight_green", 2},
                {"ACE_Chemlight_Orange", 2},
                {"Chemlight_yellow", 2},
                {"Chemlight_red", 2},
                {"rhs_mag_M585_white", 2},
                {"rhs_mag_m661_green", 2},
                {"rhs_mag_m662_red", 2},
                {"rhs_mag_m715_Green", 2},
                {"rhs_mag_m713_Red", 2},
                {"rhs_mag_m716_yellow", 2}
            };
        };
        class GR {
            container = "B_Kitbag_rgr";
            contents[] = {
                {"ACE_EntrenchingTool", 1},
                {"rhs_mag_M441_HE", 10},
                {"rhs_mag_M397_HET", 2},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 1},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag", 3}
            };
        };
        class DM {
            container = "B_Kitbag_rgr";
            contents[] = {
                {"ACE_EntrenchingTool", 1},
                {"rhsusf_20Rnd_762x51_m118_special_Mag", 6}
            };
        };
        class MED {
            container = "B_Kitbag_rgr";
            contents[] = {
                {"ACE_EntrenchingTool", 1},
                {"ACE_fieldDressing", 30},
                {"ACE_elasticBandage", 30},
                {"ACE_quikclot", 30},
                {"ACE_packingBandage", 30},
                {"ACE_morphine", 10},
                {"ACE_epinephrine", 10},
                {"ACE_personalAidKit", 1},
                {"ACE_surgicalKit", 1},
                {"ACE_salineIV", 10}
            };
        };
        class MG {
            container = "B_Kitbag_rgr";
            contents[] = {
                {"ACE_EntrenchingTool", 1},
                {"rhsusf_100Rnd_762x51", 3},
                {"rhsusf_100Rnd_762x51_m62_tracer", 1}
            };
        };
        class MAT {
            container = "B_Kitbag_rgr";
            contents[] = {
                {"ACE_EntrenchingTool", 1},
                {"tf47_optic_m3maaws", 1},
                {"tf47_m3maaws_HEAT", 2},
                {"tf47_m3maaws_HE", 1}
            };
        };
        class HAT {
            container = "B_Carryall_khk";
            contents[] = {
                {"ACE_EntrenchingTool", 1},
                {"rhs_fgm148_magazine_AT", 1},
            };
        };
        class RTO {
            container = "tf_rt1523g_black";
            contents[] = {
                {"ACE_EntrenchingTool", 1}
            };
        };
    };
    class Items {
        class R {
            headgear = "H_PASGT_dcu";
            items[] = {
                "ItemMap", "ItemCompass", "ItemRadio", "tf_microdagr", "rhsusf_ANPVS_14"
            };
        };
        class TL {
            headgear = "H_PASGT_dcu";
            items[] = {
                "ItemMap", "ItemCompass", "ItemRadio", "tf_microdagr", "rhsusf_ANPVS_14"
            };
            binoculars = "ACE_Vector";
        };
        class Pilot {
            headgear = "rhsusf_ihadss";
            items[] = {
                "ItemMap", "ItemCompass", "ItemRadio", "itemGPS", "tf_microdagr"
            };
        };
        class Heli {
            headgear = "rhsusf_hgu56p_black";
            items[] = {
                "ItemMap", "ItemCompass", "ItemRadio", "itemGPS", "tf_microdagr", "rhsusf_ANPVS_14"
            };
        };
        class Crew {
            headgear = "rhsusf_cvc_helmet";
            items[] = {
                "ItemMap", "ItemCompass", "ItemRadio", "itemGPS", "tf_microdagr", "rhsusf_ANPVS_14"
            };
        };
    };
};