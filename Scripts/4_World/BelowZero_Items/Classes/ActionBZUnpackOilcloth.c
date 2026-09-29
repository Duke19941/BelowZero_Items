class ActionBZUnpackOilclothCB : ActionContinuousBaseCB
{
    override void CreateActionComponent()
    {
        m_ActionData.m_ActionComponent = new CAContinuousTime(4);
    }
};

class ActionBZUnpackOilcloth : ActionContinuousBase
{
    void ActionBZUnpackOilcloth()
    {
        m_CallbackClass = ActionBZUnpackOilclothCB;
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
        m_FullBody = true;
        m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
        m_Text = "Sort loose rounds";
    }

    override void CreateConditionComponents()
    {
        m_ConditionItem = new CCINonRuined;
        m_ConditionTarget = new CCTNone;
    }

    override bool HasTarget()
    {
        return false;
    }

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
        return item && item.IsKindOf("BZ_AmmoPile_762_Oilcloth") && item.GetQuantity() > 0;
    }

    override void OnFinishProgressServer(ActionData action_data)
    {
        ItemBase pile = ItemBase.Cast(action_data.m_MainItem);
        if (!pile)
            return;

        int count = Math.Clamp(pile.GetQuantity(), 1, 12);
        if (count > 8)
            count = Math.RandomIntInclusive(6, 12);

        PlayerBase player = action_data.m_Player;
        int good;
        for (int i = 0; i < count; i++)
        {
            float roll = Math.RandomFloat01();
            if (roll < 0.10)
                continue;

            ItemBase ammo = ItemBase.Cast(GetGame().CreateObjectEx("Ammo_762x39", player.GetPosition(), ECE_PLACE_ON_SURFACE));
            if (!ammo)
                continue;

            if (roll < 0.30)
                ammo.SetHealth01("", "", 0.35);
            else
                ammo.SetHealth01("", "", 0.65);

            good++;
        }

        pile.Delete();
    }
};
