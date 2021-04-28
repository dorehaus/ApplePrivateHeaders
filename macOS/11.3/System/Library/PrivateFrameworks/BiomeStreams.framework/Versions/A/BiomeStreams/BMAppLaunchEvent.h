/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/Versions/A/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMEventBinaryStepping.h>
#import <libobjc.A.dylib/BMEventTimeElapsing.h>
#import <libobjc.A.dylib/BMEventAppAssociating.h>
#import <libobjc.A.dylib/BMStoreData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BMProtoBufWrapper.h>

@class NSString, NSDateInterval;

@interface BMAppLaunchEvent : BMEventBase <BMEventBinaryStepping, BMEventTimeElapsing, BMEventAppAssociating, BMStoreData, NSSecureCoding, BMProtoBufWrapper> {

	NSString* _launchReason;
	unsigned long long _launchType;

}

@property (nonatomic,copy) NSString * launchReason;                        //@synthesize launchReason=_launchReason - In the implementation block
@property (assign,nonatomic) unsigned long long launchType;                //@synthesize launchType=_launchType - In the implementation block
@property (assign,getter=isStarting,nonatomic) char starting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDateInterval * dateInterval; 
@property (assign,nonatomic) double absoluteTimestamp; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSString * bundleID; 
@property (nonatomic,readonly) unsigned dataVersion; 
+(char)supportsSecureCoding;
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)launchReason;
-(void)setLaunchReason:(NSString *)arg1 ;
-(id)serialize;
-(unsigned)dataVersion;
-(id)json;
-(id)initWithProtoData:(id)arg1 ;
-(id)encodeAsProto;
-(id)proto;
-(id)initWithProto:(id)arg1 ;
-(id)jsonDict;
-(unsigned long long)launchType;
-(void)setLaunchType:(unsigned long long)arg1 ;
-(id)initWithStarting:(char)arg1 bundleId:(id)arg2 absoluteTimeStamp:(double)arg3 duration:(double)arg4 launchReason:(id)arg5 launchType:(unsigned long long)arg6 ;
-(id)initWithStarting:(char)arg1 bundleId:(id)arg2 absoluteTimeStamp:(double)arg3 launchReason:(id)arg4 launchType:(unsigned long long)arg5 ;
@end

