/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSettingMetadata, NSString, INTemporalEventTrigger;


@protocol INSetLabeledSettingIntentExport <NSObject,JSExport>
@property (copy) INSettingMetadata * settingMetadata; 
@property (copy) NSString * labeledValue; 
@property (copy) INTemporalEventTrigger * temporalEventTrigger; 
@required
-(id)init;
-(void)setLabeledValue:(id)arg1;
-(NSString *)labeledValue;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(id)arg1;
-(INSettingMetadata *)settingMetadata;
-(void)setSettingMetadata:(id)arg1;

@end
