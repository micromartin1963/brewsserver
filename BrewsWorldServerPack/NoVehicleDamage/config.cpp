class CfgPatches
{
	class NoVehicleDamage
	{
		requiredAddons[] = {};
	};
};

class CfgMods
{
	class NoVehicleDamage
	{
	    type = "mod";
		
	    class defs
	    {
			class worldScriptModule		
            {
                value = "";
                files[] = {"BrewsWorldServerPack/NoVehicleDamage/scripts/World"};
            };
        };
    };
};
