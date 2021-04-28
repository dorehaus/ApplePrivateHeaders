/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/Versions/A/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface ADAttributionRequest : PBRequest <NSCopying> {

	double _downloadClickTimestamp;
	double _iAdConversionTimestamp;
	double _iAdImpressionTimestamp;
	double _purchaseTimestamp;
	double _searchAdClickTimestamp;
	NSString* _adMetadata;
	NSData* _anonymousDemandiAdID;
	NSString* _bundleID;
	NSData* _dPID;
	int _downloadType;
	NSData* _iAdID;
	int _runState;
	NSData* _tiltID;
	NSData* _toroID;
	char _attributedByiTunes;
	SCD_Struct_AD1 _has;

}

@property (nonatomic,readonly) char hasIAdID; 
@property (nonatomic,retain) NSData * iAdID;                              //@synthesize iAdID=_iAdID - In the implementation block
@property (nonatomic,readonly) char hasTiltID; 
@property (nonatomic,retain) NSData * tiltID;                             //@synthesize tiltID=_tiltID - In the implementation block
@property (nonatomic,readonly) char hasAnonymousDemandiAdID; 
@property (nonatomic,retain) NSData * anonymousDemandiAdID;               //@synthesize anonymousDemandiAdID=_anonymousDemandiAdID - In the implementation block
@property (nonatomic,readonly) char hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) char hasPurchaseTimestamp; 
@property (assign,nonatomic) double purchaseTimestamp;                    //@synthesize purchaseTimestamp=_purchaseTimestamp - In the implementation block
@property (assign,nonatomic) char hasIAdConversionTimestamp; 
@property (assign,nonatomic) double iAdConversionTimestamp;               //@synthesize iAdConversionTimestamp=_iAdConversionTimestamp - In the implementation block
@property (assign,nonatomic) char hasIAdImpressionTimestamp; 
@property (assign,nonatomic) double iAdImpressionTimestamp;               //@synthesize iAdImpressionTimestamp=_iAdImpressionTimestamp - In the implementation block
@property (assign,nonatomic) char hasAttributedByiTunes; 
@property (assign,nonatomic) char attributedByiTunes;                     //@synthesize attributedByiTunes=_attributedByiTunes - In the implementation block
@property (assign,nonatomic) char hasRunState; 
@property (assign,nonatomic) int runState;                                //@synthesize runState=_runState - In the implementation block
@property (nonatomic,readonly) char hasToroID; 
@property (nonatomic,retain) NSData * toroID;                             //@synthesize toroID=_toroID - In the implementation block
@property (nonatomic,readonly) char hasDPID; 
@property (nonatomic,retain) NSData * dPID;                               //@synthesize dPID=_dPID - In the implementation block
@property (assign,nonatomic) char hasSearchAdClickTimestamp; 
@property (assign,nonatomic) double searchAdClickTimestamp;               //@synthesize searchAdClickTimestamp=_searchAdClickTimestamp - In the implementation block
@property (nonatomic,readonly) char hasAdMetadata; 
@property (nonatomic,retain) NSString * adMetadata;                       //@synthesize adMetadata=_adMetadata - In the implementation block
@property (assign,nonatomic) char hasDownloadClickTimestamp; 
@property (assign,nonatomic) double downloadClickTimestamp;               //@synthesize downloadClickTimestamp=_downloadClickTimestamp - In the implementation block
@property (assign,nonatomic) char hasDownloadType; 
@property (assign,nonatomic) int downloadType;                            //@synthesize downloadType=_downloadType - In the implementation block
+(id)options;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasBundleID;
-(int)downloadType;
-(void)setDownloadType:(int)arg1 ;
-(double)purchaseTimestamp;
-(void)setPurchaseTimestamp:(double)arg1 ;
-(void)setDPID:(NSData *)arg1 ;
-(void)setIAdID:(NSData *)arg1 ;
-(void)setTiltID:(NSData *)arg1 ;
-(void)setAnonymousDemandiAdID:(NSData *)arg1 ;
-(void)setToroID:(NSData *)arg1 ;
-(void)setAdMetadata:(NSString *)arg1 ;
-(char)hasIAdID;
-(char)hasTiltID;
-(char)hasAnonymousDemandiAdID;
-(void)setHasPurchaseTimestamp:(char)arg1 ;
-(char)hasPurchaseTimestamp;
-(void)setIAdConversionTimestamp:(double)arg1 ;
-(void)setHasIAdConversionTimestamp:(char)arg1 ;
-(char)hasIAdConversionTimestamp;
-(void)setIAdImpressionTimestamp:(double)arg1 ;
-(void)setHasIAdImpressionTimestamp:(char)arg1 ;
-(char)hasIAdImpressionTimestamp;
-(void)setAttributedByiTunes:(char)arg1 ;
-(void)setHasAttributedByiTunes:(char)arg1 ;
-(char)hasAttributedByiTunes;
-(int)runState;
-(void)setRunState:(int)arg1 ;
-(void)setHasRunState:(char)arg1 ;
-(char)hasRunState;
-(id)runStateAsString:(int)arg1 ;
-(int)StringAsRunState:(id)arg1 ;
-(char)hasToroID;
-(char)hasDPID;
-(void)setSearchAdClickTimestamp:(double)arg1 ;
-(void)setHasSearchAdClickTimestamp:(char)arg1 ;
-(char)hasSearchAdClickTimestamp;
-(char)hasAdMetadata;
-(void)setDownloadClickTimestamp:(double)arg1 ;
-(void)setHasDownloadClickTimestamp:(char)arg1 ;
-(char)hasDownloadClickTimestamp;
-(void)setHasDownloadType:(char)arg1 ;
-(char)hasDownloadType;
-(id)downloadTypeAsString:(int)arg1 ;
-(int)StringAsDownloadType:(id)arg1 ;
-(NSData *)iAdID;
-(NSData *)tiltID;
-(NSData *)anonymousDemandiAdID;
-(double)iAdConversionTimestamp;
-(double)iAdImpressionTimestamp;
-(char)attributedByiTunes;
-(NSData *)toroID;
-(NSData *)dPID;
-(double)searchAdClickTimestamp;
-(NSString *)adMetadata;
-(double)downloadClickTimestamp;
@end

