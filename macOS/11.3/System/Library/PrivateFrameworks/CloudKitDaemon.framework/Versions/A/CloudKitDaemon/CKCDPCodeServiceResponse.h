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

@class NSMutableArray, CKCDPError, NSData;

@interface CKCDPCodeServiceResponse : PBCodable <NSCopying> {

	NSMutableArray* _assetAuthorizationResponses;
	CKCDPError* _error;
	NSData* _routingToken;
	NSData* _serializedResult;

}

@property (nonatomic,readonly) char hasSerializedResult; 
@property (nonatomic,retain) NSData * serializedResult;                                 //@synthesize serializedResult=_serializedResult - In the implementation block
@property (nonatomic,readonly) char hasError; 
@property (nonatomic,retain) CKCDPError * error;                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetAuthorizationResponses;              //@synthesize assetAuthorizationResponses=_assetAuthorizationResponses - In the implementation block
@property (nonatomic,readonly) char hasRoutingToken; 
@property (nonatomic,retain) NSData * routingToken;                                     //@synthesize routingToken=_routingToken - In the implementation block
+(Class)assetAuthorizationResponsesType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CKCDPError *)error;
-(void)setError:(CKCDPError *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasError;
-(void)addAssetAuthorizationResponses:(id)arg1 ;
-(unsigned long long)assetAuthorizationResponsesCount;
-(void)clearAssetAuthorizationResponses;
-(id)assetAuthorizationResponsesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)assetAuthorizationResponses;
-(void)setAssetAuthorizationResponses:(NSMutableArray *)arg1 ;
-(NSData *)serializedResult;
-(void)setRoutingToken:(NSData *)arg1 ;
-(char)hasRoutingToken;
-(NSData *)routingToken;
-(void)setSerializedResult:(NSData *)arg1 ;
-(char)hasSerializedResult;
@end

