/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/Versions/A/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface FMDBAAAttestation : NSObject <NSSecureCoding> {

	NSData* _attestation;
	NSData* _signature;

}

@property (nonatomic,retain) NSData * attestation;              //@synthesize attestation=_attestation - In the implementation block
@property (nonatomic,retain) NSData * signature;                //@synthesize signature=_signature - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(NSData *)attestation;
-(void)setAttestation:(NSData *)arg1 ;
-(id)initWithAttestation:(id)arg1 signature:(id)arg2 ;
@end
