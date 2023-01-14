class salmonbottle : Edible_Base
{
	//Specify this item can only be combined but not split
	override void InitItemVariables()
	{
		super.InitItemVariables();
		can_this_be_combined = true;
	}
	
	override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_SALMONELLA ) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_SALMONELLA );
		}
		consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_SALMONELLA );
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