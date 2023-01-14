

class CfgPatches
{
	class BrewsCures
	{
		units[] = {"cholerabottle","flubottle","salmonbottle"};
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
		dependencies[] = {"Game","World"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"BrewsWorldServerPack/BrewsCures/scripts/3_Game"};
			};
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


	class Inventory_Base;
	class Switchable_Base;
	class Edible_Base;
	class Bottle_Base;	
       class VitaminBottle;



	class  cholerabottle :  VitaminBottle
	{
		scope=2;
		displayName="cholera cure";
		descriptionShort="$STR_CfgVehicles_VitaminBottle1";
		model="\dz\gear\medical\VitaminBottle.p3d";
		debug_ItemCategory=7;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=1;
		itemSize[]={1,2};
		weight=20;
		stackedUnit="pills";
		quantityBar=0;

	};


	class  flubottle :  VitaminBottle
	{
		scope=2;
		displayName="flu cure";
		descriptionShort="$STR_CfgVehicles_VitaminBottle1";
		model="\dz\gear\medical\VitaminBottle.p3d";
		debug_ItemCategory=7;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=1;
		itemSize[]={1,2};
		weight=20;
		stackedUnit="pills";
		quantityBar=0;

	};


	class  salmonbottle :  VitaminBottle
	{
		scope=2;
		displayName="salmon cure";
		descriptionShort="$STR_CfgVehicles_VitaminBottle1";
		model="\dz\gear\medical\VitaminBottle.p3d";
		debug_ItemCategory=7;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=1;
		itemSize[]={1,2};
		weight=20;
		stackedUnit="pills";
		quantityBar=0;

	};



};




