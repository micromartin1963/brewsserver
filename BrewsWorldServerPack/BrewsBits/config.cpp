

class CfgPatches
{
	class BrewsWorldServerPack
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class BrewsWorldServerPack
	{
		author = "FodnBrew";
		type = "mod";
		dir = "BrewsWorldServerPack";
		dependencies[] = {"Game","World"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"BrewsWorldServerPack/BrewsBits/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"BrewsWorldServerPack/BrewsBits/scripts/4_World"};
			};

		};
	};
};
class CfgVehicles
{



};




