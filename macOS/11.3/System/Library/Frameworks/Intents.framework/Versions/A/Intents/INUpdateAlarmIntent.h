/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INUpdateAlarmIntentExport.h>

@class INAlarmSearch, INAlarm, INDateComponentsRange, INSpeakableString, NSString;

@interface INUpdateAlarmIntent : INIntent <INUpdateAlarmIntentExport>

@property (copy,readonly) INAlarmSearch * alarmSearch; 
@property (copy,readonly) INAlarm * alarm; 
@property (readonly) long long operation; 
@property (copy,readonly) INDateComponentsRange * proposedTime; 
@property (copy,readonly) INSpeakableString * proposedLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INAlarm *)alarm;
-(void)setVerb:(id)arg1 ;
-(id)_typedBackingStore;
-(void)_setMetadata:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INAlarmSearch *)alarmSearch;
-(void)setAlarmSearch:(INAlarmSearch *)arg1 ;
-(void)setAlarm:(INAlarm *)arg1 ;
-(INDateComponentsRange *)proposedTime;
-(void)setProposedTime:(INDateComponentsRange *)arg1 ;
-(INSpeakableString *)proposedLabel;
-(void)setProposedLabel:(INSpeakableString *)arg1 ;
-(id)initWithAlarmSearch:(id)arg1 alarm:(id)arg2 operation:(long long)arg3 proposedTime:(id)arg4 proposedLabel:(id)arg5 ;
@end

