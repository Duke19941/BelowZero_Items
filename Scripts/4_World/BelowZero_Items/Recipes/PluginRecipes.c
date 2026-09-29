modded class PluginRecipesManagerBase
{
    override void RegisterRecipies()
    {
        super.RegisterRecipies();
        RegisterRecipe(new RecipeBZCharcoalFootwraps);
        RegisterRecipe(new RecipeBZFilterSock);
        RegisterRecipe(new RecipeBZRoadSaltCompress);
    }
};

class RecipeBZCharcoalFootwraps : RecipeBase
{
    override void Init()
    {
        m_Name = "Wrap charcoal footwraps";
        m_IsInstaRecipe = false;
        m_AnimationLength = 2;
        m_Specialty = 0;

        InsertIngredient(0, "Rag");
        m_MinQuantityIngredient[0] = 2;
        m_MaxQuantityIngredient[0] = -1;

        InsertIngredient(1, "CharcoalTablets");
        m_MinQuantityIngredient[1] = 1;
        m_MaxQuantityIngredient[1] = -1;

        AddResult("BZ_CharcoalFootwraps");
        m_ResultSetFullQuantity[0] = false;
        m_ResultSetQuantity[0] = -1;
        m_ResultSetHealth[0] = -1;
        m_ResultInheritsHealth[0] = -1;
        m_ResultToInventory[0] = -2;
        m_ResultInheritsColor[0] = -1;
        m_ResultReplacesIngredient[0] = -1;
    }
};

class RecipeBZFilterSock : RecipeBase
{
    override void Init()
    {
        m_Name = "Stuff charcoal filter sock";
        m_IsInstaRecipe = false;
        m_AnimationLength = 2;

        InsertIngredient(0, "Rag");
        m_MinQuantityIngredient[0] = 1;

        InsertIngredient(1, "CharcoalTablets");
        m_MinQuantityIngredient[1] = 1;

        AddResult("BZ_FilterSock_Pripyat");
        m_ResultSetFullQuantity[0] = true;
        m_ResultToInventory[0] = -2;
    }
};

class RecipeBZRoadSaltCompress : RecipeBase
{
    override void Init()
    {
        m_Name = "Make road-salt compress";
        m_IsInstaRecipe = false;
        m_AnimationLength = 2;

        InsertIngredient(0, "Rag");
        m_MinQuantityIngredient[0] = 1;

        InsertIngredient(1, "GardenLime");
        InsertIngredient(1, "DisinfectantAlcohol");

        AddResult("BZ_RoadSaltCompress");
        m_ResultSetFullQuantity[0] = true;
        m_ResultToInventory[0] = -2;
    }
};
