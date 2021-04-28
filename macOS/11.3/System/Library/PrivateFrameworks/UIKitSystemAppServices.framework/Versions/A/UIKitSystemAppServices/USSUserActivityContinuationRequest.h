/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIKitSystemAppServices.framework/Versions/A/UIKitSystemAppServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface USSUserActivityContinuationRequest : NSObject <NSSecureCoding> {

	NSString* _activityUUID;
	NSString* _activityType;
	NSData* _activityData;

}

@property (nonatomic,retain) NSString * activityUUID;              //@synthesize activityUUID=_activityUUID - In the implementation block
@property (nonatomic,retain) NSString * activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,retain) NSData * activityData;                //@synthesize activityData=_activityData - In the implementation block
+(char)supportsSecureCoding;
+(id)requestWithUUID:(id)arg1 activityType:(id)arg2 ;
+(id)requestWithUUID:(id)arg1 activityType:(id)arg2 activityData:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)activityType;
-(void)setActivityType:(NSString *)arg1 ;
-(NSData *)activityData;
-(void)setActivityUUID:(NSString *)arg1 ;
-(NSString *)activityUUID;
-(void)setActivityData:(NSData *)arg1 ;
-(id)initWithUUID:(id)arg1 activityType:(id)arg2 activityData:(id)arg3 ;
@end

