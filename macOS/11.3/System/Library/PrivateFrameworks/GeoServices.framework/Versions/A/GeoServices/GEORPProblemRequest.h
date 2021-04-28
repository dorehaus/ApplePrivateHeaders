/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDAnalyticMetadata, GEORPClientCapabilities, GEOPDClientMetadata, GEORPDebugSettings, NSData, NSString, GEORPProblem, GEORPUserCredentials;

@interface GEORPProblemRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	GEOPDAnalyticMetadata* _analyticMetadata;
	GEORPClientCapabilities* _clientCapabilities;
	GEOPDClientMetadata* _clientMetadata;
	GEORPDebugSettings* _debugSettings;
	NSData* _devicePushToken;
	NSString* _inputLanguage;
	NSString* _problemUuid;
	GEORPProblem* _problem;
	GEORPUserCredentials* _userCredentials;
	NSString* _userEmail;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_analyticMetadata : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_clientMetadata : 1;
		unsigned read_debugSettings : 1;
		unsigned read_devicePushToken : 1;
		unsigned read_inputLanguage : 1;
		unsigned read_problemUuid : 1;
		unsigned read_problem : 1;
		unsigned read_userCredentials : 1;
		unsigned read_userEmail : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasProblem; 
@property (nonatomic,retain) GEORPProblem * problem; 
@property (nonatomic,readonly) char hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials; 
@property (nonatomic,readonly) char hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata; 
@property (nonatomic,readonly) char hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata; 
@property (nonatomic,readonly) char hasDevicePushToken; 
@property (nonatomic,retain) NSData * devicePushToken; 
@property (nonatomic,readonly) char hasUserEmail; 
@property (nonatomic,retain) NSString * userEmail; 
@property (nonatomic,readonly) char hasInputLanguage; 
@property (nonatomic,retain) NSString * inputLanguage; 
@property (nonatomic,readonly) char hasClientCapabilities; 
@property (nonatomic,retain) GEORPClientCapabilities * clientCapabilities; 
@property (nonatomic,readonly) char hasProblemUuid; 
@property (nonatomic,retain) NSString * problemUuid; 
@property (nonatomic,readonly) char hasDebugSettings; 
@property (nonatomic,retain) GEORPDebugSettings * debugSettings; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(GEOPDClientMetadata *)clientMetadata;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(GEORPClientCapabilities *)clientCapabilities;
-(GEORPDebugSettings *)debugSettings;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(void)setClientCapabilities:(GEORPClientCapabilities *)arg1 ;
-(void)setDebugSettings:(GEORPDebugSettings *)arg1 ;
-(char)hasAnalyticMetadata;
-(char)hasClientMetadata;
-(char)hasClientCapabilities;
-(char)hasDebugSettings;
-(GEORPUserCredentials *)userCredentials;
-(NSData *)devicePushToken;
-(NSString *)userEmail;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(void)setDevicePushToken:(NSData *)arg1 ;
-(void)setUserEmail:(NSString *)arg1 ;
-(char)hasUserCredentials;
-(char)hasDevicePushToken;
-(char)hasUserEmail;
-(void)setInputLanguage:(NSString *)arg1 ;
-(NSString *)inputLanguage;
-(char)hasInputLanguage;
-(GEORPProblem *)problem;
-(NSString *)problemUuid;
-(void)setProblem:(GEORPProblem *)arg1 ;
-(void)setProblemUuid:(NSString *)arg1 ;
-(char)hasProblem;
-(char)hasProblemUuid;
@end
