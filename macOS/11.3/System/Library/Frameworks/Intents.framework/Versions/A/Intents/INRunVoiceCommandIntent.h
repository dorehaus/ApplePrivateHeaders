/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INEnumerable.h>
#import <libobjc.A.dylib/INRunVoiceCommandIntentExport.h>

@class INSpeakableString, INVoiceCommandDeviceInformation, INIntentExecutionResult, NSString;

@interface INRunVoiceCommandIntent : INIntent <INEnumerable, INRunVoiceCommandIntentExport>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) INSpeakableString * voiceCommand; 
@property (copy,readonly) INVoiceCommandDeviceInformation * originDevice; 
@property (copy,readonly) INIntentExecutionResult * executionResult; 
@property (copy,readonly) NSString * previousIntentIdentifier; 
-(id)domain;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(id)_typedBackingStore;
-(void)_setMetadata:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(char)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(/*^block*/id)arg2 ;
-(INIntentExecutionResult *)executionResult;
-(void)setExecutionResult:(INIntentExecutionResult *)arg1 ;
-(INVoiceCommandDeviceInformation *)originDevice;
-(void)setOriginDevice:(INVoiceCommandDeviceInformation *)arg1 ;
-(NSString *)previousIntentIdentifier;
-(void)setPreviousIntentIdentifier:(NSString *)arg1 ;
-(INSpeakableString *)voiceCommand;
-(void)setVoiceCommand:(INSpeakableString *)arg1 ;
-(id)initWithVoiceCommand:(id)arg1 originDevice:(id)arg2 executionResult:(id)arg3 previousIntentIdentifier:(id)arg4 ;
-(id)initWithVoiceCommand:(id)arg1 originDevice:(id)arg2 ;
-(id)initWithVoiceCommand:(id)arg1 originDevice:(id)arg2 executionResult:(id)arg3 ;
@end

