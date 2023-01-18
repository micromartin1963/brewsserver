class BloodTestRpt
{
	static void DisplayReport(ActionBase action, PlayerBase player, PlayerBase target)
	{
	string output = "";
	string preoutput = "";
	int count = 0;
	string  m_Entries[7];

	for(int c = 0 ; c < 7; c++) m_Entries[c] = "";


			action.SendMessageToClient(player, "Wound Infection: " + target.GetSingleAgentCount(eAgents.WOUND_AGENT).ToString()  + " XXXXXXXX delete this line when tested");

	if(target.GetSingleAgentCount(eAgents.CHOLERA) > 0)
	{
		if(target.GetSingleAgentCount(eAgents.CHOLERA) < 100)
		{
			m_Entries[0] = " You Have : Mild Cholera. ( Please take Tetracycline Antibiotics)" ;
		}	
		if(target.GetSingleAgentCount(eAgents.CHOLERA) > 100  && target.GetSingleAgentCount(eAgents.CHOLERA) < 200)
		{
			m_Entries[0] = "You Have :  High level of Cholera. ( Please take Tetracycline Antibiotics)";
		}	
		if(target.GetSingleAgentCount(eAgents.CHOLERA) > 200)
		{
			m_Entries[0] = "You Have :  Very High level of Cholera. ( Please take Tetracycline Antibiotics)" ;
		}
	count++;		
	}

	if(target.GetSingleAgentCount(eAgents.SALMONELLA) > 0)
	{
		if(target.GetSingleAgentCount(eAgents.SALMONELLA) < 100)
		{
			m_Entries[1] = "You Have :  Mild Salmonella. ( Please take Charcoal Tablets) ";
		}	
		if(target.GetSingleAgentCount(eAgents.SALMONELLA) > 100  && target.GetSingleAgentCount(eAgents.SALMONELLA) < 200  )
		{
			m_Entries[1] = "You Have : High level of Salmonella. ( Please take Charcoal Tablets) ";
		}	
		if(target.GetSingleAgentCount(eAgents.SALMONELLA) > 200)
		{
			m_Entries[1] = "You Have :  Very High level of Salmonella. ( Please take Charcoal Tablets)";
		}
	count++;	
	}

	if(target.GetSingleAgentCount(eAgents.INFLUENZA) > 0)
	{
		if(target.GetSingleAgentCount(eAgents.INFLUENZA) < 100)
		{
			m_Entries[2] = "You Have :  Mild Influenza. ( Please take Tetracycline Antibiotics)" ;
		}	
		if(target.GetSingleAgentCount(eAgents.INFLUENZA) > 100  && target.GetSingleAgentCount(eAgents.INFLUENZA) < 200 )
		{
			m_Entries[2] = "You Have :  High level of Influenza. ( Please take Tetracycline Antibiotics)";
		}	
				if(target.GetSingleAgentCount(eAgents.INFLUENZA) > 200)
		{
			m_Entries[2] = "You Have :  Very High level of Influenza . ( Please take Tetracycline Antibiotics)";
		}
	count++;	
	}

	if(target.GetSingleAgentCount(eAgents.FOOD_POISON) > 0)
	{
		if(target.GetSingleAgentCount(eAgents.FOOD_POISON) < 100)
		{
			m_Entries[3] = "You Have :  Mild Food Poisoning . ( Please take Tetracycline Antibiotics)";
		}	
		if(target.GetSingleAgentCount(eAgents.FOOD_POISON) > 100  && target.GetSingleAgentCount(eAgents.FOOD_POISON) < 200 )
		{
			m_Entries[3] = "You Have :  High level of  Food Poisoning .( Please take Tetracycline Antibiotics) ";
		}	
				if(target.GetSingleAgentCount(eAgents.FOOD_POISON) > 200)
		{
			m_Entries[3] = "You Have :  Very High level of Food Poisoning .( Please take Tetracycline Antibiotics)";
		}
	count++;	
	}

	if(target.GetSingleAgentCount(eAgents.CHEMICAL_POISON) > 0)
	{
		if(target.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 100)
		{
			m_Entries[4] = "You Have :  Mild Chemical Poisoning.  ( Please use Antichemical injector)";
		}	
		if(target.GetSingleAgentCount(eAgents.CHEMICAL_POISON) > 100  && target.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 200 )
		{
			m_Entries[4] = "You Have : High level of Chemical Poisoning . ( Please use Antichemical injector) ";
		}	

				if(target.GetSingleAgentCount(eAgents.CHEMICAL_POISON) > 200)
		{
			m_Entries[4] = "You Have :  Very High level of  Chemical Poisoning . ( Please use Antichemical injector)";
		}
	count++;	
	}

	if(target.GetSingleAgentCount(eAgents.WOUND_AGENT) > 0)
	{
		if(target.GetSingleAgentCount(eAgents.WOUND_AGENT) < 100)
		{
			m_Entries[5] = "You Have :  Mild Wound Infection.( Please use Iodine) ";
		}	
		if(target.GetSingleAgentCount(eAgents.WOUND_AGENT) > 100  && target.GetSingleAgentCount(eAgents.WOUND_AGENT) < 200 )
		{
			m_Entries[5] = "You Have : High level of wound Infection.( Please use Iodine) ";
		}	
		if(target.GetSingleAgentCount(eAgents.WOUND_AGENT) > 200)
		{
			m_Entries[5] = "You Have :  Very High level of wound Infection. ( Please use Iodine)";
		}
	count++;	
	}

	if(count == 0)
	{
	output = "You have  NO  cholera / salmonella / wound infection / chemical poisoning or food poisoning"  ;
	action.SendMessageToClient(player, output );
	}

	if(count == 1)
	{
	output = "You have " + m_Entries[0] +  m_Entries[1] +  m_Entries[2] +  m_Entries[3] +  m_Entries[4] +  m_Entries[5] ;
	action.SendMessageToClient(player, output );
	}
	
	if(count > 1)
	{
		int x = 0;
			for( x ; x <= 5 ; x++)
			{
				if(m_Entries[x] != "")
				{		
				output = m_Entries[x] ;
				action.SendMessageToClient(player, output );
				}				
			}	
	}
	
	}
}

modded class ActionTestBloodSelf
{
	override void OnFinishProgressServer(ActionData action_data)
	{	
		super.OnFinishProgressServer(action_data);
		BloodTestRpt.DisplayReport(this, action_data.m_Player, action_data.m_Player);
	}
}