/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPCodeFunctionInvokeResponseAttestationResponse, NSData;

@interface CKDPCodeFunctionInvokeResponse : PBCodable <NSCopying> {

	CKDPCodeFunctionInvokeResponseAttestationResponse* _attestationResponse;
	NSData* _serializedResult;

}

@property (nonatomic,readonly) char hasSerializedResult; 
@property (nonatomic,retain) NSData * serializedResult;                                                            //@synthesize serializedResult=_serializedResult - In the implementation block
@property (nonatomic,readonly) char hasAttestationResponse; 
@property (nonatomic,retain) CKDPCodeFunctionInvokeResponseAttestationResponse * attestationResponse;              //@synthesize attestationResponse=_attestationResponse - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)serializedResult;
-(char)hasAttestationResponse;
-(CKDPCodeFunctionInvokeResponseAttestationResponse *)attestationResponse;
-(void)setSerializedResult:(NSData *)arg1 ;
-(char)hasSerializedResult;
-(void)setAttestationResponse:(CKDPCodeFunctionInvokeResponseAttestationResponse *)arg1 ;
@end

