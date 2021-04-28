/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CWFAWDLPeerContext : NSObject <NSCopying, NSSecureCoding> {

	NSString* _MACAddress;
	NSString* _interfaceName;

}

@property (nonatomic,copy) NSString * MACAddress;                 //@synthesize MACAddress=_MACAddress - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
+(id)AWDLPeerContextWithMACAddress:(id)arg1 interfaceName:(id)arg2 ;
+(char)supportsSecureCoding;
-(char)isEqualToAWDLPeerContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)MACAddress;
-(void)setMACAddress:(NSString *)arg1 ;
@end

