/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDateComponents, INRecurrenceRule;


@protocol INDateComponentsRangeExport <NSObject,JSExport>
@property (copy) NSDateComponents * startDateComponents; 
@property (copy) NSDateComponents * endDateComponents; 
@property (copy) INRecurrenceRule * recurrenceRule; 
@required
-(id)init;
-(INRecurrenceRule *)recurrenceRule;
-(void)setRecurrenceRule:(id)arg1;
-(NSDateComponents *)startDateComponents;
-(void)setStartDateComponents:(id)arg1;
-(NSDateComponents *)endDateComponents;
-(void)setEndDateComponents:(id)arg1;

@end
