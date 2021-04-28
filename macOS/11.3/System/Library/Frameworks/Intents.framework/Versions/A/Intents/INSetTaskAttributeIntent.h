/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetTaskAttributeIntentExport.h>

@class INTask, INSpeakableString, INSpatialEventTrigger, INTemporalEventTrigger, INContactEventTrigger, NSString;

@interface INSetTaskAttributeIntent : INIntent <INSetTaskAttributeIntentExport>

@property (copy,readonly) INTask * targetTask; 
@property (copy,readonly) INSpeakableString * taskTitle; 
@property (readonly) long long status; 
@property (readonly) long long priority; 
@property (copy,readonly) INSpatialEventTrigger * spatialEventTrigger; 
@property (copy,readonly) INTemporalEventTrigger * temporalEventTrigger; 
@property (copy) INContactEventTrigger * contactEventTrigger; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(long long)status;
-(id)_metadata;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(INContactEventTrigger *)contactEventTrigger;
-(void)setContactEventTrigger:(INContactEventTrigger *)arg1 ;
-(INSpatialEventTrigger *)spatialEventTrigger;
-(void)setSpatialEventTrigger:(INSpatialEventTrigger *)arg1 ;
-(INTask *)targetTask;
-(void)setTargetTask:(INTask *)arg1 ;
-(INSpeakableString *)taskTitle;
-(void)setTaskTitle:(INSpeakableString *)arg1 ;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1 ;
-(id)_typedBackingStore;
-(void)_setMetadata:(id)arg1 ;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithTargetTask:(id)arg1 status:(long long)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4 ;
-(id)initWithTargetTask:(id)arg1 taskTitle:(id)arg2 status:(long long)arg3 priority:(long long)arg4 spatialEventTrigger:(id)arg5 temporalEventTrigger:(id)arg6 ;
@end
