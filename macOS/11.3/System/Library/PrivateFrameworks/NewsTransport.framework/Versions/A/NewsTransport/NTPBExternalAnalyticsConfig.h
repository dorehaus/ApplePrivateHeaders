/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBExternalAnalyticsConfig : PBCodable <NSCopying> {

	NSString* _analyticsBaseUrl;
	NSString* _analyticsId;
	NSString* _eventQueryParameterName;
	NSMutableArray* _proxyHostNames;
	NSMutableArray* _queryParameterConfigs;
	char _usesProxyProfile;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) char hasAnalyticsBaseUrl; 
@property (nonatomic,retain) NSString * analyticsBaseUrl;                         //@synthesize analyticsBaseUrl=_analyticsBaseUrl - In the implementation block
@property (nonatomic,readonly) char hasAnalyticsId; 
@property (nonatomic,retain) NSString * analyticsId;                              //@synthesize analyticsId=_analyticsId - In the implementation block
@property (nonatomic,readonly) char hasEventQueryParameterName; 
@property (nonatomic,retain) NSString * eventQueryParameterName;                  //@synthesize eventQueryParameterName=_eventQueryParameterName - In the implementation block
@property (nonatomic,retain) NSMutableArray * queryParameterConfigs;              //@synthesize queryParameterConfigs=_queryParameterConfigs - In the implementation block
@property (assign,nonatomic) char hasUsesProxyProfile; 
@property (assign,nonatomic) char usesProxyProfile;                               //@synthesize usesProxyProfile=_usesProxyProfile - In the implementation block
@property (nonatomic,retain) NSMutableArray * proxyHostNames;                     //@synthesize proxyHostNames=_proxyHostNames - In the implementation block
+(Class)queryParameterConfigType;
+(Class)proxyHostNamesType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addQueryParameterConfig:(id)arg1 ;
-(void)addProxyHostNames:(id)arg1 ;
-(void)setAnalyticsBaseUrl:(NSString *)arg1 ;
-(void)setAnalyticsId:(NSString *)arg1 ;
-(void)setEventQueryParameterName:(NSString *)arg1 ;
-(char)hasAnalyticsBaseUrl;
-(char)hasAnalyticsId;
-(char)hasEventQueryParameterName;
-(void)clearQueryParameterConfigs;
-(unsigned long long)queryParameterConfigsCount;
-(id)queryParameterConfigAtIndex:(unsigned long long)arg1 ;
-(void)setUsesProxyProfile:(char)arg1 ;
-(void)setHasUsesProxyProfile:(char)arg1 ;
-(char)hasUsesProxyProfile;
-(void)clearProxyHostNames;
-(unsigned long long)proxyHostNamesCount;
-(id)proxyHostNamesAtIndex:(unsigned long long)arg1 ;
-(NSString *)analyticsBaseUrl;
-(NSString *)analyticsId;
-(NSString *)eventQueryParameterName;
-(NSMutableArray *)queryParameterConfigs;
-(void)setQueryParameterConfigs:(NSMutableArray *)arg1 ;
-(char)usesProxyProfile;
-(NSMutableArray *)proxyHostNames;
-(void)setProxyHostNames:(NSMutableArray *)arg1 ;
@end
