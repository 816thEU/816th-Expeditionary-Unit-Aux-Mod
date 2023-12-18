class CfgMods
{	
	class Mod_Base;
	class 816th_EU: Mod_Base
	{
		logo="\816thEU_Aux\816th_patch.paa";
		logoOver="\816thEU_Aux\816th_patch.paa";
		picture="\816thEU_Aux\816th_patch.paa";
		name="816th Aux Mod";
		dlcColor[]={0,0,0,1};
	};
	author="Photon";
	timepacked="1689015600";
};
class CfgPatches
{
	class 816thEU_Aux
	{
		author="Photon";
		requiredVersion=1;
		requiredAddons[]={};
		weapons[]=
		{
			"816th_Helmet_RFL_1",
			"816th_Helmet_RFL_2",
			"816th_Helmet_RFL_3",
			"816th_Helmet_Infantry_1",
			"816th_Helmet_Infantry_2",
			"816th_Helmet_Infantry_Medic",
			"816th_Helmet_RFL_Y_1",
			"816th_Helmet_RFL_Y_2",
			"816th_Helmet_RFL_Y_3",
			"816th_Helmet_ARFL_1",
			"816th_Helmet_ARFL_2",
			"816th_ARC_Helmet_1",
			"816th_ARC_Helmet_Yellow_1",
			"816th_ARC_Helmet_Spades",
			"816th_Helmet_ARF_1",
			"816th_Helmet_ARF_2",
			"816th_Helmet_ARF_3",
			"816th_Helmet_ARF_4",
			"816th_Helmet_ARF_LTH",
			"816th_Helmet_MED_1",
			"816th_Helmet_AIR_1",
			"816th_Helmet_AIR_2",
			"816th_Helmet_ENG_1",
			"816th_Helmet_Pilot_1",
			"816th_Custom_Helmet_Mako",
			"816th_Custom_Helmet_Photon",
			"816th_RFL_Uniform_1",
			"816th_Infantry_Uniform_1",
			"816th_Infantry_Uniform_2",
			"816th_Infantry_Medic_Uniform",
			"816th_RFL_Y_Uniform_1",
			"816th_RFL_Y_Uniform_2",
			"816th_RFL_Y_Uniform_3",
			"816th_ARFL_Uniform_1",
			"816th_ARFL_Uniform_2",
			"816th_ARC_Uniform_1",
			"816th_ARC_Y_Uniform_1",
			"816th_ARC_Uniform_Spades",
			"816th_ARF_Uniform_1",
			"816th_ARF_Uniform_2",
			"816th_ARF_Uniform_3",
			"816th_MED_Uniform_1",
			"816th_Custom_Uniform_Mako",
			"816th_Custom_Uniform_Photon",
			"816th_Vest_ARC_1",
			"816th_Vest_ARC_Spades",
			"816thEU_AUX_Backpack_1",
			"816thEU_AUX_Backpack_Heavy",
			"816thEU_AUX_Backpack_LongRange",
			"816thEU_AUX_Backpack_2",
			"816thEU_AUX_Backpack_MED",
			"816thEU_AUX_Backpack_ARC"
		};
		units[]=
		{
			"816th_RFL_Trooper_1",
			"816th_RFL_Trooper_2",
			"816th_Infantry_Trooper_1",
			"816th_Infantry_Trooper_2",
			"816th_Infantry_Medic",
			"816th_RFL_Y_Trooper_1",
			"816th_RFL_Y_Trooper_2",
			"816th_ARFL_Trooper_1",
			"816th_ARFL_Trooper_2",
			"816th_ARC_Trooper_1",
			"816th_ARC_Y_Trooper_1",
			"816th_ARC_Trooper_Spades",
			"816th_ARF_Trooper_1",
			"816th_ARF_Trooper_2",
			"816th_ARF_Trooper_3",
			"816th_MED_Trooper_1",
			"816th_AIR_Trooper_1",
			"816th_ENG_Trooper_1",
			"816th_Custom_Trooper_Mako",
			"816th_Custom_Trooper_Photon"
		};
	};
};
class CfgFactionClasses
{
	class 816th_EU_Faction
	{
		dlc="816th_EU";
		author="Photon, Blue, and Aussie";
		scope=2;
		scopeCurator=2;
		displayName="816th Expeditionary Unit";
	};
};


class CfgMusicClasses
{
	class 816th
	{
		displayName="816th EU";
	};
};
class CfgEditorSubcategories
{
	class 816th_QRF
	{
		displayName="Jormungunder (QRF)";
	};
	class 816th_ARF
	{
		displayName="Heimdall (ARF)";
	};
	class 816th_ARC
	{
		displayName="Fafnir (ARC)";
	};
};
class CfgWeapons
{
	class ls_gar_phase2_uniform;
	class ls_gar_phase2_helmet;
	class lsd_gar_arc_helmet;
	class ls_gar_phase2Pilot_helmet;
	class SWLB_clone_ccVisor;
	class SWLB_clone_mcVisor;
	class SWLB_clone_nvg;
	class SWLB_clone_nvg_nco;
	class SWLB_clone_rangefinder;
	class SWLB_clone_nvg_spec;
	class SWLB_clone_nvg_spec_nco;
	class SWLB_clone_commando_nvg_antenna;
	class SWLB_clone_commando_nvg;
	class SWLB_clone_BARC_helmet;
	class SWLB_clone_eng_helmet;
	class SWLB_clone_P1_helmet;
	class SWLB_clone_ARF_P1_helmet;
	class SWLB_clone_ARF_P2_helmet;
	class SWLB_clone_P2_helmet;
	class SWLB_clone_AB_helmet;
	class SWLB_clone_P15_helmet;
	class SWLB_clone_P1_2_helmet;
	class SWLB_clone_pilot_P2_helmet;
	class SWLB_clone_commando_helmet_k1;
	class SWLB_clone_recon_armor;
	class SWLB_clone_recon_officer_armor;
	class SWLB_clone_recon_nco_armor;
	class SWLB_clone_officer_armor;
	class SWLB_clone_medic_armor;
	class SWLB_clone_kama_armor;
	class SWLB_clone_commander_armor;
	class SWLB_clone_cfr_armor;
	class SWLB_clone_airborne_armor;
	class SWLB_clone_airborne_nco_armor;
	class SWLB_clone_arc_armor;
	class SWLB_clone_lieutenant_armor;
	class SWLB_clone_commando_eod_armor_k1;
	class SWLB_clone_commando_sniper_armor_k1;
	class SWLB_clone_commando_sl_armor_k1;
	class SWLB_clone_commando_tech_armor_k1;
	class SWLB_clone_uniform;
	class SWLB_clone_commando_uniform_k1;
	class SWLB_mando_og_armor;
	class SWLB_mando_og_helmet;
	class SWLB_mando_rangefinder;
	class UniformItem;
	class HeadgearItem;
	class VestItem;
	class ItemCore;
	class Vest_Camo_Base;
	class SWLB_clone_mc_uniform;
	class SWLB_P1_Pilot_Helmet;
	class SWLB_P2_SpecOps_Helmet;
	class SWLB_P1_SpecOps_Helmet;
	class ls_nvg_base;
	class iteminfo;
	class NVGoggles;
	class SWLB_CEE_Hazard_Vest;
	class SWLB_CEE_Heavy_Vest;
	class 816th_Helmet_RFL_1: SWLB_clone_P2_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Rifleman Helmet (1)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_RFL_1.paa"
		};
	};
	class 816th_Helmet_RFL_2: SWLB_clone_P2_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Rifleman Helmet (2)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_RFL_2.paa"
		};
	};
	class 816th_Helmet_RFL_3: SWLB_clone_P2_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Rifleman Helmet (3)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_RFL_3.paa"
		};
	};
	class 816th_Helmet_Infantry_1: SWLB_clone_P2_helmet
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayName="816th Infantry Helmet (1)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_Infantry_1.paa"
		};
	};
	class 816th_Helmet_Infantry_2: SWLB_clone_P2_helmet
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayName="816th Infantry Helmet (2)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_Infantry_2.paa"
		};
	};
	class 816th_Helmet_Infantry_Medic: SWLB_clone_P2_helmet
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayName="816th Infantry Medic Helmet";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_Infantry_Medic.paa"
		};
	};
	class 816th_Helmet_RFL_Y_1: SWLB_clone_P2_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Rifleman Yellow Helmet (1)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_RFL_Y_1.paa"
		};
	};
	class 816th_Helmet_RFL_Y_2: SWLB_clone_P2_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Rifleman Yellow Helmet (2)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_RFL_Y_2.paa"
		};
	};
	class 816th_Helmet_RFL_Y_3: SWLB_clone_P2_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Rifleman Yellow Helmet (3)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_RFL_Y_3.paa"
		};
	};
	class 816th_Helmet_ARFL_1: SWLB_clone_P2_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Advanced Rifleman Helmet (1)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_ARFL_1.paa"
		};
	};
	class 816th_Helmet_ARFL_2: SWLB_clone_P2_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Advanced Rifleman Helmet (2)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_ARFL_2.paa"
		};
	};
	class 816th_ARC_Helmet_1: SWLB_clone_P15_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARC Helmet (1)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_ARC_1.paa"
		};
	};
	class 816th_ARC_Helmet_Yellow_1: SWLB_clone_P15_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARC Yellow Helmet (1)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_ARC_Y_1.paa"
		};
	};
	class 816th_ARC_Helmet_Spades: lsd_gar_arc_helmet
	{
		dlc="816th_EU";
		author="Photon";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARC Helmet Spades";
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_Arc_Spades.paa",
			"lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
		};
	};
	class 816th_ARC_Helmet_Diamonds: lsd_gar_arc_helmet
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARC Helmet Diamonds";
		model="lsd_armor_bluefor\helmet\gar\arc\lsd_gar_arc_helmet";
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_Arc_Diamonds.paa",
			"lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
		};
	};
	class 816th_ARC_Helmet_Hearts: lsd_gar_arc_helmet
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARC Helmet Hearts";
		model="lsd_armor_bluefor\helmet\gar\arc\lsd_gar_arc_helmet";
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_Arc_Hearts.paa",
			"lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
		};
	};
	class 816th_Helmet_ARF_1: SWLB_clone_ARF_P1_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARF Helmet (1)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_ARF_1.paa",
			"816thEU_Aux\data\816th_Helmet_ARF_1.paa"
		};
	};
	class 816th_Helmet_ARF_2: SWLB_clone_ARF_P1_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARF Helmet (2)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_ARF_2.paa",
			"816thEU_Aux\data\816th_Helmet_ARF_2.paa"
		};
	};
	class 816th_Helmet_ARF_3: SWLB_clone_ARF_P1_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARF Helmet (3)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_ARF_3.paa",
			"816thEU_Aux\data\816th_Helmet_ARF_3.paa"
		};
	};
	class 816th_Helmet_ARF_4: SWLB_clone_ARF_P1_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARF Helmet (4)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_ARF_4.paa",
			"816thEU_Aux\data\816th_Helmet_ARF_4.paa"
		};
	};
	class 816th_Helmet_ARF_LTH: SWLB_P2_SpecOps_Helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Stealth Helmet (1)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_ARF_LTH.paa"
		};
	};
	class 816th_Helmet_MED_1: SWLB_clone_P2_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Medic Helmet (1)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_MED_1.paa"
		};
	};
	class 816th_Helmet_AIR_1: SWLB_clone_AB_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Airborne Helmet (1)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_AUX\data\816th_Helmet_AIR_1.paa"
		};
	};
	class 816th_Helmet_AIR_2: SWLB_clone_BARC_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Airborne Helmet (2)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_AUX\data\816th_Helmet_AIR_2.paa"
		};
	};
	class 816th_Helmet_ENG_1: SWLB_clone_eng_helmet
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Engineer Helmet (1)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_ENG_1.paa"
		};
	};
	class 816th_Helmet_Pilot_1: ls_gar_phase2Pilot_helmet
	{
		dlc="816th_EU";
		author="Photon";
		scope=2;
		scopeArsenal=2;
		displayName="816th Pilot Helmet (1)";
		model="ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"visor"
		};
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_Pilot_1.paa",
			"ls_armor_bluefor\helmet\gar\phase2pilot\data\visor_co.paa"
		};
	};
	class 816th_Custom_Helmet_Mako: lsd_gar_arc_helmet
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayName="816th Custom Helmet (Mako)";
		model="lsd_armor_bluefor\helmet\gar\arc\lsd_gar_arc_helmet";
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_Custom_Mako.paa",
			"816thEU_Aux\data\816th_Helmet_Custom_visor_Mako.paa"
		};
	};
	class 816th_Custom_Helmet_Photon: SWLB_clone_P2_helmet
	{
		dlc="816th_EU";
		author="Photon";
		scope=2;
		scopeArsenal=2;
		displayName="816th Custom Helmet (Photon)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_Custom_Photon.paa"
		};
	};
	class 816th_Custom_Helmet_Acorn: SWLB_clone_P1_helmet
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayName="816th Custom Helmet (Acorn)";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Helmet_Custom_Acorn.paa"
		};
	};
	class 816th_Custom_Helmet_Aussie: SWLB_clone_P2_helmet 
	{ 
		dlc="816th_EU"; 
		author="Aussie"; 
		scope=2; 
		scopeArsenal=2; 
		displayName="816th Custom Helmet (Aussie)"; 
		hiddenSelectionsTextures[]= 
		{ 
			"816thEU_Aux\data\816th_Helmet_Custom_Aussie.paa" 
		}; 
	}; 
	class 816th_RFL_Uniform_1: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Rifleman Uniform (1)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_RFL_Trooper_1";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_Infantry_Uniform_1: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayName="816th Infantry Uniform (1)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_Infantry_Trooper_1";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_Infantry_Uniform_2: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayName="816th Infantry Uniform (2)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_Infantry_Trooper_2";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_Infantry_Medic_Uniform: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayName="816th Infantry Medic Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_Infantry_Medic";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_RFL_Y_Uniform_1: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Rifleman Yellow Uniform (1)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_RFL_Y_Trooper_1";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_RFL_Y_Uniform_2: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Rifleman Yellow Uniform (2)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_RFL_Y_Trooper_2";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_RFL_Y_Uniform_3: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Rifleman Yellow Uniform (3)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_RFL_Y_Trooper_3";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_ARFL_Uniform_1: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Advanced Rifleman Uniform (1)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_ARFL_Trooper_1";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_ARFL_Uniform_2: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Advanced Rifleman Uniform (2)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_ARFL_Trooper_2";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_ARC_Uniform_1: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARC Uniform (1)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_ARC_Trooper_1";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_ARC_Y_Uniform_1: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARC Yellow Uniform (1)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_ARC_Y_Trooper_1";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_ARC_Uniform_Spades: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Photon";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARC Uniform Spades";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_ARC_Trooper_Spades";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_ARC_Uniform_Diamonds: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARC Uniform Diamonds";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_ARC_Trooper_Diamonds";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_ARC_Uniform_Hearts: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARC Uniform Hearts";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_ARC_Trooper_Hearts";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_ARF_Uniform_1: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARF Uniform (1)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_ARF_Trooper_1";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_ARF_Uniform_2: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARF Uniform (2)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_ARF_Trooper_2";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_ARF_Uniform_3: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARF Uniform (3)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_ARF_Trooper_3";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_MED_Uniform_1: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Medical Uniform (1)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_MED_Trooper_1";
			containerClass="Supply150";
			mass=40;
		};
	};

	class 816th_Custom_Uniform_Mako: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th Custom Uniform (Mako)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_Custom_Trooper_Mako";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_Custom_Uniform_Photon: SWLB_clone_uniform
	{
		dlc="816th_EU";
		author="Photon";
		scope=2;
		scopeArsenal=2;
		displayName="816th Custom Uniform (Photon)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="816th_Custom_Trooper_Photon";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 816th_Custom_Uniform_Aussie: SWLB_clone_uniform 
	{ 
		dlc="816th_EU"; 
		author="Aussie"; 
		scope=2; 
		scopeArsenal=2; 
		displayName="816th Custom Uniform (Aussie)"; 
		class ItemInfo: UniformItem 
		{ 
			uniformModel="-"; 
			uniformClass="816th_Custom_Trooper_Aussie"; 
			containerClass="Supply150"; 
			mass=40; 
		}; 
	}; 
	class 816th_Vest_ARC_1: SWLB_clone_officer_armor
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARC Trooper Vest (1)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_arc_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"816thEU_AUX\data\816th_Vest_ARC_Plate_1.paa",
			"816thEU_AUX\data\816th_Vest_ARC_1.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_arc_armor.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=14;
					PassThrough=0.00089999998;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=14;
					passThrough=0.00089999998;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.00089999998;
				};
			};
		};
	};
	class 816th_Vest_ARC_Spades: SWLB_clone_officer_armor
	{
		dlc="816th_EU";
		author="Photon";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARC Trooper Vest Spades";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_arc_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"816thEU_AUX\data\816th_vest_arc_plates_spades.paa",
			"816thEU_AUX\data\816th_vest_arc_spades.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_arc_armor.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=14;
					PassThrough=0.00089999998;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=14;
					passThrough=0.00089999998;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.00089999998;
				};
			};
		};
	};
	class 816th_Vest_ARC_Diamonds: SWLB_clone_officer_armor
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARC Trooper Vest Diamonds";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_arc_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"816thEU_AUX\data\816th_vest_arc_plates_diamonds.paa",
			"816thEU_AUX\data\816th_vest_arc_diamonds.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_arc_armor.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=14;
					PassThrough=0.00089999998;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=14;
					passThrough=0.00089999998;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.00089999998;
				};
			};
		};
	};
	class 816th_Vest_ARC_Hearts: SWLB_clone_officer_armor
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayName="816th ARC Trooper Vest Hearts";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_arc_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"816thEU_AUX\data\816th_vest_arc_plates_hearts.paa",
			"816thEU_AUX\data\816th_vest_arc_hearts.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_arc_armor.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=14;
					PassThrough=0.00089999998;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=14;
					passThrough=0.00089999998;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.00089999998;
				};
			};
		};
	};
	class ls_nvg_base;
	class lsd_gar_standard_nvg: ls_nvg_base
	{
		class ItemInfo;
	};
	class 816th_NVG_Chip: lsd_gar_standard_nvg
	{
		dlc="816th_EU";
		author="Photon";
		scope=2;
		scopeArsenal=2;
		displayName="816th Clone NVG Chip";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0};
		model="A3\weapons_F\ammo\mag_univ.p3d";
		modelOptics="BNA_KC_Gear\Data\Models\empty_model.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		picture="\MRC\JLTS\Core_mod\data\ui\nvg_chip_1_ui_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]={};
			uniformModel="BNA_KC_Gear\Data\Models\empty_model.p3d";
			modelOff="BNA_KC_Gear\Data\Models\empty_model.p3d";
		};
	};
	class 816th_NVG_Visor: 816th_NVG_Chip
	{
		displayName="816th Clone P2 NVG Visor";
		model="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"816thEU_AUX\data\816th_nvg_visor.paa"
		};
		picture="\lsd_equipment_bluefor\nvg\gar\_ui\icon_SWLB_clone_nvg_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			uniformModel="lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
			modelOff="lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_off.p3d";
		};
	};
	class 816th_NVG_Rangefinder: 816th_NVG_Chip
	{
		displayName="816th Clone P2 Rangefinder";
		model="lsd_equipment_bluefor\nvg\gar\lsd_gar_rangefinder_nvg_on.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"816thEU_AUX\data\816th_nvg_rangefinder.paa"
		};
		picture="SWLB_clones\data\ui\icon_SWLB_clone_rangefinder_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1"
			};
			uniformModel="lsd_equipment_bluefor\nvg\gar\rangefinder\lsd_gar_rangefinder_nvg_on.p3d";
			modelOff="lsd_equipment_bluefor\nvg\gar\rangefinder\lsd_gar_rangefinder_nvg_off.p3d";
		};
	};
};
class CfgVehicles
{
	class SWLB_clone_commando_base;
	class SWLB_clone_commando_backpack_k2;
	class SWLB_clone_commando_backpack_k2_rto;
	class SWLB_clone_commando_backpack_k2_eod;
	class SWLB_clone_base_P2;
	class SWLB_clone_assault_base_P2;
	class SWLB_clone_cfr_base_P2;
	class SWLB_clone_medic_base_P2;
	class SWLB_clone_RTO_base_P2;
	class SWLB_clone_recon_base_P2;
	class SWLB_clone_recon_nco_base_P2;
	class SWLB_clone_recon_officer_base_P2;
	class SWLB_clone_airborne_base_P2;
	class SWLB_clone_airborne_nco_base_P2;
	class SWLB_clone_lieutenant_base_P2;
	class SWLB_clone_captain_base_P2;
	class SWLB_clone_commander_base_P2;
	class SWLB_clone_marshal_commander_base_P2;
	class SWLB_clone_arc_base_P2;
	class SWLB_clone_pilot_base_P2;
	class SWLB_clone_sniper_base_P2;
	class SWLB_clone_sg_base_P2;
	class SWLB_clone_at_base_P2;
	class SWLB_clone_backpack;
	class SWLB_clone_backpack_eod;
	class SWLB_clone_backpack_heavy;
	class SWLB_clone_backpack_RTO;
	class SWLB_clone_RTO_mini_backpack;
	class SWLB_clone_arc_backpack;
	class SWLB_mando_base_assault;
	class B_Kitbag_rgr;
	class 816th_RFL_Trooper_1: SWLB_clone_base_P2
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeCurator=2;
		displayName="816th Rifleman Clonetrooper (1)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_QRF";
		uniformclass="816th_RFL_Trooper_1";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_RFL_1_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_RFL_1_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_Helmet_RFL_1"
		};
		respawnLinkedItems[]=
		{
			"816th_Helmet_RFL_1"
		};
	};
	class 816th_RFL_Trooper_2: SWLB_clone_base_P2
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeCurator=2;
		displayName="816th Rifleman Clonetrooper (2)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_QRF";
		uniformclass="816th_RFL_Trooper_2";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_RFL_2_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_RFL_2_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_Helmet_RFL_2"
		};
		respawnLinkedItems[]=
		{
			"816th_Helmet_RFL_2"
		};
	};
	class 816th_Infantry_Trooper_1: SWLB_clone_base_P2
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeCurator=2;
		displayName="816th Infantry Clonetrooper (1)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_QRF";
		uniformclass="816th_Infantry_Trooper_1";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_Infantry_1_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_Infantry_1_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_Helmet_Infantry_1",
			"816th_Infantry_Uniform_1",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
		respawnLinkedItems[]=
		{
			"816th_Helmet_Infantry_1",
			"816th_Infantry_Uniform_1",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
	};
	class 816th_Infantry_Trooper_2: SWLB_clone_base_P2
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeCurator=2;
		displayName="816th Infantry Clonetrooper (2)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_QRF";
		uniformclass="816th_Infantry_Trooper_2";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_Infantry_2_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_Infantry_2_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_Helmet_Infantry_2",
			"816th_Infantry_Uniform_2",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
		respawnLinkedItems[]=
		{
			"816th_Helmet_Infantry_2",
			"816th_Infantry_Uniform_2",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
	};
	class 816th_Infantry_Medic: SWLB_clone_base_P2
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeCurator=2;
		displayName="816th Infantry Medic";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_QRF";
		uniformclass="816th_Infantry_Medic";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_Infantry_Medic_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_Infantry_Medic_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_Helmet_Infantry_Medic",
			"816th_Infantry_Medic_Uniform",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
		respawnLinkedItems[]=
		{
			"816th_Helmet_Infantry_Medic",
			"816th_Infantry_Medic_Uniform",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
	};
	class 816th_RFL_Y_Trooper_1: SWLB_clone_base_P2
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeCurator=2;
		displayName="816th Rifleman Yellow Clonetrooper (1)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_QRF";
		uniformclass="816th_RFL_Y_Trooper_1";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_RFL_Y_1_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_RFL_Y_1_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_Helmet_RFL_Y_1"
		};
		respawnLinkedItems[]=
		{
			"816th_Helmet_RFL_Y_1"
		};
	};
	class 816th_RFL_Y_Trooper_2: SWLB_clone_base_P2
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeCurator=2;
		displayName="816th Rifleman Yellow Clonetrooper (2)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_QRF";
		uniformclass="816th_RFL_Y_Trooper_2";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_RFL_Y_2_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_RFL_Y_2_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_Helmet_RFL_Y_2"
		};
		respawnLinkedItems[]=
		{
			"816th_Helmet_RFL_Y_2"
		};
	};
	class 816th_ARFL_Trooper_1: SWLB_clone_base_P2
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeCurator=2;
		displayName="816th Advanced Rifleman Clonetrooper (1)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_QRF";
		uniformclass="816th_ARFL_Trooper_1";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_ARFL_1_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_ARFL_1_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_Helmet_ARFL_1"
		};
		respawnLinkedItems[]=
		{
			"816th_Helmet_ARFL_1"
		};
	};
	class 816th_ARFL_Trooper_2: SWLB_clone_base_P2
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeCurator=2;
		displayName="816th Advanced Rifleman Clonetrooper (2)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_QRF";
		uniformclass="816th_ARFL_Trooper_2";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_ARFL_2_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_ARFL_2_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_Helmet_ARFL_2"
		};
		respawnLinkedItems[]=
		{
			"816th_Helmet_ARFL_2"
		};
	};
	class 816th_ARC_Trooper_1: SWLB_clone_arc_base_P2
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeCurator=2;
		displayName="816th ARC Trooper (1)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_ARC";
		uniformclass="816th_ARC_Trooper_1";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_ARC_1_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_ARC_1_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_ARC_Helmet_1",
			"816th_ARC_Uniform_1",
 			"816th_Vest_ARC_1",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
		respawnLinkedItems[]=
		{
			"816th_ARC_Helmet_1",
			"816th_ARC_Uniform_1",
			"816th_Vest_ARC_1",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
	};
	class 816th_ARC_Y_Trooper_1: SWLB_clone_arc_base_P2
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeCurator=2;
		displayName="816th ARC Yellow Trooper (1)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_ARC";
		uniformclass="816th_ARC_Y_Trooper_1";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_ARC_Y_1_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_ARC_Y_1_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_Helmet_ARC_Y_1"
		};
		respawnLinkedItems[]=
		{
			"816th_Helmet_ARC_Y_1"
		};
	};
	class 816th_ARC_Trooper_Spades: SWLB_clone_arc_base_P2
	{
		dlc="816th_EU";
		author="Photon";
		scope=2;
		scopeCurator=2;
		displayName="816th ARC Trooper Spades";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_ARC";
		uniformclass="816th_ARC_Trooper_Spades";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_uniform_arc_spades_upper.paa",
			"816thEU_Aux\data\816th_uniform_arc_spades_lower.paa"
		};
		linkedItems[]=
		{
			"816th_ARC_Helmet_Spades",
			"816th_ARC_Uniform_Spades",
			"816th_Vest_ARC_Spades",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
		respawnLinkedItems[]=
		{
			"816th_ARC_Helmet_Spades",
			"816th_ARC_Uniform_Spades",
			"816th_Vest_ARC_Spades",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
	};
	class 816th_ARC_Trooper_Diamonds: SWLB_clone_arc_base_P2
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeCurator=2;
		displayName="816th ARC Trooper Diamonds";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_ARC";
		uniformclass="816th_ARC_Trooper_Diamonds";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_uniform_arc_diamonds_upper.paa",
			"816thEU_Aux\data\816th_uniform_arc_diamonds_lower.paa"
		};
		linkedItems[]=
		{
			"816th_ARC_Helmet_Diamonds",
			"816th_ARC_Uniform_Diamonds",
			"816th_Vest_ARC_Diamonds",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
		respawnLinkedItems[]=
		{
			"816th_ARC_Helmet_Diamonds",
			"816th_ARC_Uniform_Diamonds",
			"816th_Vest_ARC_Diamonds",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
	};
	class 816th_ARC_Trooper_Hearts: SWLB_clone_arc_base_P2
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeCurator=2;
		displayName="816th ARC Trooper Hearts";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_ARC";
		uniformclass="816th_ARC_Trooper_Hearts";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_uniform_arc_hearts_upper.paa",
			"816thEU_Aux\data\816th_uniform_arc_hearts_lower.paa"
		};
		linkedItems[]=
		{
			"816th_ARC_Helmet_Hearts",
			"816th_ARC_Uniform_Hearts",
			"816th_Vest_ARC_Hearts",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
		respawnLinkedItems[]=
		{
			"816th_ARC_Helmet_Hearts",
			"816th_ARC_Uniform_Hearts",
			"816th_Vest_ARC_Hearts",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
	};
	class 816th_ARF_Trooper_1: SWLB_clone_sniper_base_P2
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeCurator=2;
		displayName="816th ARF Trooper (1)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_ARF";
		uniformclass="816th_ARF_Trooper_1";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_ARF_1_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_ARF_1_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_Helmet_ARF_1",
			"816th_ARF_Uniform_1",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
		respawnLinkedItems[]=
		{
			"816th_Helmet_ARF_1",
			"816th_ARF_Uniform_1",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
	};
	class 816th_ARF_Trooper_2: SWLB_clone_sniper_base_P2
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeCurator=2;
		displayName="816th ARF Trooper (2)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_ARF";
		uniformclass="816th_ARF_Trooper_2";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_ARF_2_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_ARF_2_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_Helmet_ARF_2"
		};
		respawnLinkedItems[]=
		{
			"816th_Helmet_ARF_2"
		};
	};
	class 816th_ARF_Trooper_3: SWLB_clone_sniper_base_P2
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeCurator=2;
		displayName="816th ARF Trooper (3)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_ARF";
		uniformclass="816th_ARF_Trooper_3";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_ARF_3_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_ARF_3_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_Helmet_ARF_3"
		};
		respawnLinkedItems[]=
		{
			"816th_Helmet_ARF_3"
		};
	};
	class 816th_MED_Trooper_1: SWLB_clone_base_P2
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeCurator=2;
		displayName="816th Medical Clonetrooper (1)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_QRF";
		uniformclass="816th_MED_Trooper_1";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_MED_1_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_MED_1_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_Helmet_MED_1"
		};
		respawnLinkedItems[]=
		{
			"816th_Helmet_MED_1"
		};
	};
	class 816th_AIR_Trooper_1: SWLB_clone_airborne_base_P2
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeCurator=2;
		displayName="816th Airborne Trooper (1)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_ARF";
		uniformclass="816th_AIR_Trooper_1";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_ARF_1_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_ARF_1_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_Helmet_AIR_1"
		};
		respawnLinkedItems[]=
		{
			"816th_Helmet_AIR_1"
		};
	};
	class 816th_ENG_Trooper_1: SWLB_clone_base_P2
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeCurator=2;
		displayName="816th Engineer Clonetrooper (1)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_QRF";
		uniformclass="816th_ENG_Trooper_1";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_RFL_1_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_RFL_1_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_Helmet_ENG_1"
		};
		respawnLinkedItems[]=
		{
			"816th_Helmet_ENG_1"
		};
	};
	class 816th_Custom_Trooper_Mako: SWLB_clone_arc_base_P2
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeCurator=2;
		displayName="816th Custom Trooper (Mako)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_ARC";
		uniformclass="816th_Custom_Trooper_Mako";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_Custom_Mako_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_Custom_Mako_Lower.paa"
		};		
		linkedItems[]=
		{
			"816th_Custom_Helmet_Mako",
			"816th_Custom_Uniform_Mako",
			"816th_Vest_ARC_1",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
		respawnLinkedItems[]=
		{
			"816th_Custom_Helmet_Mako",
			"816th_Custom_Uniform_Mako",
			"816th_Vest_ARC_Spades",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
	};
	class 816th_Custom_Trooper_Photon: SWLB_clone_base_P2
	{
		dlc="816th_EU";
		author="Photon";
		scope=2;
		scopeCurator=2;
		displayName="816th Custom Trooper (Photon)";
		faction="816th_EU_Faction";
		backpack="";
		editorSubcategory="816th_ARC";
		uniformclass="816th_Custom_Trooper_Photon";
		hiddenSelectionsTextures[]=
		{
			"816thEU_Aux\data\816th_Uniform_Custom_Photon_Upper.paa",
			"816thEU_Aux\data\816th_Uniform_Custom_Photon_Lower.paa"
		};
		linkedItems[]=
		{
			"816th_Custom_Helmet_Photon",
			"816th_Custom_Uniform_Photon",
			"816th_Vest_ARC_Spades",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
		respawnLinkedItems[]=
		{
			"816th_Custom_Helmet_Photon",
			"816th_Custom_Uniform_Photon",
			"816th_Vest_ARC_Spades",
			"ItemMap",
			"SWLB_comlink",
			"ItemCompass",
			"TFAR_microdagr"
		};
	};
	class 816th_Custom_Trooper_Aussie: SWLB_clone_base_P2 
	{ 
		dlc="816th_EU"; 
		author="Aussie"; 
		scope=2; 
		scopeCurator=2; 
		displayName="816th Custom Trooper (Aussie)"; 
		faction="816th_EU_Faction"; 
		backpack=""; 
		editorSubcategory="816th_ARC"; 
		uniformclass="816th_Custom_Trooper_Aussie"; 
		hiddenSelectionsTextures[]= 
		{ 
			"816thEU_Aux\data\816th_Uniform_Custom_Aussie_Upper.paa", 
			"816thEU_Aux\data\816th_Uniform_Custom_Aussie_Lower.paa" 
		}; 
		linkedItems[]= 
		{ 
			"816th_Custom_Helmet_Aussie", 
			"816th_Custom_Uniform_Aussie", 
			"816th_Vest_ARC_Spades", 
			"ItemMap", 
			"SWLB_comlink", 
			"ItemCompass", 
			"TFAR_microdagr" 
		}; 
		respawnLinkedItems[]= 
		{ 
			"816th_Custom_Helmet_Aussie", 
			"816th_Custom_Uniform_Aussie", 
			"816th_Vest_ARC_Spades", 
			"ItemMap", 
			"SWLB_comlink", 
			"ItemCompass", 
			"TFAR_microdagr" 
		}; 
	}; 
	class ls_blueforBackpack_base: B_Kitbag_rgr
	{
		author="Legion Studios";
		scope=0;
		picture="";
		displayname="==BLUEFOR BACKPACK BASE==";
		model="";
		maximumload=200;
		hiddenselections[]={};
	};
	class ls_blueforRadioPack_base: ls_blueforBackpack_base
	{
		maximumload=300;
		picture="";
		displayName="";
		tf_dialog="SWLB_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};
	class 816thEU_AUX_Backpack_1: ls_blueforBackpack_base
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayname="816th Backpack 1";
		model="ls_equipment_bluefor\backpack\gar\backpack\ls_gar_standard_backpack.p3d";
		maximumload=2000;
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		hiddenselections[]=
		{
			"backpack",
			"cover"
		};
		hiddenselectionstextures[]=
		{
			"816thEU_Aux\data\816th_Backpack_Base.paa",
			"816thEU_Aux\data\816th_Backpack_Cover.paa"
		};
	};
	class 816thEU_AUX_Backpack_Heavy: ls_blueforBackpack_base
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayname="816th Heavy Backpack";
		model="ls_equipment_bluefor\backpack\gar\backpack\ls_gar_rocket_backpack.p3d";
		maximumload=2500;
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		hiddenselections[]=
		{
			"backpack",
			"holder",
			"rocket",
			"light",
			"pouches"
		};
		hiddenselectionstextures[]=
		{
			"816thEU_AUX\data\816th_Backpack_EOD.paa",
			"816thEU_AUX\data\816th_Backpack_Holder.paa",
			"816thEU_AUX\data\816th_Backpack_Rocket.paa",
			"816thEU_AUX\data\816th_Backpack_Light.paa",
			"816thEU_AUX\data\816th_Backpack_Pouches.paa"
		};
	};
	class 816thEU_AUX_Backpack_LongRange: ls_blueforRadioPack_base
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayname="816th LR Backpack";
		model="ls_equipment_bluefor\backpack\gar\mediumBackpack\ls_gar_mediumRadio_backpack.p3d";
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		maximumload=2500;
		hiddenselections[]=
		{
			"backpack",
			"radio",
			"screen",
			"pouches"
		};
		hiddenselectionstextures[]=
		{
			"816thEU_AUX\data\816th_Backpack_Base.paa",
			"816thEU_AUX\data\816th_Backpack_Radio.paa",
			"816thEU_AUX\data\816th_Backpack_Screen.paa",
			"816thEU_AUX\data\816th_Backpack_Pouches.paa"
		};
	};
	class 816thEU_AUX_Backpack_2: ls_blueforBackpack_base
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayname="816th Backpack 2";
		model="ls_equipment_bluefor\backpack\gar\heavyBackpack\ls_gar_heavy_backpack.p3d";
		maximumload=2250;
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		hiddenselections[]=
		{
			"backpack",
			"cover",
			"pouches",
			"tube"
		};
		hiddenselectionstextures[]=
		{
			"816thEU_AUX\data\816th_Backpack_Base.paa",
			"816thEU_Aux\data\816th_Backpack_Cover.paa",
			"816thEU_AUX\data\816th_Backpack_Pouches.paa",
			"816thEU_AUX\data\816th_Backpack_Tube.paa"
		};
	};
	class 816thEU_AUX_Backpack_MED: ls_blueforBackpack_base
	{
		dlc="816th_EU";
		author="Aussie";
		scope=2;
		scopeArsenal=2;
		displayname="816th Medic Backpack";
		model="ls_equipment_bluefor\backpack\gar\backpack\ls_gar_medic_backpack.p3d";
		maximumload=3000;
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		hiddenselections[]=
		{
			"backpack",
			"cover",
			"pouches",
			"medic1",
			"medic2"
		};
		hiddenselectionstextures[]=
		{
			"816thEU_AUX\data\816th_Backpack_Medic.paa",
			"816thEU_AUX\data\816th_Backpack_Cover.paa",
			"816thEU_AUX\data\816th_Backpack_Pouches.paa",
			"816thEU_AUX\data\816th_Backpack_Medic_Bacta.paa",
			"816thEU_AUX\data\816th_Backpack_Medic_Bacta.paa"
		};
	};
	class 816thEU_AUX_Backpack_ARC: ls_blueforBackpack_base
	{
		dlc="816th_EU";
		author="Blue";
		scope=2;
		scopeArsenal=2;
		displayname="816th ARC Backpack";
		tf_dialog="SWLB_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
		model="SWLB_equipment\backpacks\swlb_clone_arc_backpack.p3d";
		maximumload=2500;
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
	};
};