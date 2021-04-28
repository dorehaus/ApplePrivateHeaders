/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSData;

@interface ICDelegationNetServiceTXTRecord : NSObject <NSCopying> {

	NSArray* _delegationAccountUUIDs;
	NSString* _deviceName;
	long long _securityMode;
	long long _serviceVersion;

}

@property (nonatomic,copy) NSArray * delegationAccountUUIDs;              //@synthesize delegationAccountUUIDs=_delegationAccountUUIDs - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                         //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) long long securityMode;                      //@synthesize securityMode=_securityMode - In the implementation block
@property (assign,nonatomic) long long serviceVersion;                    //@synthesize serviceVersion=_serviceVersion - In the implementation block
@property (nonatomic,copy,readonly) NSData * TXTRecordData; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(long long)serviceVersion;
-(void)setServiceVersion:(long long)arg1 ;
-(long long)securityMode;
-(NSData *)TXTRecordData;
-(NSArray *)delegationAccountUUIDs;
-(id)initWithTXTRecordData:(id)arg1 ;
-(void)setDelegationAccountUUIDs:(NSArray *)arg1 ;
-(void)setSecurityMode:(long long)arg1 ;
@end
