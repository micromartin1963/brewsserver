class cholerabottle : Edible_Base
{
	override void InitItemVariables()
	{
		super.InitItemVariables();
		can_this_be_combined = true;
	}
	

	override void ApplyModifiers( ActionData action_data )
	{
		PlayerBase player = action_data.m_Player;
		
		player.InsertAgent(eAgents.CHOLERA,-player.GetSingleAgentCount(eAgents.CHOLERA));
		player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_CHOLERA);
		player.RemoveAgent(eAgents.CHOLERA);
		
	}


//	override void OnConsume(float amount, PlayerBase player)
//	{
//	
//		player.InsertAgent(eAgents.CHOLERA,-player.GetSingleAgentCount(eAgents.CHOLERA));
//		player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_CHOLERA);
//		player.RemoveAgent(eAgents.CHOLERA);
//
//	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceConsumeSingle);
		AddAction(ActionConsumeSingle);
		//AddAction(ActionForceFeed);
		//AddAction(ActionEatBig);
	}
}