// Copyright Leandro Geminale


#include "Character/AuraEnemy.h"

#include "Kismet/KismetSystemLibrary.h"

void AAuraEnemy::HighlightActor()
{
	bHighlight = true;
	
}

void AAuraEnemy::UnHighlightActor()
{
	bHighlight = false; 
}
