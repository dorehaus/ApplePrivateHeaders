/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData;

@interface IDSLocalPairingAddPairedDeviceInfo : NSObject <NSSecureCoding> {

	NSUUID* _cbuuid;
	NSData* _BTOutOfBandKey;
	NSData* _bluetoothMACAddress;
	long long _pairingProtocolVersion;
	long long _pairingType;
	char _supportsIPsecWithSPPLink;
	char _shouldPairDirectlyOverIPsec;

}

@property (nonatomic,readonly) NSUUID * cbuuid;                               //@synthesize cbuuid=_cbuuid - In the implementation block
@property (nonatomic,readonly) long long pairingProtocolVersion;              //@synthesize pairingProtocolVersion=_pairingProtocolVersion - In the implementation block
@property (nonatomic,readonly) NSData * BTOutOfBandKey;                       //@synthesize BTOutOfBandKey=_BTOutOfBandKey - In the implementation block
@property (assign,nonatomic) char supportsIPsecWithSPPLink;                   //@synthesize supportsIPsecWithSPPLink=_supportsIPsecWithSPPLink - In the implementation block
@property (assign,nonatomic) long long pairingType;                           //@synthesize pairingType=_pairingType - In the implementation block
@property (nonatomic,retain) NSData * bluetoothMACAddress;                    //@synthesize bluetoothMACAddress=_bluetoothMACAddress - In the implementation block
@property (assign,nonatomic) char shouldPairDirectlyOverIPsec;                //@synthesize shouldPairDirectlyOverIPsec=_shouldPairDirectlyOverIPsec - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCBUUID:(id)arg1 pairingProtocolVersion:(long long)arg2 BTOutOfBandKey:(id)arg3 ;
-(NSUUID *)cbuuid;
-(long long)pairingProtocolVersion;
-(NSData *)BTOutOfBandKey;
-(char)supportsIPsecWithSPPLink;
-(void)setSupportsIPsecWithSPPLink:(char)arg1 ;
-(NSData *)bluetoothMACAddress;
-(void)setBluetoothMACAddress:(NSData *)arg1 ;
-(char)shouldPairDirectlyOverIPsec;
-(void)setShouldPairDirectlyOverIPsec:(char)arg1 ;
-(long long)pairingType;
-(void)setPairingType:(long long)arg1 ;
@end

