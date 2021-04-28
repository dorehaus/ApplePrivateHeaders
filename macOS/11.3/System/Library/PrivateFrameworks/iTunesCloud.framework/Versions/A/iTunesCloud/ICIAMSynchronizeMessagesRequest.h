/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICIAMSynchronizeMessagesRequest : PBRequest <NSCopying> {

	long long _commandSerialNumber;
	long long _dSID;
	NSString* _deviceID;
	char _activeCommandsOnly;
	SCD_Struct_IC16 _has;

}

@property (assign,nonatomic) char hasCommandSerialNumber; 
@property (assign,nonatomic) long long commandSerialNumber;              //@synthesize commandSerialNumber=_commandSerialNumber - In the implementation block
@property (assign,nonatomic) char hasDSID; 
@property (assign,nonatomic) long long dSID;                             //@synthesize dSID=_dSID - In the implementation block
@property (nonatomic,readonly) char hasDeviceID; 
@property (nonatomic,retain) NSString * deviceID;                        //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) char hasActiveCommandsOnly; 
@property (assign,nonatomic) char activeCommandsOnly;                    //@synthesize activeCommandsOnly=_activeCommandsOnly - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDSID:(long long)arg1 ;
-(void)setHasDSID:(char)arg1 ;
-(char)hasDSID;
-(char)hasDeviceID;
-(long long)dSID;
-(void)setCommandSerialNumber:(long long)arg1 ;
-(void)setHasCommandSerialNumber:(char)arg1 ;
-(char)hasCommandSerialNumber;
-(long long)commandSerialNumber;
-(void)setActiveCommandsOnly:(char)arg1 ;
-(void)setHasActiveCommandsOnly:(char)arg1 ;
-(char)hasActiveCommandsOnly;
-(char)activeCommandsOnly;
@end
