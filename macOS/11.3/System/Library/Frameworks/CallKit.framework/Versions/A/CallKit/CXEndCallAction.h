/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@class NSDate;

@interface CXEndCallAction : CXCallAction {

	NSDate* _dateEnded;

}

@property (nonatomic,copy) NSDate * dateEnded;              //@synthesize dateEnded=_dateEnded - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)fulfill;
-(id)customDescription;
-(NSDate *)dateEnded;
-(void)setDateEnded:(NSDate *)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)fulfillWithDateEnded:(id)arg1 ;
-(void)updateAsFulfilledWithDateEnded:(id)arg1 ;
@end

