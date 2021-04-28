/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKProtocolMutableCalendarNotification <EKProtocolCalendarNotification>
@property (assign) char dismissed; 
@property (assign,nonatomic) unsigned long long junkStatus; 
@property (nonatomic,retain) id<EventOccurrenceModelProtocol> occurrence; 
@required
-(id<EventOccurrenceModelProtocol>)occurrence;
-(void)setOccurrence:(id)arg1;
-(unsigned long long)junkStatus;
-(char)dismissed;
-(void)setDismissed:(char)arg1;
-(void)setJunkStatus:(unsigned long long)arg1;

@end

