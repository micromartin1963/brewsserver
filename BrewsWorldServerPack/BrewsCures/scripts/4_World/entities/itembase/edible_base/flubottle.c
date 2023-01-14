class flubottle : Edible_Base
{
	//Specify this item can only be combined but not split
	override void InitItemVariables()
	{
		super.InitItemVariables();
		can_this_be_combined = true;
	}
	
	override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_INFLUENZA ) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_INFLUENZA );
		}
		consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_INFLUENZA );

		if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_COMMON_COLD ) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_COMMON_COLD );
		}
		consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_COMMON_COLD );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceConsumeSingle);
		AddAction(ActionConsumeSingle);
		//AddAction(ActionForceFeed);
		//AddAction(ActionEatBig);
	}
}

