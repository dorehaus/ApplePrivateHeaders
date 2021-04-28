/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineLMPScoreBoardInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	int _corrects;
	int _incorrects;
	int _invalids;
	NSString* _keyword;
	int _unknowns;
	SCD_Struct_AW8 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char hasKeyword; 
@property (nonatomic,retain) NSString * keyword;                    //@synthesize keyword=_keyword - In the implementation block
@property (assign,nonatomic) char hasCorrects; 
@property (assign,nonatomic) int corrects;                          //@synthesize corrects=_corrects - In the implementation block
@property (assign,nonatomic) char hasIncorrects; 
@property (assign,nonatomic) int incorrects;                        //@synthesize incorrects=_incorrects - In the implementation block
@property (assign,nonatomic) char hasUnknowns; 
@property (assign,nonatomic) int unknowns;                          //@synthesize unknowns=_unknowns - In the implementation block
@property (assign,nonatomic) char hasInvalids; 
@property (assign,nonatomic) int invalids;                          //@synthesize invalids=_invalids - In the implementation block
-(NSString *)description;
-(id)_init;
-(long long)metricId;
-(char)valid:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setKeyword:(NSString *)arg1 ;
-(NSString *)keyword;
-(int)corrects;
-(int)incorrects;
-(int)unknowns;
-(void)setCorrects:(int)arg1 ;
-(void)setIncorrects:(int)arg1 ;
-(void)setUnknowns:(int)arg1 ;
-(void)setInvalids:(int)arg1 ;
-(char)hasKeyword;
-(void)setHasCorrects:(char)arg1 ;
-(char)hasCorrects;
-(void)setHasIncorrects:(char)arg1 ;
-(char)hasIncorrects;
-(void)setHasUnknowns:(char)arg1 ;
-(char)hasUnknowns;
-(void)setHasInvalids:(char)arg1 ;
-(char)hasInvalids;
-(int)invalids;
@end
