/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKBatchChangeInfo.h>

@class NSDateComponents;

@interface EKRecurrenceChangeInfo : EKBatchChangeInfo {

	long long _changeType;
	NSDateComponents* _offset;

}

@property (assign) long long changeType;                   //@synthesize changeType=_changeType - In the implementation block
@property (retain) NSDateComponents * offset;              //@synthesize offset=_offset - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSDateComponents *)offset;
-(long long)changeType;
-(void)setOffset:(NSDateComponents *)arg1 ;
-(void)setChangeType:(long long)arg1 ;
-(id)updatedIdentifier:(id)arg1 ;
@end

