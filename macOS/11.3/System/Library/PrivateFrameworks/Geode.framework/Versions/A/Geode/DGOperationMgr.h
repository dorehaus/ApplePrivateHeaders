/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSSet;

@interface DGOperationMgr : NSObject {

	NSMutableDictionary* _operationInfoByIdentifier;
	NSMutableDictionary* _operationInfoByClassName;
	NSMutableDictionary* _namesByIdentifier;
	NSSet* _nonReorderableOperationIds;

}
+(void)initialize;
+(id)sharedInstance;
+(id)sortedIdentifiersForRenderPipelineVersion:(long long)arg1 ;
-(id)init;
-(id)operationWithIdentifier:(id)arg1 ;
-(id)registeredInfoDictionaryForIdentifier:(id)arg1 ;
-(id)_localizedStringForKey:(id)arg1 forOperationIdentifier:(id)arg2 ;
-(void)registerOperationInfoDictionary:(id)arg1 withIdentifier:(id)arg2 ;
-(id)registeredOperationIdentifiers;
-(id)registeredInfoDictionaryForClassName:(id)arg1 ;
-(char)allowsMultipleAdjustmentsForIdentifier:(id)arg1 ;
-(id)displayNameForIdentifier:(id)arg1 ;
-(id)displayNameForIdentifier:(id)arg1 key:(id)arg2 ;
-(id)longDisplayNameForIdentifier:(id)arg1 ;
-(id)_operationWithIdentifier:(id)arg1 fromInfoDictionary:(id)arg2 ;
-(id)_operationFromDictionary:(id)arg1 ;
-(Class)operationClassWithIdentifier:(id)arg1 ;
-(unsigned long long)sortOrderForOperationWithIdentifier:(id)arg1 renderPipelineVersion:(long long)arg2 ;
-(void)loadOperationPlugIns;
@end

