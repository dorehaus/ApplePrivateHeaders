/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSSecureCoding;
@class PDScheduledActivityCriteria;

@interface PDScheduledActivityRegistration : NSObject <NSSecureCoding> {

	PDScheduledActivityCriteria* _activityCriteria;
	id<NSObject><NSSecureCoding> _activityContext;

}

@property (nonatomic,readonly) PDScheduledActivityCriteria * activityCriteria;              //@synthesize activityCriteria=_activityCriteria - In the implementation block
@property (nonatomic,readonly) id<NSObject><NSSecureCoding> activityContext;                //@synthesize activityContext=_activityContext - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isEqualToScheduledActivityRegistration:(id)arg1 ;
-(id)initWithActivityCriteria:(id)arg1 activityContext:(id)arg2 ;
-(PDScheduledActivityCriteria *)activityCriteria;
-(id<NSObject><NSSecureCoding>)activityContext;
@end

