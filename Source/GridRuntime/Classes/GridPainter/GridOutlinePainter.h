#pragma once

#include "CoreMinimal.h"
#include "GridPainter/GridPainter.h"
#include "GridPainter/GridOutlinePrimitiveComponent.h"
#include "GridOutlinePainter.generated.h"

/**
 * 
 */
UCLASS()
class GRIDRUNTIME_API UGridOutlinePainter : public UGridPainter
{
	GENERATED_BODY()
	
public:
	UGridOutlinePainter();
	virtual ~UGridOutlinePainter();

	virtual void SetGridManager(AGridManager* NewGridManager) override;
	
	virtual void TickImpl_Implementation(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "GridOutlinePainter")
	float Thickness;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "GridOutlinePainter")
	float ZDelta;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "GridOutlinePainter")
	FLinearColor OutlineColor;

protected:
	UGridOutlinePrimitiveComponent* GridOutlinePrimitiveComp;
};
