/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAReminderTrigger.h>

@class SAReminderDateTimeTrigger, SAReminderLocationTrigger;

@interface SAReminderCompositeTrigger : SAReminderTrigger

@property (nonatomic,retain) SAReminderDateTimeTrigger * dateTimeTrigger; 
@property (nonatomic,retain) SAReminderLocationTrigger * locationTrigger; 
+(id)compositeTrigger;
+(id)compositeTriggerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAReminderDateTimeTrigger *)dateTimeTrigger;
-(SAReminderLocationTrigger *)locationTrigger;
-(void)setDateTimeTrigger:(SAReminderDateTimeTrigger *)arg1 ;
-(void)setLocationTrigger:(SAReminderLocationTrigger *)arg1 ;
@end
