class BZ_FrozenMarketTin : BakedBeansCan
{
    override void EEInit()
    {
        super.EEInit();
        SetHealth01("", "", 0.55);
    }
};

class BZ_FrozenMarketTin_Opened : BakedBeansCan_Opened {};

class BZ_CharcoalFootwraps : Clothing {};

class BZ_ThawPouch : Container_Base
{
    override bool CanReceiveItemIntoCargo(EntityAI item)
    {
        if (!item)
            return false;
        return item.IsKindOf("Edible_Base") || item.IsKindOf("BZ_FrozenMarketTin") || item.IsKindOf("BZ_InediaBrothBrick");
    }
};

class BZ_RoadSaltCompress : BandageDressing {};

class BZ_AmmoPile_762_Oilcloth : Inventory_Base
{
    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionBZUnpackOilcloth);
    }
};

class BZ_Sheath_WireCut_CDF : Clothing {};

class BZ_FilterSock_Pripyat : Inventory_Base {};

class BZ_IceSawBayonet : CombatKnife {};

class BZ_InediaBrothBrick : Edible_Base {};

class BZ_Book_WinterButchery1984 : ItemBook {};
