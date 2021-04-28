/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/Versions/A/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface RTMapItemExtendedAttributes : NSObject <NSSecureCoding, NSCopying> {

	char _isMe;
	NSString* _addressIdentifier;
	double _wifiConfidence;
	long long _wifiFingerprintLabelType;
	NSUUID* _identifier;

}

@property (nonatomic,retain) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * addressIdentifier;                      //@synthesize addressIdentifier=_addressIdentifier - In the implementation block
@property (assign,nonatomic) char isMe;                                       //@synthesize isMe=_isMe - In the implementation block
@property (assign,nonatomic) double wifiConfidence;                           //@synthesize wifiConfidence=_wifiConfidence - In the implementation block
@property (assign,nonatomic) long long wifiFingerprintLabelType;              //@synthesize wifiFingerprintLabelType=_wifiFingerprintLabelType - In the implementation block
+(char)supportsSecureCoding;
+(id)fingerprintLabelTypeToString:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(long long)wifiFingerprintLabelType;
-(double)wifiConfidence;
-(id)initWithIdentifier:(id)arg1 addressIdentifier:(id)arg2 isMe:(char)arg3 wifiConfidence:(double)arg4 wifiFingerprintLabelType:(long long)arg5 ;
-(id)initWithAddressIdentifier:(id)arg1 isMe:(char)arg2 wifiConfidence:(double)arg3 wifiFingerprintLabelType:(long long)arg4 ;
-(NSString *)addressIdentifier;
-(id)initWithExtendedAttributesMO:(id)arg1 ;
-(void)setAddressIdentifier:(NSString *)arg1 ;
-(char)isMe;
-(void)setIsMe:(char)arg1 ;
-(void)setWifiConfidence:(double)arg1 ;
-(void)setWifiFingerprintLabelType:(long long)arg1 ;
-(char)isEqualToMapItemExtendedAttributes:(id)arg1 ;
@end

