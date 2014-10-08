// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef AMETHYSTFOREST_AmethystDamageType_generated_h
#error "AmethystDamageType.generated.h already included, missing '#pragma once' in AmethystDamageType.h"
#endif
#define AMETHYSTFOREST_AmethystDamageType_generated_h

#define UAmethystDamageType_EVENTPARMS
#define UAmethystDamageType_RPC_WRAPPERS
#define UAmethystDamageType_CALLBACK_WRAPPERS
#define UAmethystDamageType_INCLASS \
	private: \
	static void StaticRegisterNativesUAmethystDamageType(); \
	friend AMETHYSTFOREST_API class UClass* Z_Construct_UClass_UAmethystDamageType(); \
	public: \
	DECLARE_CLASS(UAmethystDamageType, UDamageType, COMPILED_IN_FLAGS(0), 0, amethystforest, NO_API) \
	/** Standard constructor, called after all reflected properties have been initialized */    NO_API UAmethystDamageType(const class FPostConstructInitializeProperties& PCIP); \
	DECLARE_SERIALIZER(UAmethystDamageType) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME UAmethystDamageType


#undef UCLASS
#undef UINTERFACE
#define UCLASS(...) \
UAmethystDamageType_EVENTPARMS


#undef GENERATED_UCLASS_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
public: \
	UAmethystDamageType_RPC_WRAPPERS \
	UAmethystDamageType_CALLBACK_WRAPPERS \
	UAmethystDamageType_INCLASS \
public:

