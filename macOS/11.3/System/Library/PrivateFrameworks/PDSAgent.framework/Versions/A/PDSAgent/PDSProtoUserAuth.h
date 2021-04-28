/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/Versions/A/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDSAgent/PDSAgent-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDSProtoGSTokenAuth;

@interface PDSProtoUserAuth : PBCodable <NSCopying> {

	PDSProtoGSTokenAuth* _gsAuthToken;
	int _userauthOneof;
	SCD_Struct_PD1 _has;

}

@property (nonatomic,readonly) char hasGsAuthToken; 
@property (nonatomic,retain) PDSProtoGSTokenAuth * gsAuthToken;              //@synthesize gsAuthToken=_gsAuthToken - In the implementation block
@property (assign,nonatomic) char hasUserauthOneof; 
@property (assign,nonatomic) int userauthOneof;                              //@synthesize userauthOneof=_userauthOneof - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)clearOneofValuesForUserauthOneof;
-(void)setGsAuthToken:(PDSProtoGSTokenAuth *)arg1 ;
-(char)hasGsAuthToken;
-(int)userauthOneof;
-(void)setUserauthOneof:(int)arg1 ;
-(void)setHasUserauthOneof:(char)arg1 ;
-(char)hasUserauthOneof;
-(id)userauthOneofAsString:(int)arg1 ;
-(int)StringAsUserauthOneof:(id)arg1 ;
-(PDSProtoGSTokenAuth *)gsAuthToken;
@end

