/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBEndpointConfig : PBCodable <NSCopying> {

	NSString* _analyticsEndpointUrlsJson;
	NSString* _analyticsEnvelopeContentTypePropJson;
	NSString* _clientApiBaseUrl;
	int _environment;
	NSString* _eventRelayBaseUrl;
	NSString* _eventRelayBatchBaseUrl;
	NSString* _newsNotificationsBaseUrl;
	NSString* _remoteDataSourceBaseUrl;
	NSString* _staticAssetBaseUrl;

}

@property (assign,nonatomic) int environment;                                              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) char hasClientApiBaseUrl; 
@property (nonatomic,retain) NSString * clientApiBaseUrl;                                  //@synthesize clientApiBaseUrl=_clientApiBaseUrl - In the implementation block
@property (nonatomic,readonly) char hasEventRelayBaseUrl; 
@property (nonatomic,retain) NSString * eventRelayBaseUrl;                                 //@synthesize eventRelayBaseUrl=_eventRelayBaseUrl - In the implementation block
@property (nonatomic,readonly) char hasEventRelayBatchBaseUrl; 
@property (nonatomic,retain) NSString * eventRelayBatchBaseUrl;                            //@synthesize eventRelayBatchBaseUrl=_eventRelayBatchBaseUrl - In the implementation block
@property (nonatomic,readonly) char hasNewsNotificationsBaseUrl; 
@property (nonatomic,retain) NSString * newsNotificationsBaseUrl;                          //@synthesize newsNotificationsBaseUrl=_newsNotificationsBaseUrl - In the implementation block
@property (nonatomic,readonly) char hasAnalyticsEndpointUrlsJson; 
@property (nonatomic,retain) NSString * analyticsEndpointUrlsJson;                         //@synthesize analyticsEndpointUrlsJson=_analyticsEndpointUrlsJson - In the implementation block
@property (nonatomic,readonly) char hasAnalyticsEnvelopeContentTypePropJson; 
@property (nonatomic,retain) NSString * analyticsEnvelopeContentTypePropJson;              //@synthesize analyticsEnvelopeContentTypePropJson=_analyticsEnvelopeContentTypePropJson - In the implementation block
@property (nonatomic,readonly) char hasStaticAssetBaseUrl; 
@property (nonatomic,retain) NSString * staticAssetBaseUrl;                                //@synthesize staticAssetBaseUrl=_staticAssetBaseUrl - In the implementation block
@property (nonatomic,readonly) char hasRemoteDataSourceBaseUrl; 
@property (nonatomic,retain) NSString * remoteDataSourceBaseUrl;                           //@synthesize remoteDataSourceBaseUrl=_remoteDataSourceBaseUrl - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setEnvironment:(int)arg1 ;
-(id)dictionaryRepresentation;
-(int)environment;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setClientApiBaseUrl:(NSString *)arg1 ;
-(void)setEventRelayBaseUrl:(NSString *)arg1 ;
-(void)setEventRelayBatchBaseUrl:(NSString *)arg1 ;
-(void)setNewsNotificationsBaseUrl:(NSString *)arg1 ;
-(void)setAnalyticsEndpointUrlsJson:(NSString *)arg1 ;
-(void)setAnalyticsEnvelopeContentTypePropJson:(NSString *)arg1 ;
-(void)setStaticAssetBaseUrl:(NSString *)arg1 ;
-(void)setRemoteDataSourceBaseUrl:(NSString *)arg1 ;
-(char)hasClientApiBaseUrl;
-(char)hasEventRelayBaseUrl;
-(char)hasEventRelayBatchBaseUrl;
-(char)hasNewsNotificationsBaseUrl;
-(char)hasAnalyticsEndpointUrlsJson;
-(char)hasAnalyticsEnvelopeContentTypePropJson;
-(char)hasStaticAssetBaseUrl;
-(char)hasRemoteDataSourceBaseUrl;
-(NSString *)clientApiBaseUrl;
-(NSString *)eventRelayBaseUrl;
-(NSString *)eventRelayBatchBaseUrl;
-(NSString *)newsNotificationsBaseUrl;
-(NSString *)analyticsEndpointUrlsJson;
-(NSString *)analyticsEnvelopeContentTypePropJson;
-(NSString *)staticAssetBaseUrl;
-(NSString *)remoteDataSourceBaseUrl;
@end

