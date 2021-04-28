/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INAlarmSearch, INAlarm, INDateComponentsRange, INSpeakableString;


@protocol INUpdateAlarmIntentExport <NSObject,JSExport>
@property (copy) INAlarmSearch * alarmSearch; 
@property (copy) INAlarm * alarm; 
@property (assign) long long operation; 
@property (copy) INDateComponentsRange * proposedTime; 
@property (copy) INSpeakableString * proposedLabel; 
@required
-(id)init;
-(long long)operation;
-(void)setOperation:(long long)arg1;
-(INAlarm *)alarm;
-(INAlarmSearch *)alarmSearch;
-(void)setAlarmSearch:(id)arg1;
-(void)setAlarm:(id)arg1;
-(INDateComponentsRange *)proposedTime;
-(void)setProposedTime:(id)arg1;
-(INSpeakableString *)proposedLabel;
-(void)setProposedLabel:(id)arg1;

@end

