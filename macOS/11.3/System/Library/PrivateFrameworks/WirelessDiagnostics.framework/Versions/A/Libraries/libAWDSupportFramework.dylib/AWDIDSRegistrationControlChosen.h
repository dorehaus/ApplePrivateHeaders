/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIDSRegistrationControlChosen : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _registrationControlStatus;
	int _registrationType;
	char _isInterestingRegion;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasRegistrationType; 
@property (assign,nonatomic) int registrationType;                           //@synthesize registrationType=_registrationType - In the implementation block
@property (assign,nonatomic) char hasRegistrationControlStatus; 
@property (assign,nonatomic) int registrationControlStatus;                  //@synthesize registrationControlStatus=_registrationControlStatus - In the implementation block
@property (assign,nonatomic) char hasIsInterestingRegion; 
@property (assign,nonatomic) char isInterestingRegion;                       //@synthesize isInterestingRegion=_isInterestingRegion - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(int)registrationType;
-(void)setRegistrationType:(int)arg1 ;
-(int)registrationControlStatus;
-(void)setRegistrationControlStatus:(int)arg1 ;
-(char)isInterestingRegion;
-(void)setIsInterestingRegion:(char)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasRegistrationType:(char)arg1 ;
-(char)hasRegistrationType;
-(void)setHasRegistrationControlStatus:(char)arg1 ;
-(char)hasRegistrationControlStatus;
-(void)setHasIsInterestingRegion:(char)arg1 ;
-(char)hasIsInterestingRegion;
@end

