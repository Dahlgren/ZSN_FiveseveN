////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Tue Jul 19 15:42:46 2016 : Created on Tue Jul 19 15:42:46 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZSN_FiveseveN
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_Loadouts","A3_Weapons_F_Mod","RH_de_cfg"};
	};
};
class cfgWeapons
{
	class SMG_03C_TR_khaki;
	class ZSN_SMG_03C_TR_khaki: SMG_03C_TR_khaki
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_smg_khk_F";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_SMG_03C_TR_khaki_ACO: SMG_03C_TR_khaki
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco_smg";
				slot = "CowsSlot";
			};
		};
	};
	class SMG_03C_TR_black;
	class ZSN_SMG_03C_TR_black: SMG_03C_TR_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_smg_blk_F";
				slot = "CowsSlot";
			};
		};
	};
	class RH_fn57;
	class ZSN_RH_fn57: RH_fn57
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "RH_sfn57";
				slot = "MuzzleSlot";
			};
		};
	};
	class RH_fn57_g;
	class ZSN_RH_fn57_g: RH_fn57_g
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "RH_sfn57";
				slot = "MuzzleSlot";
			};
		};
	};
	class RH_fn57_t;
	class ZSN_RH_fn57_t: RH_fn57_t
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "RH_sfn57";
				slot = "MuzzleSlot";
			};
		};
	};
	class RH_fnp45;
	class ZSN_RH_fnp45: RH_fnp45
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "RH_gemtech45";
			};
		};
	};
	class RH_fnp45t;
	class ZSN_RH_fnp45t_MRD: RH_fnp45t
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRD";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_RH_fnp45t_osp: RH_fnp45t
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "RH_osprey";
				slot = "MuzzleSlot";
			};
		};
	};
	class ZSN_RH_fnp45t_gem: RH_fnp45t
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "RH_gemtech45";
				slot = "MuzzleSlot";
			};
		};
	};
	class ZSN_RH_fnp45t: RH_fnp45t
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRD";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "RH_osprey";
				slot = "MuzzleSlot";
			};
		};
	};
};
class CfgVehicles
{
	class ReammoBox_F;
	class B_supplyCrate_F : ReammoBox_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			class _xx_RH_20Rnd_57x28_FN
			{
				magazine = "RH_20Rnd_57x28_FN";
				count = 6;
			};
			delete _xx_30Rnd_9x21_Mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 6;
			};
		};
	};
	class I_supplyCrate_F : B_supplyCrate_F
	{
		class TransportMagazines
		{
			delete _xx_11Rnd_45ACP_Mag;
			class _xx_RH_15Rnd_45cal_fnp
			{
				magazine = "RH_15Rnd_45cal_fnp";
				count = 6;	
			};
		};
	};
	class NATO_Box_Base : ReammoBox_F{};
	class Box_NATO_Ammo_F : NATO_Box_Base
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			class _xx_RH_20Rnd_57x28_FN
			{
				magazine = "RH_20Rnd_57x28_FN";
				count = 6;
			};
			delete _xx_30Rnd_9x21_Mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 6;
			};
		};
	};
	class Box_NATO_Wps_F : NATO_Box_Base
	{
		class TransportWeapons
		{
			delete _xx_hgun_P07_F;
			class RH_fn57
			{
				weapon = "RH_fn57";
				count = 1;
			};
			delete _xx_hgun_PDW2000_F;
			class SMG_03C_TR_black
			{
				weapon = "SMG_03C_TR_black";
				count = 1;
			};
		};
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			class _xx_RH_20Rnd_57x28_FN
			{
				magazine = "RH_20Rnd_57x28_FN";
				count = 1;
			};
			delete _xx_30Rnd_9x21_Mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Box_T_NATO_Wps_F : Box_NATO_Wps_F
	{
		class TransportWeapons
		{
			delete _xx_hgun_P07_khk_F;
			class RH_fn57
			{
				weapon = "RH_fn57";
				count = 1;
			};
			delete _xx_hgun_PDW2000_F;
			class SMG_03C_TR_black
			{
				weapon = "SMG_03C_TR_black";
				count = 1;
			};
		};
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			class _xx_RH_20Rnd_57x28_FN
			{
				magazine = "RH_20Rnd_57x28_FN";
				count = 1;
			};
			delete _xx_30Rnd_9x21_Mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Box_NATO_Support_F : NATO_Box_Base
	{
		class TransportItems
		{
			class muzzle_snds_570
			{
				name = "muzzle_snds_570";
				count = 5;
			};
			delete _xx_muzzle_snds_L;
			class RH_sfn57
			{
				name = "RH_sfn57";
				count = 5;
			};
		};
	};
	class Box_NATO_Equip_F : ReammoBox_F{};
	class Box_GEN_Equip_F : Box_NATO_Equip_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			class _xx_RH_12Rnd_45cal_usp
			{
				magazine = "RH_12Rnd_45cal_usp";
				count = 18;	
			};
		};
		class TransportWeapons
		{
			delete _xx_hgun_Rook40_F;
			class _xx_RH_usp
			{
				weapon = "RH_usp";
				count = 6;
			};
		};
	};
	class IND_Box_Base : ReammoBox_F{};
	class Box_IND_Ammo_F : IND_Box_Base
	{
		class TransportMagazines
		{
			delete _xx_11Rnd_45ACP_Mag;
			class _xx_RH_15Rnd_45cal_fnp
			{
				magazine = "RH_15Rnd_45cal_fnp";
				count = 6;
			};
		};
	};
	class Box_IND_Wps_F : IND_Box_Base
	{
		class TransportMagazines
		{
			delete _xx_11Rnd_45ACP_Mag;
			class _xx_RH_15Rnd_45cal_fnp
			{
				magazine = "RH_15Rnd_45cal_fnp";
				count = 1;
			};
		};
		class TransportWeapons
		{
			delete _xx_hgun_Pistol_heavy_01_F;
			class _xx_RH_fnp45t
			{
				weapon = "RH_fnp45t";
				count = 1;
			};
		};
	};
	class Box_Syndicate_Wps_F : ReammoBox_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag
			{
				magazine = "30Rnd_9x21_Mag";
				count = 2;	
			};
			delete _xx_10Rnd_9x21_Mag;
			class _xx_RH_18Rnd_9x19_gsh
			{
				magazine = "RH_18Rnd_9x19_gsh";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_hgun_PDW2000_snds_F
			{
				weapon = "hgun_PDW2000_snds_F";
				count = 2;
			};
			delete _xx_hgun_Pistol_01_F;
			class _xx_RH_gsh18
			{
				weapon = "RH_gsh18";
				count = 2;
			};
		};
	};
	class Box_Syndicate_Ammo_F : ReammoBox_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag
			{
				magazine = "30Rnd_9x21_Mag";
				count = 6;	
			};
			delete _xx_10Rnd_9x21_Mag;
			class _xx_RH_18Rnd_9x19_gsh
			{
				magazine = "RH_18Rnd_9x19_gsh";
				count = 6;
			};
		};
	};
	class SoldierWB;
	class SoldierEB;
	class O_Soldier_base_F : SoldierEB{};
	class O_Officer_F: O_Soldier_base_F
	{
		weapons[] = {"arifle_Katiba_C_ACO_F","RH_ttracker","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_F","RH_ttracker","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_T_Officer_F : O_officer_F
	{
		weapons[] = {"arifle_CTAR_blk_ACO_F","RH_ttracker_g","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_F","RH_ttracker_g","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class SoldierGB;
	class I_Soldier_base_F: SoldierGB
	{
		weapons[] = {"ZSN_arifle_Mk20_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_02_F : I_Soldier_base_F{};
	class I_Soldier_03_F : I_Soldier_base_F{};
	class I_Soldier_04_F : I_Soldier_base_F{};
	class I_pilot_F : I_Soldier_04_F{};
	class I_Fighter_Pilot_F : I_pilot_F
	{
		weapons[] = {"RH_fnp45","Throw","Put"};
		respawnWeapons[] = {"RH_fnp45","Throw","Put"};
		magazines[] = {"RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_Mk20_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
	};
	class I_Soldier_lite_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_Mk20_ACO_plain_F","RH_fnp45t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_ACO_plain_F","RH_fnp45t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_A_F: I_Soldier_02_F
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_GL_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_Mk20_GL_ACO_plain_F","RH_fnp45t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_GL_ACO_plain_F","RH_fnp45t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
	};
	class I_Soldier_AR_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_LMG_03_pointer_F","RH_fnp45t","Throw","Put"};
		respawnWeapons[] = {"ZSN_LMG_03_pointer_F","RH_fnp45t","Throw","Put"};
		magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_SL_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_Mk20_MRCO_pointer_plain_F","RH_fnp45t","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_MRCO_pointer_plain_F","RH_fnp45t","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_TL_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_Mk20_GL_MRCO_pointer_plain_F","RH_fnp45t","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_GL_MRCO_pointer_plain_F","RH_fnp45t","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
	};
	class I_Soldier_M_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_srifle_DMR_03_khaki_MRCO_LP_BI_F","RH_fnp45t","Throw","Put"};
		respawnWeapons[] = {"ZSN_srifle_DMR_03_khaki_MRCO_LP_BI_F","RH_fnp45t","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_LAT_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_Mk20_ACO_pointer_plain_F","launch_NLAW_F","RH_fnp45t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_ACO_pointer_plain_F","launch_NLAW_F","RH_fnp45t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_AT_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_Mk20C_ACO_pointer_plain_F","launch_I_Titan_short_F","RH_fnp45t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20C_ACO_pointer_plain_F","launch_I_Titan_short_F","RH_fnp45t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_AA_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_Mk20C_ACO_pointer_plain_F","launch_I_Titan_F","RH_fnp45t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20C_ACO_pointer_plain_F","launch_I_Titan_F","RH_fnp45t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_medic_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_Mk20_pointer_plain_F","RH_fnp45t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_pointer_plain_F","RH_fnp45t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_repair_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_Mk20_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_exp_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_Mk20C_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20C_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_engineer_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_Mk20C_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20C_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_crew_F: I_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20C_plain_F","RH_fnp45t","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_plain_F","RH_fnp45t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Helipilot_F: I_Soldier_03_F{};
	class I_helicrew_F: I_Helipilot_F
	{
		weapons[] = {"arifle_Mk20C_plain_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_plain_F","Throw","Put"};
	};
	class I_officer_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_Mk20C_ACO_plain_F","ZSN_RH_fnp45t_MRD","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_Mk20C_ACO_plain_F","ZSN_RH_fnp45t_MRD","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_diver_base_F: I_Soldier_base_F
	{
		weapons[] = {"arifle_SDAR_F","ZSN_RH_fnp45","Throw","Put"};
		respawnWeapons[] = {"arifle_SDAR_F","ZSN_RH_fnp45","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_sniper_base_F: I_Soldier_base_F
	{
		weapons[] = {"srifle_GM6_LRPS_F","ZSN_RH_fnp45t_osp","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_LRPS_F","ZSN_RH_fnp45t_osp","Throw","Put","Rangefinder"};
	};
	class I_spotter_F: I_Soldier_sniper_base_F
	{
		weapons[] = {"arifle_Mk20_MRCO_plain_F","ZSN_RH_fnp45t_gem","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_Mk20_MRCO_plain_F","ZSN_RH_fnp45t_gem","Throw","Put","Laserdesignator_03"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_sniper_F: I_Soldier_sniper_base_F
	{
		weapons[] = {"srifle_GM6_LRPS_F","ZSN_RH_fnp45t_osp","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_LRPS_F","ZSN_RH_fnp45t_osp","Throw","Put","Rangefinder"};
		magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_support_base_F: I_Soldier_base_F
	{
		weapons[] = {"zsn_arifle_Mk20_ACO_pointer_plain_F","RH_fnp45t","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"zsn_arifle_Mk20_ACO_pointer_plain_F","RH_fnp45t","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_support_MG_F: I_Soldier_support_base_F
	{
		weapons[] = {"zsn_arifle_Mk20C_ACO_plain_F","RH_fnp45t","Throw","Put"};
		respawnweapons[] = {"zsn_arifle_Mk20C_ACO_plain_F","RH_fnp45t","Throw","Put"};
	};
	class I_support_GMG_F: I_Soldier_support_base_F
	{
		weapons[] = {"zsn_arifle_Mk20C_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
		respawnweapons[] = {"zsn_arifle_Mk20C_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
	};
	class I_support_Mort_F: I_Soldier_support_base_F
	{
		weapons[] = {"zsn_arifle_Mk20C_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
		respawnweapons[] = {"zsn_arifle_Mk20C_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
	};
	class I_support_AMG_F: I_Soldier_support_base_F
	{
		weapons[] = {"zsn_arifle_Mk20C_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
		respawnweapons[] = {"zsn_arifle_Mk20C_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
	};
	class I_support_AMort_F: I_Soldier_support_base_F
	{
		weapons[] = {"zsn_arifle_Mk20C_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
		respawnweapons[] = {"zsn_arifle_Mk20C_ACO_pointer_plain_F","RH_fnp45t","Throw","Put"};
	};
	class ZSN_I_Soldier_recon_base;
	class ZSN_I_recon_F: ZSN_I_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_Mk20c_ACO_pointer_snds_plain_F","ZSN_RH_fnp45t","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_Mk20c_ACO_pointer_snds_plain_F","ZSN_RH_fnp45t","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_LAT_F: ZSN_I_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_Mk20c_ACO_pointer_snds_plain_F","launch_NLAW_F","ZSN_RH_fnp45t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20c_ACO_pointer_snds_plain_F","launch_NLAW_F","ZSN_RH_fnp45t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_exp_F: ZSN_I_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_Mk20c_ACO_pointer_snds_plain_F","ZSN_RH_fnp45t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20c_ACO_pointer_snds_plain_F","ZSN_RH_fnp45t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_medic_F: ZSN_I_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_Mk20c_ACO_pointer_snds_plain_F","ZSN_RH_fnp45t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20c_ACO_pointer_snds_plain_F","ZSN_RH_fnp45t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_TL_F: ZSN_I_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_Mk20C_MRCO_pointer_snds_plain_F","ZSN_RH_fnp45t","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_Mk20C_MRCO_pointer_snds_plain_F","ZSN_RH_fnp45t","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_red","30Rnd_556x45_Stanag_Tracer_red","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_red","30Rnd_556x45_Stanag_Tracer_red","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_M_F: ZSN_I_Soldier_recon_base
	{
		weapons[] = {"ZSN_srifle_DMR_03_tan_AMS_LP_BI_snds_F","ZSN_RH_fnp45t","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_srifle_DMR_03_tan_AMS_LP_BI_snds_F","ZSN_RH_fnp45t","Throw","Put","Rangefinder"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_JTAC_F: ZSN_I_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_Mk20_GL_ACO_pointer_snds_plain_F","ZSN_RH_fnp45t","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_GL_ACO_pointer_snds_plain_F","ZSN_RH_fnp45t","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class ZSN_I_Pathfinder_F: ZSN_I_Soldier_recon_base
	{
		weapons[] = {"ZSN_srifle_DMR_04_Tan_TWS_LP_F","ZSN_RH_fnp45t","Throw","Put","laserdesignator_02"};
		respawnWeapons[] = {"ZSN_srifle_DMR_04_Tan_TWS_LP_F","ZSN_RH_fnp45t","Throw","Put","laserdesignator_02"};
		magazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade","MiniGrenade","Laserbatteries"};
		respawnMagazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade","MiniGrenade","Laserbatteries"};
	};
	class I_G_Soldier_base_F : SoldierGB{};
	class I_G_Soldier_SL_F : I_G_Soldier_base_F
	{
		weapons[] = {"arifle_TRG20_ACO_F","RH_fnp45","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_TRG20_ACO_F","RH_fnp45","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_TL_F : I_G_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_GL_ACO_F","RH_fnp45","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_GL_ACO_F","RH_fnp45","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
	};
	class I_G_medic_F : I_G_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_F","RH_fnp45","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_F","RH_fnp45","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_officer_F : I_G_Soldier_base_F
	{
		weapons[] = {"arifle_TRG21_MRCO_F","RH_fnp45","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_MRCO_F","RH_fnp45","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_F : I_G_Soldier_base_F{};
	class B_G_Soldier_F : I_G_Soldier_F{};
	class I_G_Story_Protagonist_F : B_G_Soldier_F
	{
		weapons[] = {"arifle_TRG21_GL_MRCO_F","RH_fnp45","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_GL_MRCO_F","RH_fnp45","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_45cal_fnp","RH_15Rnd_45cal_fnp","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
	};
	class I_C_Soldier_base_F : I_G_Soldier_base_F{};
	class I_C_Soldier_Para_2_F : I_C_Soldier_base_F
	{
		weapons[] = {"arifle_AK12_F","RH_gsh18","Throw","Put"};
		respawnWeapons[] = {"arifle_AK12_F","RH_gsh18","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","RH_18Rnd_9x19_gsh","RH_18Rnd_9x19_gsh","RH_18Rnd_9x19_gsh","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","RH_18Rnd_9x19_gsh","RH_18Rnd_9x19_gsh","RH_18Rnd_9x19_gsh","HandGrenade","HandGrenade"};
	};
	class I_C_Soldier_Para_4_F : I_C_Soldier_base_F
	{
		weapons[] = {"LMG_Mk200_F","RH_gsh18","Throw","Put"};
		respawnWeapons[] = {"LMG_Mk200_F","RH_gsh18","Throw","Put"};
		magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","RH_18Rnd_9x19_gsh","RH_18Rnd_9x19_gsh","RH_18Rnd_9x19_gsh"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","RH_18Rnd_9x19_gsh","RH_18Rnd_9x19_gsh","RH_18Rnd_9x19_gsh"};
	};
	class I_C_Soldier_Bandit_3_F : I_C_Soldier_base_F
	{
		weapons[] = {"LMG_Mk200_F","RH_gsh18","Throw","Put"};
		respawnWeapons[] = {"LMG_Mk200_F","RH_gsh18","Throw","Put"};
		magazines[] = {"200Rnd_65x39_cased_Box","RH_18Rnd_9x19_gsh","RH_18Rnd_9x19_gsh","RH_18Rnd_9x19_gsh"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box","RH_18Rnd_9x19_gsh","RH_18Rnd_9x19_gsh","RH_18Rnd_9x19_gsh"};
	};
	class I_C_Soldier_Bandit_7_F : I_C_Soldier_base_F
	{
		weapons[] = {"hgun_PDW2000_snds_F","Throw","Put"};
		respawnWeapons[] = {"hgun_PDW2000_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","MiniGrenade","MiniGrenade"};
		respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","MiniGrenade","MiniGrenade"};
	};
	class I_C_Soldier_Camo_F : I_C_Soldier_base_F
	{
		weapons[] = {"RH_gsh18","Throw","Put"};
		respawnWeapons[] = {"RH_gsh18","Throw","Put"};
		magazines[] = {"RH_18Rnd_9x19_gsh","RH_18Rnd_9x19_gsh","RH_18Rnd_9x19_gsh"};
		respawnMagazines[] = {"RH_18Rnd_9x19_gsh","RH_18Rnd_9x19_gsh","RH_18Rnd_9x19_gsh"};
	};
	class B_Soldier_base_F: SoldierWB
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_Officer_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_F","RH_kimber","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_F","RH_kimber","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Officer_F: B_Officer_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_F","RH_kimber_nw","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_F","RH_kimber_nw","Throw","Put"};
	};
	class B_Soldier_diver_base_F : B_Soldier_base_F
	{
		weapons[] = {"arifle_SDAR_F","ZSN_RH_fn57","Throw","Put"};
		respawnWeapons[] = {"arifle_SDAR_F","ZSN_RH_fn57","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","SmokeShellBlue","SmokeShellBlue","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","SmokeShellBlue","SmokeShellBlue","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue"};
	};
	class B_Soldier_02_f: B_Soldier_base_F{};
	class B_Soldier_03_f: B_Soldier_base_F{};
	class B_Soldier_04_f: B_Soldier_base_F{};
	class B_Soldier_05_f : B_Soldier_base_F{};
	class B_Pilot_F : B_Soldier_05_f
	{
		weapons[] = {"ZSN_SMG_03C_TR_black","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_black","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShell","SmokeShellBlue","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShell","SmokeShellBlue","Chemlight_green"};
	};
	class B_Fighter_Pilot_F : B_Pilot_F
	{
		weapons[] = {"RH_fn57","Throw","Put"};
		respawnWeapons[] = {"RH_fn57","Throw","Put"};
		magazines[] = {"RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_F : B_Soldier_base_F{};
	class B_GEN_Soldier_base_F : B_Soldier_F{};
	class B_GEN_Soldier_F : B_GEN_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_gend_F","RH_usp","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_gend_F","RH_usp","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","HandGrenade","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","HandGrenade","SmokeShell"};
	};
	class B_GEN_Commander_F : B_GEN_Soldier_base_F
	{
		weapons[] = {"SMG_05_F","RH_usp","Throw","Put","Binocular"};
		respawnWeapons[] = {"SMG_05_F","RH_usp","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","HandGrenade","SmokeShell","SmokeShellYellow"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","HandGrenade","SmokeShell","SmokeShellYellow"};
	};
	class B_Soldier_lite_F: B_Soldier_03_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_F","RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_F","RH_fn57_t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_F : B_Soldier_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_g","Throw","Put"};
	};
	class B_Soldier_GL_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_ACO_F","RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_khk_ACO_F","RH_fn57_t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_T_Soldier_GL_F: B_Soldier_GL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_ACO_F","RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_khk_ACO_F","RH_fn57_g","Throw","Put"};
	};
	class B_Soldier_AR_F: B_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_khk_pointer_F","RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_khk_pointer_F","RH_fn57_t","Throw","Put"};
		magazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_AR_F: B_soldier_AR_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_khk_pointer_F","RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_khk_pointer_F","RH_fn57_g","Throw","Put"};
	};
	class B_Soldier_SL_F: B_Soldier_03_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Hamr_pointer_F","RH_fn57_t","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Hamr_pointer_F","RH_fn57_t","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_SL_F: B_Soldier_SL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Hamr_pointer_F","RH_fn57_g","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Hamr_pointer_F","RH_fn57_g","Throw","Put","Binocular"};
	};
	class B_Soldier_TL_F: B_Soldier_03_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","RH_fn57_t","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","RH_fn57_t","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_T_Soldier_TL_F: B_Soldier_TL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","RH_fn57_g","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","RH_fn57_g","Throw","Put","Binocular"};
	};
	class B_soldier_M_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_03_khk_Hamr_LP_BI_F","RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_03_khk_Hamr_LP_BI_F","RH_fn57_t","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_M_F: B_soldier_M_F
	{
		weapons[] = {"ZSN_arifle_SPAR_03_khk_Hamr_LP_BI_F","RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_03_khk_Hamr_LP_BI_F","RH_fn57_g","Throw","Put"};
	};
	class B_soldier_LAT_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","launch_NLAW_F","RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","launch_NLAW_F","RH_fn57_t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_LAT_F: B_soldier_LAT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","launch_NLAW_F","RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","launch_NLAW_F","RH_fn57_g","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_medic_F: B_Soldier_02_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_pointer_F","RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_pointer_F","RH_fn57_t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_medic_F: B_medic_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_pointer_F","RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_pointer_F","RH_fn57_g","Throw","Put"};
	};
	class B_soldier_repair_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_repair_F: B_soldier_repair_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_g","Throw","Put"};
	};
	class B_soldier_exp_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_exp_F: B_soldier_exp_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_g","Throw","Put"};
	};
	class B_Soldier_A_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_A_F: B_Soldier_A_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_g","Throw","Put"};
	};
	class B_soldier_AT_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","launch_B_Titan_short_F","RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","launch_B_Titan_short_F","RH_fn57_t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_AT_F: B_soldier_AT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","launch_B_Titan_short_tna_F","RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","launch_B_Titan_short_tna_F","RH_fn57_g","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_AA_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","launch_B_Titan_F","RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","launch_B_Titan_F","RH_fn57_t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_AA_F: B_soldier_AA_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","launch_B_Titan_tna_F","RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","launch_B_Titan_tna_F","RH_fn57_g","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_engineer_F : B_Soldier_03_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_engineer_F : B_engineer_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_g","Throw","Put"};
	};
	class B_crew_F: B_Soldier_03_f
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_ACO","RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_ACO","RH_fn57_t","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_T_Crew_F: B_crew_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_ACO","RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_ACO","RH_fn57_g","Throw","Put"};
		linkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
	};
	class B_Helipilot_F: B_Soldier_04_f
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_Helipilot_F: B_Helipilot_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		linkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
	};
	class B_Helicrew_F: B_Helipilot_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_Helicrew_F: B_Helicrew_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		linkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
	};
	class B_Soldier_recon_base: B_Soldier_base_F{};
	class B_Recon_Sharpshooter_F : B_Soldier_recon_base
	{
		weapons[] = {"srifle_DMR_02_sniper_AMS_LP_S_F","ZSN_RH_fn57_t","Throw","Put","Binocular"};
		respawnWeapons[] = {"srifle_DMR_02_sniper_AMS_LP_S_F","ZSN_RH_fn57_t","Throw","Put","Binocular"};
		magazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade"};
		respawnMagazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade"};
	};
	class B_recon_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","ZSN_RH_fn57_t","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","ZSN_RH_fn57_t","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_F: B_recon_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","ZSN_RH_fn57_g","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","ZSN_RH_fn57_g","Throw","Put","Binocular"};
	};
	class B_recon_LAT_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","launch_NLAW_F","ZSN_RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","launch_NLAW_F","ZSN_RH_fn57_t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_LAT_F: B_recon_LAT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","launch_NLAW_F","ZSN_RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","launch_NLAW_F","ZSN_RH_fn57_g","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_recon_exp_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","ZSN_RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","ZSN_RH_fn57_t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_exp_F: B_recon_exp_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","ZSN_RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","ZSN_RH_fn57_g","Throw","Put"};
	};
	class B_recon_medic_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","ZSN_RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","ZSN_RH_fn57_t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_medic_F: B_recon_medic_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","ZSN_RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","ZSN_RH_fn57_g","Throw","Put"};
	};
	class B_recon_TL_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_snds_F","ZSN_RH_fn57_t","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_snds_F","ZSN_RH_fn57_t","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_red","30Rnd_556x45_Stanag_Tracer_red","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_red","30Rnd_556x45_Stanag_Tracer_red","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_TL_F: B_recon_TL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_snds_F","ZSN_RH_fn57_g","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_snds_F","ZSN_RH_fn57_g","Throw","Put","Rangefinder"};
	};
	class B_recon_M_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_03_snd_MOS_LP_BI_snds_F","ZSN_RH_fn57_t","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_03_snd_MOS_LP_BI_snds_F","ZSN_RH_fn57_t","Throw","Put","Rangefinder"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_M_F: B_recon_M_F
	{
		weapons[] = {"ZSN_arifle_SPAR_03_snd_MOS_LP_BI_snds_F","ZSN_RH_fn57_g","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_03_snd_MOS_LP_BI_snds_F","ZSN_RH_fn57_g","Throw","Put","Rangefinder"};
	};
	class B_recon_JTAC_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_snd_Holo_pointer_snds_F","ZSN_RH_fn57_t","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_snd_Holo_pointer_snds_F","ZSN_RH_fn57_t","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_T_recon_JTAC_F: B_recon_JTAC_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_snd_Holo_pointer_snds_F","ZSN_RH_fn57_g","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_snd_Holo_pointer_snds_F","ZSN_RH_fn57_g","Throw","Put","Laserdesignator"};
	};
	class B_Soldier_sniper_base_F: B_Soldier_base_F{};
	class B_ghillie_base_F : B_Soldier_sniper_base_F
	{
		weapons[] = {"srifle_LRR_tna_LRPS_F","ZSN_RH_fn57_t","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","ZSN_RH_fn57_t","Throw","Put","Rangefinder"};
		magazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_ghillie_tna_F : B_ghillie_base_F
	{
		weapons[] = {"srifle_LRR_tna_LRPS_F","ZSN_RH_fn57_g","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","ZSN_RH_fn57_g","Throw","Put","Rangefinder"};
	};
	class B_sniper_F : B_Soldier_sniper_base_F
	{
		weapons[] = {"srifle_LRR_tna_LRPS_F","ZSN_RH_fn57_t","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","ZSN_RH_fn57_t","Throw","Put","Rangefinder"};
		magazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_sniper_F : B_sniper_F
	{
		weapons[] = {"srifle_LRR_tna_LRPS_F","ZSN_RH_fn57_g","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","ZSN_RH_fn57_g","Throw","Put","Rangefinder"};
	};
	class B_spotter_F: B_Soldier_sniper_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_F","ZSN_RH_fn57_t","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_F","ZSN_RH_fn57_t","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_spotter_F: B_spotter_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_F","ZSN_RH_fn57_g","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_F","ZSN_RH_fn57_g","Throw","Put","Laserdesignator"};
	};
	class B_Story_Protagonist_F : B_Soldier_02_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","ZSN_RH_fn57_t","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","ZSN_RH_fn57_t","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
	};
	class B_Soldier_support_base_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_t","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_t","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_support_MG_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_t","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_t","Throw","Put"};
	};
	class B_T_Support_MG_F: B_support_MG_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_g","Throw","Put"};
	};
	class B_support_GMG_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_t","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_t","Throw","Put"};
	};
	class B_T_support_GMG_F: B_support_GMG_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_g","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_g","Throw","Put"};
	};
	class B_support_Mort_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_t","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_t","Throw","Put"};
	};
	class B_T_support_Mort_F: B_support_Mort_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_g","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_g","Throw","Put"};
	};
	class B_Soldier_AAR_F;
	class B_T_Soldier_AAR_F : B_soldier_AAR_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_g","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_g","Throw","Put","Rangefinder"};
	};
	class B_support_AMG_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_t","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_t","Throw","Put"};
	};
	class B_T_support_AMG_F: B_support_AMG_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_g","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_g","Throw","Put"};
	};
	class B_support_AMort_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_t","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_t","Throw","Put"};
	};
	class B_T_support_AMort_F: B_support_AMort_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_g","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","RH_fn57_g","Throw","Put"};
	};
	class B_Sharpshooter_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_srifle_EBR_AMS_LP_F","RH_fn57_t","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_srifle_EBR_AMS_LP_F","RH_fn57_t","Throw","Put","Binocular"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_HeavyGunner_F : B_Soldier_base_F
	{
		weapons[] = {"MMG_02_sand_RCO_LP_F","RH_fn57_t","Throw","Put"};
		respawnWeapons[] = {"MMG_02_sand_RCO_LP_F","RH_fn57_t","Throw","Put"};
		magazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","RH_20Rnd_57x28_FN","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_AAT_F : B_Soldier_support_base_F{};
	class B_T_Soldier_AAT_F : B_soldier_AAT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_g","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_g","Throw","Put","Rangefinder"};
	};
	class B_soldier_AAA_F : B_soldier_AAT_F{};
	class B_T_Soldier_AAA_F : B_soldier_AAA_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_g","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_g","Throw","Put","Rangefinder"};
	};
	class B_soldier_PG_F : B_Soldier_base_F{};
	class B_T_Soldier_PG_F : B_soldier_PG_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_g","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","RH_fn57_g","Throw","Put"};
	};
	class Car_F;
	class MRAP_01_base_F : Car_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			class _xx_RH_20Rnd_57x28_FN
			{
				magazine = "RH_20Rnd_57x28_FN";
				count = 12;
			};
		};
	};
	class B_MRAP_01_F;
	class B_T_MRAP_01_F : B_MRAP_01_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			class _xx_RH_20Rnd_57x28_FN
			{
				magazine = "RH_20Rnd_57x28_FN";
				count = 12;
			};
		};
	};
	class B_MRAP_01_gmg_F;
	class B_T_MRAP_01_gmg_F : B_MRAP_01_gmg_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			class _xx_RH_20Rnd_57x28_FN
			{
				magazine = "RH_20Rnd_57x28_FN";
				count = 12;
			};
		};
	};
	class B_MRAP_01_hmg_F;
	class B_T_MRAP_01_hmg_F : B_MRAP_01_hmg_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			class _xx_RH_20Rnd_57x28_FN
			{
				magazine = "RH_20Rnd_57x28_FN";
				count = 12;
			};
		};
	};
	class LSV_01_base_F : Car_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			class _xx_RH_20Rnd_57x28_FN
			{
				magazine = "RH_20Rnd_57x28_FN";
				count = 12;
			};
		};
	};
	class LSV_01_armed_base_F;
	class B_T_LSV_01_armed_F : LSV_01_armed_base_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			class _xx_RH_20Rnd_57x28_FN
			{
				magazine = "RH_20Rnd_57x28_FN";
				count = 12;
			};
		};
	};
	class LSV_01_unarmed_base_F;
	class B_T_LSV_01_unarmed_F : LSV_01_unarmed_base_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			class _xx_RH_20Rnd_57x28_FN
			{
				magazine = "RH_20Rnd_57x28_FN";
				count = 12;
			};
		};
	};
	class MRAP_03_base_F : Car_F
	{
		class TransportMagazines
		{
			delete _xx_11Rnd_45ACP_Mag;
			class _xx_RH_15Rnd_45cal_fnp
			{
				magazine = "RH_15Rnd_45cal_fnp";
				count = 12;
			};
		};
	};
	class Tank_F;
	class MBT_01_base_F : Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_snd_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class B_MBT_01_arty_F;
	class B_T_MBT_01_arty_F : B_MBT_01_arty_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_khk_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class B_MBT_01_mlrs_F;
	class B_T_MBT_01_mlrs_F : B_MBT_01_mlrs_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_khk_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class B_MBT_01_cannon_F;
	class B_T_MBT_01_cannon_F : B_MBT_01_cannon_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_khk_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class B_MBT_01_TUSK_F;
	class B_T_MBT_01_TUSK_F : B_MBT_01_TUSK_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_khk_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class Air;
	class Helicopter;
	class Helicopter_Base_F;
	class Helicopter_Base_H;
	class Heli_Light_01_base_F: Helicopter_Base_H
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_SMG_03C_TR_black
			{
				weapon = "SMG_03C_TR_black";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class Heli_Attack_01_base_F : Helicopter_Base_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_SMG_03C_TR_black
			{
				weapon = "SMG_03C_TR_black";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class Heli_Transport_01_base_F : Helicopter_Base_H
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_SMG_03C_TR_black
			{
				weapon = "SMG_03C_TR_black";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
};
