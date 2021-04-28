/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPBaseEntityTranslator.h>

@interface MPStorePlatformEntityTranslator : MPBaseEntityTranslator
+(void)buildSchemaIfNeeded;
+(id)translatorForKind:(id)arg1 ;
-(id)prepareSource:(id)arg1 context:(id)arg2 properties:(id)arg3 ;
-(id)identifiersForPayload:(id)arg1 context:(id)arg2 ;
-(void)mapIdentifierCreationKeyPaths:(id)arg1 transformBlock:(/*^block*/id)arg2 ;
-(void)mapPropertyKey:(id)arg1 toPayloadKeyPath:(id)arg2 ;
-(void)mapPropertyKey:(id)arg1 toPayloadKeyPaths:(id)arg2 valueTransformer:(/*^block*/id)arg3 ;
-(void)mapPropertyKey:(id)arg1 toPayloadKeyPaths:(id)arg2 valueTransformerFunction:(/*function pointer*/void*)arg3 ;
-(id)objectForPropertySet:(id)arg1 payload:(id)arg2 context:(id)arg3 ;
-(void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 payloadTransform:(/*^block*/id)arg3 ;
@end

