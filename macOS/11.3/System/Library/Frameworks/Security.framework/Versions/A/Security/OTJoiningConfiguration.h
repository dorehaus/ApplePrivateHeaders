/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Security.framework/Versions/A/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface OTJoiningConfiguration : NSObject <NSSecureCoding> {

	char _isInitiator;
	NSString* _protocolType;
	NSString* _uniqueDeviceID;
	NSString* _uniqueClientID;
	NSString* _containerName;
	NSString* _contextID;
	NSString* _pairingUUID;
	unsigned long long _epoch;
	long long _timeout;

}

@property (nonatomic,retain) NSString * protocolType;                //@synthesize protocolType=_protocolType - In the implementation block
@property (nonatomic,retain) NSString * uniqueDeviceID;              //@synthesize uniqueDeviceID=_uniqueDeviceID - In the implementation block
@property (nonatomic,retain) NSString * uniqueClientID;              //@synthesize uniqueClientID=_uniqueClientID - In the implementation block
@property (nonatomic,retain) NSString * containerName;               //@synthesize containerName=_containerName - In the implementation block
@property (nonatomic,retain) NSString * contextID;                   //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,retain) NSString * pairingUUID;                 //@synthesize pairingUUID=_pairingUUID - In the implementation block
@property (assign,nonatomic) unsigned long long epoch;               //@synthesize epoch=_epoch - In the implementation block
@property (assign,nonatomic) char isInitiator;                       //@synthesize isInitiator=_isInitiator - In the implementation block
@property (assign) long long timeout;                                //@synthesize timeout=_timeout - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)timeout;
-(NSString *)containerName;
-(void)setContainerName:(NSString *)arg1 ;
-(id)initWithProtocolType:(id)arg1 uniqueDeviceID:(id)arg2 uniqueClientID:(id)arg3 pairingUUID:(id)arg4 containerName:(id)arg5 contextID:(id)arg6 epoch:(unsigned long long)arg7 isInitiator:(char)arg8 ;
-(NSString *)protocolType;
-(void)setProtocolType:(NSString *)arg1 ;
-(NSString *)uniqueDeviceID;
-(void)setUniqueDeviceID:(NSString *)arg1 ;
-(NSString *)uniqueClientID;
-(void)setUniqueClientID:(NSString *)arg1 ;
-(NSString *)contextID;
-(void)setContextID:(NSString *)arg1 ;
-(NSString *)pairingUUID;
-(void)setPairingUUID:(NSString *)arg1 ;
-(unsigned long long)epoch;
-(void)setEpoch:(unsigned long long)arg1 ;
-(char)isInitiator;
-(void)setIsInitiator:(char)arg1 ;
-(void)setTimeout:(long long)arg1 ;
@end

