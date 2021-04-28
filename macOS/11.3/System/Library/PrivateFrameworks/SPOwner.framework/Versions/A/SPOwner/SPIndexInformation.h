/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/Versions/A/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDateInterval;

@interface SPIndexInformation : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _sequence;
	NSUUID* _beaconIdentifier;
	unsigned long long _index;
	NSDateInterval* _dateInterval;

}

@property (nonatomic,copy) NSUUID * beaconIdentifier;                  //@synthesize beaconIdentifier=_beaconIdentifier - In the implementation block
@property (assign,nonatomic) unsigned char sequence;                   //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) unsigned long long index;                 //@synthesize index=_index - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(unsigned char)sequence;
-(void)setSequence:(unsigned char)arg1 ;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(void)setBeaconIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)beaconIdentifier;
-(id)initWithBeaconIdentifier:(id)arg1 sequence:(unsigned char)arg2 index:(unsigned long long)arg3 dateInterval:(id)arg4 ;
@end

