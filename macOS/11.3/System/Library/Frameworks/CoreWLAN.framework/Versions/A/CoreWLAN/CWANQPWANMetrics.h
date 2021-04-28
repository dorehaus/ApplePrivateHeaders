/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWLAN/CoreWLAN-Structs.h>
#import <CoreWLAN/CWANQPElement.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CWANQPWANMetrics : CWANQPElement <NSSecureCoding, NSCopying> {

	long long _linkStatus;
	char _hasSymmetricLink;
	char _isAtCapacity;
	long long _downlinkSpeed;
	long long _uplinkSpeed;
	long long _downlinkLoad;
	long long _uplinkLoad;
	long long _loadMeasurementDuration;

}

@property (assign,nonatomic) long long linkStatus;                           //@synthesize linkStatus=_linkStatus - In the implementation block
@property (assign,nonatomic) char hasSymmetricLink;                          //@synthesize hasSymmetricLink=_hasSymmetricLink - In the implementation block
@property (assign,nonatomic) char isAtCapacity;                              //@synthesize isAtCapacity=_isAtCapacity - In the implementation block
@property (assign,nonatomic) long long downlinkSpeed;                        //@synthesize downlinkSpeed=_downlinkSpeed - In the implementation block
@property (assign,nonatomic) long long uplinkSpeed;                          //@synthesize uplinkSpeed=_uplinkSpeed - In the implementation block
@property (assign,nonatomic) long long downlinkLoad;                         //@synthesize downlinkLoad=_downlinkLoad - In the implementation block
@property (assign,nonatomic) long long uplinkLoad;                           //@synthesize uplinkLoad=_uplinkLoad - In the implementation block
@property (assign,nonatomic) long long loadMeasurementDuration;              //@synthesize loadMeasurementDuration=_loadMeasurementDuration - In the implementation block
+(id)stringForWANMetricsLinkStatus:(long long)arg1 ;
+(char)supportsSecureCoding;
-(void)setLinkStatus:(long long)arg1 ;
-(char)hasSymmetricLink;
-(void)setHasSymmetricLink:(char)arg1 ;
-(char)isAtCapacity;
-(void)setIsAtCapacity:(char)arg1 ;
-(long long)downlinkSpeed;
-(void)setDownlinkSpeed:(long long)arg1 ;
-(long long)uplinkSpeed;
-(void)setUplinkSpeed:(long long)arg1 ;
-(long long)downlinkLoad;
-(void)setDownlinkLoad:(long long)arg1 ;
-(long long)uplinkLoad;
-(void)setUplinkLoad:(long long)arg1 ;
-(long long)loadMeasurementDuration;
-(void)setLoadMeasurementDuration:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)linkStatus;
-(id)initWithNetwork:(id)arg1 timestamp:(id)arg2 anqpResult:(id)arg3 ;
@end

