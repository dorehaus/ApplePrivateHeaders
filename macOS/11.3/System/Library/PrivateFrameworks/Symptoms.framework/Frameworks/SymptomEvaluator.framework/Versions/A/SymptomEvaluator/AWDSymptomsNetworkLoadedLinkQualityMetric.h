/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSymptomsNetworkLoadedLinkQualityMetric : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _dataStalls;
	int _lQM;
	int _lastReportedRSSI;
	int _loadedLQM;
	NSString* _networkAttachmentLabel;
	int _networkType;
	NSString* _radioAccessTechnology;
	char _isLowInternetDL;
	char _isLowInternetUL;
	char _isNetworkReliable;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasNetworkType; 
@property (assign,nonatomic) int networkType;                                //@synthesize networkType=_networkType - In the implementation block
@property (nonatomic,readonly) char hasNetworkAttachmentLabel; 
@property (nonatomic,retain) NSString * networkAttachmentLabel;              //@synthesize networkAttachmentLabel=_networkAttachmentLabel - In the implementation block
@property (assign,nonatomic) char hasLoadedLQM; 
@property (assign,nonatomic) int loadedLQM;                                  //@synthesize loadedLQM=_loadedLQM - In the implementation block
@property (assign,nonatomic) char hasLQM; 
@property (assign,nonatomic) int lQM;                                        //@synthesize lQM=_lQM - In the implementation block
@property (nonatomic,readonly) char hasRadioAccessTechnology; 
@property (nonatomic,retain) NSString * radioAccessTechnology;               //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (assign,nonatomic) char hasIsNetworkReliable; 
@property (assign,nonatomic) char isNetworkReliable;                         //@synthesize isNetworkReliable=_isNetworkReliable - In the implementation block
@property (assign,nonatomic) char hasDataStalls; 
@property (assign,nonatomic) unsigned dataStalls;                            //@synthesize dataStalls=_dataStalls - In the implementation block
@property (assign,nonatomic) char hasLastReportedRSSI; 
@property (assign,nonatomic) int lastReportedRSSI;                           //@synthesize lastReportedRSSI=_lastReportedRSSI - In the implementation block
@property (assign,nonatomic) char hasIsLowInternetUL; 
@property (assign,nonatomic) char isLowInternetUL;                           //@synthesize isLowInternetUL=_isLowInternetUL - In the implementation block
@property (assign,nonatomic) char hasIsLowInternetDL; 
@property (assign,nonatomic) char isLowInternetDL;                           //@synthesize isLowInternetDL=_isLowInternetDL - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(NSString *)radioAccessTechnology;
-(void)setRadioAccessTechnology:(NSString *)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasNetworkType:(char)arg1 ;
-(char)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(void)setDataStalls:(unsigned)arg1 ;
-(unsigned)dataStalls;
-(void)setHasDataStalls:(char)arg1 ;
-(char)hasDataStalls;
-(char)isLowInternetDL;
-(char)isLowInternetUL;
-(void)setNetworkAttachmentLabel:(NSString *)arg1 ;
-(char)hasNetworkAttachmentLabel;
-(void)setLoadedLQM:(int)arg1 ;
-(void)setHasLoadedLQM:(char)arg1 ;
-(char)hasLoadedLQM;
-(void)setLQM:(int)arg1 ;
-(void)setHasLQM:(char)arg1 ;
-(char)hasLQM;
-(char)hasRadioAccessTechnology;
-(void)setIsNetworkReliable:(char)arg1 ;
-(void)setHasIsNetworkReliable:(char)arg1 ;
-(char)hasIsNetworkReliable;
-(void)setLastReportedRSSI:(int)arg1 ;
-(void)setHasLastReportedRSSI:(char)arg1 ;
-(char)hasLastReportedRSSI;
-(void)setIsLowInternetUL:(char)arg1 ;
-(void)setHasIsLowInternetUL:(char)arg1 ;
-(char)hasIsLowInternetUL;
-(void)setIsLowInternetDL:(char)arg1 ;
-(void)setHasIsLowInternetDL:(char)arg1 ;
-(char)hasIsLowInternetDL;
-(NSString *)networkAttachmentLabel;
-(int)loadedLQM;
-(int)lQM;
-(char)isNetworkReliable;
-(int)lastReportedRSSI;
@end

