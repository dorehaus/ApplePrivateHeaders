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

@interface AWDSymptomsAdvisoryAppCanUseAlternateNetwork : PBCodable <NSCopying> {

	unsigned long long _allFlows;
	unsigned long long _altUsage;
	unsigned long long _jumboFlows;
	unsigned long long _timestamp;
	unsigned long long _wifiUsage;
	unsigned long long _wwanUsage;
	int _bailOutOf;
	NSString* _bundleName;
	int _deliberation;
	int _rationale;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasBundleName; 
@property (nonatomic,retain) NSString * bundleName;                      //@synthesize bundleName=_bundleName - In the implementation block
@property (assign,nonatomic) char hasBailOutOf; 
@property (assign,nonatomic) int bailOutOf;                              //@synthesize bailOutOf=_bailOutOf - In the implementation block
@property (assign,nonatomic) char hasDeliberation; 
@property (assign,nonatomic) int deliberation;                           //@synthesize deliberation=_deliberation - In the implementation block
@property (assign,nonatomic) char hasRationale; 
@property (assign,nonatomic) int rationale;                              //@synthesize rationale=_rationale - In the implementation block
@property (assign,nonatomic) char hasWwanUsage; 
@property (assign,nonatomic) unsigned long long wwanUsage;               //@synthesize wwanUsage=_wwanUsage - In the implementation block
@property (assign,nonatomic) char hasWifiUsage; 
@property (assign,nonatomic) unsigned long long wifiUsage;               //@synthesize wifiUsage=_wifiUsage - In the implementation block
@property (assign,nonatomic) char hasAltUsage; 
@property (assign,nonatomic) unsigned long long altUsage;                //@synthesize altUsage=_altUsage - In the implementation block
@property (assign,nonatomic) char hasAllFlows; 
@property (assign,nonatomic) unsigned long long allFlows;                //@synthesize allFlows=_allFlows - In the implementation block
@property (assign,nonatomic) char hasJumboFlows; 
@property (assign,nonatomic) unsigned long long jumboFlows;              //@synthesize jumboFlows=_jumboFlows - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)bundleName;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
-(unsigned long long)allFlows;
-(unsigned long long)jumboFlows;
-(int)bailOutOf;
-(void)setBailOutOf:(int)arg1 ;
-(void)setHasBailOutOf:(char)arg1 ;
-(char)hasBailOutOf;
-(id)bailOutOfAsString:(int)arg1 ;
-(int)StringAsBailOutOf:(id)arg1 ;
-(void)setAllFlows:(unsigned long long)arg1 ;
-(void)setJumboFlows:(unsigned long long)arg1 ;
-(char)hasBundleName;
-(int)deliberation;
-(void)setDeliberation:(int)arg1 ;
-(void)setHasDeliberation:(char)arg1 ;
-(char)hasDeliberation;
-(id)deliberationAsString:(int)arg1 ;
-(int)StringAsDeliberation:(id)arg1 ;
-(int)rationale;
-(void)setRationale:(int)arg1 ;
-(void)setHasRationale:(char)arg1 ;
-(char)hasRationale;
-(id)rationaleAsString:(int)arg1 ;
-(int)StringAsRationale:(id)arg1 ;
-(void)setWwanUsage:(unsigned long long)arg1 ;
-(void)setHasWwanUsage:(char)arg1 ;
-(char)hasWwanUsage;
-(void)setWifiUsage:(unsigned long long)arg1 ;
-(void)setHasWifiUsage:(char)arg1 ;
-(char)hasWifiUsage;
-(void)setAltUsage:(unsigned long long)arg1 ;
-(void)setHasAltUsage:(char)arg1 ;
-(char)hasAltUsage;
-(void)setHasAllFlows:(char)arg1 ;
-(char)hasAllFlows;
-(void)setHasJumboFlows:(char)arg1 ;
-(char)hasJumboFlows;
-(unsigned long long)wwanUsage;
-(unsigned long long)wifiUsage;
-(unsigned long long)altUsage;
@end

