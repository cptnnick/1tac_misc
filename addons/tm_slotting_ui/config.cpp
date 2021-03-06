#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = "Slotting UI Improvements";
        author = "Bear, Snippers";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main","A3_UI_F"};
        VERSION_CONFIG;
    };
};

class CfgScriptPaths
{
    BEAR_MPLOBBY = "x\tac1\addons\tm_slotting_ui\scripts\";
};
class RscStandardDisplay;
class RscText;
class RscActiveText;
class RscListBox;
class RscListNBox;
class RscButtonMenu;
class RscChatListDefault
{
	x = "safezoneX + (19.8 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - ((safezoneW / safezoneH) min 1.2))";
};
class RscDisplayRemoteMissions: RscStandardDisplay
{
	scriptName = "RscDisplayRemoteMissions";
	scriptPath = "BEAR_MPLOBBY";
	class controls
	{
		delete ButtonLog;
	};
};
class RscDisplayMultiplayerSetup: RscStandardDisplay
{
	scriptName = "RscDisplayMultiplayerSetup";
	scriptPath = "BEAR_MPLOBBY";
	onLoad = "[""onLoad"",_this,""RscDisplayMultiplayerSetup"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayMultiplayerSetup"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class controlsbackground
	{
		class RolesBackground: RscText
		{
			colorBackground[] = {0,0,0,0.3};
			idc = 1085;
			x = "4.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "6.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "(14.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			h = "SafezoneH - (9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ChatBackground: RscText
		{
			colorBackground[] = {0,0,0,0.3};
			idc = 1086;
			x = "safezoneX + (19.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "17.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY) + 0.7*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "(19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.55*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			h = "(5.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))+ 0.3*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class PlayersPoolBackground: RscText
		{
			colorBackground[] = {0,0,0,0.3};
			idc = 1087;
			x = "safezoneX + (19.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "6.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "(19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.55*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			h = "(10.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 0.7*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class SideBackground: RscText
		{
			colorBackground[] = {0,0,0,0.3};
			idc = 1084;
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "6.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "(3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			h = "SafezoneH - (9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
	};
	class controls
	{
		class CA_ValueRoles: RscListBox
		{
			idc = 109;
			colorAI[] = {0.67,0.24,0.24,1};
			colorNobody[] = {1,1,1,0.25};
			x = "4.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			w = "(14.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			h = "SafezoneH - (9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			colorSelectBackground[] = {1,1,1,0.15};
			colorSelectBackground2[] = {1,1,1,0.15};
			y = "6.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_ValuePool: RscListNBox
		{
			idc = 114;
			canDrag = 1;
			rows = 25;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			x = "safezoneX + (19.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			w = "(19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.55*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			h = "(10.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 0.7*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			colorSelectBackground[] = {1,1,1,0.15};
			colorSelectBackground2[] = {1,1,1,0.15};
			colorPictureSelected[] = {1,1,1,1};
			y = "6.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_B_EnableAll: RscButtonMenu
		{
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		};
		class CA_B_Kick: RscButtonMenu
		{
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = "safezoneX + SafezoneW - (13.6 * (((safezoneW / safezoneH) min 1.2) / 40)) - ((safezoneX + SafezoneW - (7.25 * (((safezoneW / safezoneH) min 1.2) / 40))) - (safezoneX + SafezoneW - (13.6 * (((safezoneW / safezoneH) min 1.2) / 40))))";
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		};
		class CA_B_West: RscActiveText
		{
			text = "    ";
			textHeight = 0.67;
		};
		class CA_B_East: CA_B_West
		{
			text = "    ";
		};
		class CA_B_Guerrila: CA_B_West
		{
			text = "    ";
		};
		class CA_B_Civilian: CA_B_West
		{
			text = "    ";
		};
		class CA_B_Virtual: CA_B_West
		{
			text = "    ";
		};
	};
};
class cfgMods
{
	author = "76561198014669991";
	timepacked = "1442491890";
};
//};
