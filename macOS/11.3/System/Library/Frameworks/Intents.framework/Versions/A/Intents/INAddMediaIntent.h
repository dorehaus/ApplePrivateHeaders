/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INAddMediaIntentExport.h>

@class NSArray, INMediaSearch, INMediaDestination, INPrivateAddMediaIntentData, NSString;

@interface INAddMediaIntent : INIntent <INAddMediaIntentExport>

@property (copy,readonly) NSArray * mediaItems; 
@property (copy,readonly) INMediaSearch * mediaSearch; 
@property (copy,readonly) INMediaDestination * mediaDestination; 
@property (copy) INPrivateAddMediaIntentData * privateAddMediaIntentData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSArray *)mediaItems;
-(void)setMediaItems:(NSArray *)arg1 ;
-(void)setVerb:(id)arg1 ;
-(id)_typedBackingStore;
-(void)_setMetadata:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INMediaSearch *)mediaSearch;
-(void)setMediaSearch:(INMediaSearch *)arg1 ;
-(char)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
-(INMediaDestination *)mediaDestination;
-(void)setMediaDestination:(INMediaDestination *)arg1 ;
-(INPrivateAddMediaIntentData *)privateAddMediaIntentData;
-(void)setPrivateAddMediaIntentData:(INPrivateAddMediaIntentData *)arg1 ;
-(id)initWithMediaItems:(id)arg1 mediaSearch:(id)arg2 mediaDestination:(id)arg3 ;
@end
