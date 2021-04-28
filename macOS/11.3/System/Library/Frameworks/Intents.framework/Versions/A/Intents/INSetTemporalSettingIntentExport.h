/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSettingMetadata, INDateComponentsRange, INTemporalEventTrigger;


@protocol INSetTemporalSettingIntentExport <NSObject,JSExport>
@property (copy) INSettingMetadata * settingMetadata; 
@property (copy) INDateComponentsRange * timeValue; 
@property (copy) INTemporalEventTrigger * temporalEventTrigger; 
@property (assign) long long action; 
@required
-(id)init;
-(long long)action;
-(void)setAction:(long long)arg1;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(id)arg1;
-(INSettingMetadata *)settingMetadata;
-(void)setSettingMetadata:(id)arg1;
-(INDateComponentsRange *)timeValue;
-(void)setTimeValue:(id)arg1;

@end

