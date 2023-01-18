class CfgPatches
{
	class BrewsCures
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class BrewsCures
	{
		author = "FodnBrew";
		type = "mod";
		dir = "BrewsWorldServerPack";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"BrewsWorldServerPack/BrewsCures/scripts/4_World"};
			};
		};
	};
};


class CfgVehicles
{
};




