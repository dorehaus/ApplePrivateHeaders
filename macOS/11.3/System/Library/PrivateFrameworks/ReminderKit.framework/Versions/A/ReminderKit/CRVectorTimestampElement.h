/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CRVectorTimestampElement : NSObject <NSSecureCoding> {

	unsigned long long _clock;
	unsigned long long _subclock;

}

@property (assign,nonatomic) unsigned long long clock;                 //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic) unsigned long long subclock;              //@synthesize subclock=_subclock - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)clock;
-(void)setClock:(unsigned long long)arg1 ;
-(unsigned long long)subclock;
-(void)setSubclock:(unsigned long long)arg1 ;
-(long long)rem_compareToVectorTimestampElement:(id)arg1 ;
@end

