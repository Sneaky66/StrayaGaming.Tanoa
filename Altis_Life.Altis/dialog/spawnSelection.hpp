//spawnSelectionTextured
#define Color_Transparent { 0, 0, 0, 0 }
//

class life_spawn_selection
{
	idd = 38500;
	movingEnabled = false;
	enableSimulation = true;
	
	class controlsBackground
	{
		class screwxtreme: life_RscPicture
		{
			idc = 1200;
			text = "textures\SpawnMenu3.paa";
			x = 0.088594 * safezoneW + safezoneX;
			y = 0.073 * safezoneH + safezoneY;
			w = 0.817656 * safezoneW;
			h = 0.861 * safezoneH;
		};
		
		class Title : Life_RscTitle
		{
			colorBackground[] = {0,0,0,0};
			idc = -1;
			text = "$STR_Spawn_Title";
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 0 * safezoneW;
			h = 0 * safezoneH;
		};
		
		class SpawnPointTitle : Title
		{
			idc = 38501;
			style = 1;
			text = "";
		};
		
		class MapView : Life_RscMapControl 
		{
			idc = 38502;
			x = 0.329992 * safezoneW + safezoneX;
			y = 0.275 * safezoneH + safezoneY;
			w = 0.550037 * safezoneW;
			h = 0.53848 * safezoneH;
			maxSatelliteAlpha = 0.75;//0.75;
			alphaFadeStartScale = 1.15;//0.15;
			alphaFadeEndScale = 1.29;//0.29;
		};
	};
	
	class controls
	{	
		class SpawnPointList: Life_RscListNBox
		{
			idc = 38510;
			text = "";
			sizeEx = 0.0401;
			coloumns[] = {0,0,0.9};
			drawSideArrows = false;
			idcLeft = -1;
			idcRight = -1;
			rowHeight = 0.050;
			x = 0.1235042 * safezoneW + safezoneX;
			y = 0.299074 * safezoneH + safezoneY;
			w = 0.1855208 * safezoneW;
			h = 0.441111 * safezoneH;
			onLBSelChanged = "_this call life_fnc_spawnPointSelected;";
		};
		
		class spawnButton : Life_RscButtonSilent
		{
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "$STR_Spawn_Spawn";
			onButtonClick = "[] call life_fnc_spawnConfirm";
			x = 0.51875 * safezoneW + safezoneX;
			y = 0.821667 * safezoneH + safezoneY;
			w = 0.1577083 * safezoneW;
			h = 0.064037 * safezoneH;
		 };
	};
};
