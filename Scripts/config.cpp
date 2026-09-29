class CfgPatches
{
    class BelowZero_Items_Scripts
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = { "DZ_Data", "DZ_Scripts" };
    };
};

class CfgMods
{
    class BelowZero_Items
    {
        dir = "BelowZero_Items";
        name = "Below Zero Items";
        credits = "Below Zero";
        author = "Below Zero";
        version = "0.1.0";
        type = "mod";
        dependencies[] = { "Game", "World", "Mission" };
        class defs
        {
            class gameScriptModule
            {
                value = "";
                files[] = { "BelowZero_Items/Scripts/3_Game" };
            };
            class worldScriptModule
            {
                value = "";
                files[] = { "BelowZero_Items/Scripts/4_World" };
            };
        };
    };
};
