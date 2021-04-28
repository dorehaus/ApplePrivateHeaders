/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPNProtocolPPP.h>

@interface NEVPNProtocolPPTP : NEVPNProtocolPPP {

	long long _encryptionLevel;

}

@property (assign) long long encryptionLevel;              //@synthesize encryptionLevel=_encryptionLevel - In the implementation block
+(char)supportsSecureCoding;
-(SCNetworkInterfaceRef)createInterface;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)encryptionLevel;
-(void)setEncryptionLevel:(long long)arg1 ;
-(id)copyLegacyDictionary;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
@end

