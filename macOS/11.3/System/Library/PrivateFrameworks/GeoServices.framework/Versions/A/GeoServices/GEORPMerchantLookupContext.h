/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOPDMapsIdentifier, GEOLocation;

@interface GEORPMerchantLookupContext : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _correlationId;
	NSString* _merchantAdamId;
	NSString* _merchantFormattedAddress;
	GEOPDMapsIdentifier* _merchantId;
	NSString* _merchantIndustryCategory;
	long long _merchantIndustryCode;
	NSString* _merchantName;
	NSString* _merchantRawName;
	NSString* _merchantUrl;
	GEOLocation* _transactionLocation;
	double _transactionTime;
	NSString* _transactionType;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _requestTransactionType;
	char _isAppleCard;
	struct {
		unsigned has_merchantIndustryCode : 1;
		unsigned has_transactionTime : 1;
		unsigned has_requestTransactionType : 1;
		unsigned has_isAppleCard : 1;
		unsigned read_correlationId : 1;
		unsigned read_merchantAdamId : 1;
		unsigned read_merchantFormattedAddress : 1;
		unsigned read_merchantId : 1;
		unsigned read_merchantIndustryCategory : 1;
		unsigned read_merchantName : 1;
		unsigned read_merchantRawName : 1;
		unsigned read_merchantUrl : 1;
		unsigned read_transactionLocation : 1;
		unsigned read_transactionType : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasMerchantIndustryCode; 
@property (assign,nonatomic) long long merchantIndustryCode; 
@property (nonatomic,readonly) char hasMerchantId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * merchantId; 
@property (nonatomic,readonly) char hasMerchantName; 
@property (nonatomic,retain) NSString * merchantName; 
@property (nonatomic,readonly) char hasMerchantRawName; 
@property (nonatomic,retain) NSString * merchantRawName; 
@property (nonatomic,readonly) char hasMerchantIndustryCategory; 
@property (nonatomic,retain) NSString * merchantIndustryCategory; 
@property (nonatomic,readonly) char hasMerchantUrl; 
@property (nonatomic,retain) NSString * merchantUrl; 
@property (nonatomic,readonly) char hasMerchantFormattedAddress; 
@property (nonatomic,retain) NSString * merchantFormattedAddress; 
@property (nonatomic,readonly) char hasMerchantAdamId; 
@property (nonatomic,retain) NSString * merchantAdamId; 
@property (assign,nonatomic) char hasTransactionTime; 
@property (assign,nonatomic) double transactionTime; 
@property (nonatomic,readonly) char hasTransactionType; 
@property (nonatomic,retain) NSString * transactionType; 
@property (nonatomic,readonly) char hasTransactionLocation; 
@property (nonatomic,retain) GEOLocation * transactionLocation; 
@property (nonatomic,readonly) char hasCorrelationId; 
@property (nonatomic,retain) NSString * correlationId; 
@property (assign,nonatomic) char hasIsAppleCard; 
@property (assign,nonatomic) char isAppleCard; 
@property (assign,nonatomic) char hasRequestTransactionType; 
@property (assign,nonatomic) int requestTransactionType; 
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
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(GEOLocation *)transactionLocation;
-(void)setTransactionLocation:(GEOLocation *)arg1 ;
-(char)hasTransactionLocation;
-(GEOPDMapsIdentifier *)merchantId;
-(void)setMerchantId:(GEOPDMapsIdentifier *)arg1 ;
-(char)hasMerchantId;
-(void)setTransactionType:(NSString *)arg1 ;
-(NSString *)transactionType;
-(char)hasTransactionType;
-(NSString *)merchantName;
-(void)setMerchantName:(NSString *)arg1 ;
-(char)hasMerchantName;
-(NSString *)merchantRawName;
-(NSString *)merchantIndustryCategory;
-(NSString *)merchantUrl;
-(NSString *)merchantFormattedAddress;
-(NSString *)merchantAdamId;
-(NSString *)correlationId;
-(void)setMerchantIndustryCode:(long long)arg1 ;
-(void)setMerchantRawName:(NSString *)arg1 ;
-(void)setMerchantIndustryCategory:(NSString *)arg1 ;
-(void)setMerchantUrl:(NSString *)arg1 ;
-(void)setMerchantFormattedAddress:(NSString *)arg1 ;
-(void)setMerchantAdamId:(NSString *)arg1 ;
-(void)setTransactionTime:(double)arg1 ;
-(void)setCorrelationId:(NSString *)arg1 ;
-(void)setIsAppleCard:(char)arg1 ;
-(void)setRequestTransactionType:(int)arg1 ;
-(long long)merchantIndustryCode;
-(void)setHasMerchantIndustryCode:(char)arg1 ;
-(char)hasMerchantIndustryCode;
-(char)hasMerchantRawName;
-(char)hasMerchantIndustryCategory;
-(char)hasMerchantUrl;
-(char)hasMerchantFormattedAddress;
-(char)hasMerchantAdamId;
-(double)transactionTime;
-(void)setHasTransactionTime:(char)arg1 ;
-(char)hasTransactionTime;
-(char)hasCorrelationId;
-(char)isAppleCard;
-(void)setHasIsAppleCard:(char)arg1 ;
-(char)hasIsAppleCard;
-(int)requestTransactionType;
-(void)setHasRequestTransactionType:(char)arg1 ;
-(char)hasRequestTransactionType;
-(id)requestTransactionTypeAsString:(int)arg1 ;
-(int)StringAsRequestTransactionType:(id)arg1 ;
@end

