/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKCDPCodeServiceRequestAccountConfig, CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions, NSMutableArray, NSString, CKCDPCodeServiceRequestProtectedCloudComputeMetadata, CKCDPCodeServiceRequestRequestContext, NSData;

@interface CKCDPCodeServiceRequest : PBRequest <NSCopying> {

	CKCDPCodeServiceRequestAccountConfig* _accountConfig;
	CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions* _assetAuthorizeGetRequestOptions;
	NSMutableArray* _clientConfigs;
	NSString* _functionName;
	CKCDPCodeServiceRequestProtectedCloudComputeMetadata* _protectedCloudComputeMetadata;
	CKCDPCodeServiceRequestRequestContext* _requestContext;
	NSData* _routingToken;
	int _serializationFormat;
	NSData* _serializedParameters;
	NSString* _serviceName;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                                                                                //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) char hasFunctionName; 
@property (nonatomic,retain) NSString * functionName;                                                                               //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,readonly) char hasSerializedParameters; 
@property (nonatomic,retain) NSData * serializedParameters;                                                                         //@synthesize serializedParameters=_serializedParameters - In the implementation block
@property (assign,nonatomic) char hasSerializationFormat; 
@property (assign,nonatomic) int serializationFormat;                                                                               //@synthesize serializationFormat=_serializationFormat - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientConfigs;                                                                        //@synthesize clientConfigs=_clientConfigs - In the implementation block
@property (nonatomic,readonly) char hasAccountConfig; 
@property (nonatomic,retain) CKCDPCodeServiceRequestAccountConfig * accountConfig;                                                  //@synthesize accountConfig=_accountConfig - In the implementation block
@property (nonatomic,readonly) char hasRequestContext; 
@property (nonatomic,retain) CKCDPCodeServiceRequestRequestContext * requestContext;                                                //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,readonly) char hasAssetAuthorizeGetRequestOptions; 
@property (nonatomic,retain) CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions * assetAuthorizeGetRequestOptions;              //@synthesize assetAuthorizeGetRequestOptions=_assetAuthorizeGetRequestOptions - In the implementation block
@property (nonatomic,readonly) char hasProtectedCloudComputeMetadata; 
@property (nonatomic,retain) CKCDPCodeServiceRequestProtectedCloudComputeMetadata * protectedCloudComputeMetadata;                  //@synthesize protectedCloudComputeMetadata=_protectedCloudComputeMetadata - In the implementation block
@property (nonatomic,readonly) char hasRoutingToken; 
@property (nonatomic,retain) NSData * routingToken;                                                                                 //@synthesize routingToken=_routingToken - In the implementation block
+(Class)clientConfigType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)functionName;
-(void)setFunctionName:(NSString *)arg1 ;
-(CKCDPCodeServiceRequestRequestContext *)requestContext;
-(void)setRequestContext:(CKCDPCodeServiceRequestRequestContext *)arg1 ;
-(char)hasRequestContext;
-(void)addClientConfig:(id)arg1 ;
-(unsigned long long)clientConfigsCount;
-(void)clearClientConfigs;
-(id)clientConfigAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)clientConfigs;
-(void)setClientConfigs:(NSMutableArray *)arg1 ;
-(char)hasServiceName;
-(void)setAssetAuthorizeGetRequestOptions:(CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions *)arg1 ;
-(CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions *)assetAuthorizeGetRequestOptions;
-(NSData *)serializedParameters;
-(void)setSerializedParameters:(NSData *)arg1 ;
-(void)setSerializationFormat:(int)arg1 ;
-(void)setProtectedCloudComputeMetadata:(CKCDPCodeServiceRequestProtectedCloudComputeMetadata *)arg1 ;
-(char)hasFunctionName;
-(char)hasSerializedParameters;
-(char)hasProtectedCloudComputeMetadata;
-(CKCDPCodeServiceRequestProtectedCloudComputeMetadata *)protectedCloudComputeMetadata;
-(char)hasAssetAuthorizeGetRequestOptions;
-(void)setRoutingToken:(NSData *)arg1 ;
-(char)hasRoutingToken;
-(NSData *)routingToken;
-(void)setAccountConfig:(CKCDPCodeServiceRequestAccountConfig *)arg1 ;
-(int)serializationFormat;
-(void)setHasSerializationFormat:(char)arg1 ;
-(char)hasSerializationFormat;
-(id)serializationFormatAsString:(int)arg1 ;
-(int)StringAsSerializationFormat:(id)arg1 ;
-(char)hasAccountConfig;
-(CKCDPCodeServiceRequestAccountConfig *)accountConfig;
@end
