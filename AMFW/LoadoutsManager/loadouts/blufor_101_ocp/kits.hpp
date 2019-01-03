class Kits {
    class PrimaryWeapons {
        class R {
            weapon = "rhs_weap_m4a1";
            attachments[] = {"rhsusf_acc_anpeq15", "rhsusf_acc_grip3", "rhsusf_acc_ACOG"};
        };
        class R_UGL {
            weapon = "rhs_weap_m4a1_m320";
            attachments[] = {"rhsusf_acc_anpeq15", "rhsusf_acc_ACOG"};
        };
        class AR {
            weapon = "rhs_weap_m249_pip_L_para";
            attachments[] = {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_ELCAN"};
        };
        class DMR {
            weapon = "rhs_weap_m14ebrri";
            attachments[] = {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_LEUPOLDMK4", "rhsusf_acc_harris_bipod"};
        };
        class MG {
            weapon = "rhs_weap_m240B";
            attachments[] = {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_ELCAN"};
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
    };
    class Uniforms {
        class R_BASE {
            container = "rhs_uniform_cu_ocp_101st";
            contents[] = {
                {"ACE_quikclot", 10},
                {"ACE_morphine", 2},
                {"ACE_tourniquet", 2},
                {"ACE_IR_Strobe_Item", 1},
                {"ACE_microDAGR", 1},
                {"ACE_Flashlight_MX991", 1},
                {"ACE_CableTie", 2},
                {"ACE_EarPlugs", 1}
            };
        };
        class R {
            container = "rhs_uniform_cu_ocp_101st";
            contents[] = {
                {"ACE_quikclot", 10},
                {"ACE_morphine", 2},
                {"ACE_tourniquet", 2},
                {"ACE_IR_Strobe_Item", 1},
                {"ACE_microDAGR", 1},
                {"ACE_Flashlight_MX991", 1},
                {"ACE_CableTie", 2},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag", 1},
                {"ACE_EarPlugs", 1}
            };
        };
        class TL {
            container = "rhs_uniform_cu_ocp_101st";
            contents[] = {
                {"ACE_quikclot", 10},
                {"ACE_morphine", 2},
                {"ACE_tourniquet", 2},
                {"ACE_IR_Strobe_Item", 1},
                {"ACE_MapTools", 1},
                {"ACE_microDAGR", 1},
                {"ACE_Flashlight_MX991", 1},
                {"ACE_CableTie", 2},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag", 1},
                {"ACE_EarPlugs", 1}
            };
        };
        class DM {
            container = "rhs_uniform_cu_ocp_101st";
            contents[] = {
                {"ACE_quikclot", 10},
                {"ACE_morphine", 2},
                {"ACE_tourniquet", 2},
                {"ACE_IR_Strobe_Item", 1},
                {"ACE_MapTools", 1},
                {"ACE_microDAGR", 1},
                {"ACE_Flashlight_MX991", 1},
                {"ACE_CableTie", 2},
                {"rhsusf_mag_15Rnd_9x19_JHP", 2},
                {"ACE_EarPlugs", 1}
            };
        };
    };
    class Vests {
        class R {
            container = "rhsusf_spcs_ocp_rifleman_alt";
            contents[] = {
              {"rhs_mag_m67", 4},
              {"SmokeShell", 4},
              {"rhs_mag_30Rnd_556x45_M855A1_Stanag", 8},
              {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 1}
            };
        };
        class GR {
            container = "rhsusf_spcs_ocp_grenadier";
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
            container = "rhsusf_spcs_ocp_saw";
            contents[] = {
              {"rhs_mag_m67", 4},
              {"SmokeShell", 4},
              {"rhsusf_100Rnd_762x51", 2}
            };
        };
        class DM {
            container = "rhsusf_spcs_ocp_rifleman_alt";
            contents[] = {
              {"rhs_mag_m67", 4},
              {"SmokeShell", 4},
              {"rhsusf_20Rnd_762x51_m118_special_Mag", 5},
              {"rhsusf_mag_15Rnd_9x19_JHP", 1}
            };
        };
        class MG {
            container = "rhsusf_spcs_ocp_machinegunner";
            contents[] = {
              {"rhs_mag_m67", 4},
              {"SmokeShell", 4},
              {"rhsusf_100Rnd_762x51", 2}
            };
        };
    };
    class Backpacks {
        class R {
            container = "tfa_Kitbag_mc1";
            contents[] = {
                {"ACE_EntrenchingTool", 1}
            };
        };
        class AR {
            container = "tfa_Kitbag_mc1";
            contents[] = {
                {"ACE_EntrenchingTool", 1},
                {"rhsusf_200rnd_556x45_mixed_box", 4}
            };
        };
        class TL {
            container = "tfa_Kitbag_mc1";
            contents[] = {
                {"ACE_EntrenchingTool", 1},
                {"ACE_HuntIR_monitor", 1},
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
                {"ACE_HuntIR_M203", 2},
                {"rhs_mag_M585_white", 2},
                {"rhs_mag_m661_green", 2},
                {"rhs_mag_m662_red", 2},
                {"rhs_mag_m715_Green", 2},
                {"rhs_mag_m713_Red", 2},
                {"rhs_mag_m716_yellow", 2}
            };
        };
        class GR {
            container = "tfa_Kitbag_mc1";
            contents[] = {
                {"ACE_EntrenchingTool", 1},
                {"rhs_mag_M441_HE", 10},
                {"rhs_mag_M397_HET", 2},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 1},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag", 3}
            };
        };
        class DM {
            container = "tfa_Kitbag_mc1";
            contents[] = {
                {"ACE_EntrenchingTool", 1},
                {"rhsusf_20Rnd_762x51_m118_special_Mag", 6}
            };
        };
        class MED {
            container = "tfa_Kitbag_mc1";
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
            container = "tfa_Kitbag_mc1";
            contents[] = {
                {"ACE_EntrenchingTool", 1},
                {"rhsusf_100Rnd_762x51", 3},
                {"rhsusf_100Rnd_762x51_m62_tracer", 1}
            };
        };
        class MAT {
            container = "tfa_Kitbag_mc1";
            contents[] = {
                {"ACE_EntrenchingTool", 1},
                {"tf47_optic_m3maaws", 1},
                {"tf47_m3maaws_HEAT", 2},
                {"tf47_m3maaws_HE", 1}
            };
        };
        class RTO {
            container = "tf_rt1523g_big_rhs";
            contents[] = {
                {"ACE_EntrenchingTool", 1}
            };
        };
    };
    class Items {
        class R {
            headgear = "rhsusf_ach_helmet_ocp";
            items[] = {
                "ItemMap", "ItemCompass", "ItemRadio", "tf_microdagr", "rhsusf_ANPVS_14"
            };
        };
        class TL {
            headgear = "rhsusf_ach_helmet_ocp";
            items[] = {
                "ItemMap", "ItemCompass", "ItemRadio", "tf_microdagr", "rhsusf_ANPVS_14"
            };
            binoculars = "ACE_Vector";
        };
    };
};