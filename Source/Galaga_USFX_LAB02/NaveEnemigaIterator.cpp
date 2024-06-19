
#include "NaveEnemigaIterator.h"
#include "NaveEnemigaCollection.h"


void UNaveEnemigaIterator::SetCollection(ANaveEnemigaCollection* InCollection)
{
	Collection = InCollection;
	CurrentIndex = 0;
}

AActor* UNaveEnemigaIterator::GetCurrentNave() const
{
	if (Collection && Collection->NavesEnemigas.IsValidIndex(CurrentIndex))
	{
		return Collection->NavesEnemigas[CurrentIndex];
	}
	return nullptr;
}

void UNaveEnemigaIterator::Next()
{
	if (Collection)
	{
		++CurrentIndex;
	}
}

bool UNaveEnemigaIterator::IsDone() const
{
	return !Collection || CurrentIndex >= Collection->NavesEnemigas.Num();
}
