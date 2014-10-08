// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef AMETHYSTFOREST_AmethystCharMovementComponent_generated_h
#error "AmethystCharMovementComponent.generated.h already included, missing '#pragma once' in AmethystCharMovementComponent.h"
#endif
#define AMETHYSTFOREST_AmethystCharMovementComponent_generated_h

#define UAmethystCharMovementComponent_EVENTPARMS
#define UAmethystCharMovementComponent_RPC_WRAPPERS
#define UAmethystCharMovementComponent_CALLBACK_WRAPPERS
#define UAmethystCharMovementComponent_INCLASS \
	private: \
	static void StaticRegisterNativesUAmethystCharMovementComponent(); \
	friend AMETHYSTFOREST_API class UClass* Z_Construct_UClass_UAmethystCharMovementComponent(); \
	public: \
	DECLARE_CLASS(UAmethystCharMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0), 0, amethystforest, NO_API) \
	/** Standard constructor, called after all reflected properties have been initialized */    NO_API UAmethystCharMovementComponent(const class FPostConstructInitializeProperties& PCIP); \
	DECLARE_SERIALIZER(UAmethystCharMovementComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME UAmethystCharMovementComponent


#undef UCLASS
#undef UINTERFACE
#define UCLASS(...) \
UAmethystCharMovementComponent_EVENTPARMS


#undef GENERATED_UCLASS_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
public: \
	UAmethystCharMovementComponent_RPC_WRAPPERS \
	UAmethystCharMovementComponent_CALLBACK_WRAPPERS \
	UAmethystCharMovementComponent_INCLASS \
public:

