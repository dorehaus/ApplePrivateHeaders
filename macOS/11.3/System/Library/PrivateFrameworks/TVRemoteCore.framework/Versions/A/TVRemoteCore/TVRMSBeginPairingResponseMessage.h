/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/Versions/A/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TVRMSBeginPairingResponseMessage : PBCodable <NSCopying> {

	int _responseCode;
	int _sessionIdentifier;
	SCD_Struct_TV2 _has;

}

@property (assign,nonatomic) char hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) char hasResponseCode; 
@property (assign,nonatomic) int responseCode;                       //@synthesize responseCode=_responseCode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)responseCode;
-(void)setResponseCode:(int)arg1 ;
-(int)sessionIdentifier;
-(void)setSessionIdentifier:(int)arg1 ;
-(char)hasSessionIdentifier;
-(void)setHasSessionIdentifier:(char)arg1 ;
-(void)setHasResponseCode:(char)arg1 ;
-(char)hasResponseCode;
@end

