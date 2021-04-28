/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/Versions/A/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDate;

@interface _DKTemporalNumericState : NSObject <NSSecureCoding> {

	NSNumber* _state;
	NSDate* _timestamp;

}

@property (retain) NSNumber * state;                //@synthesize state=_state - In the implementation block
@property (retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)state;
-(void)setState:(NSNumber *)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)initWithState:(id)arg1 timestamp:(id)arg2 ;
@end

