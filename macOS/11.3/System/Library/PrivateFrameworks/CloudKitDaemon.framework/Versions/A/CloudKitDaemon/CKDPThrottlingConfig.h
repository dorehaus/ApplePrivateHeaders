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

@class CKDPThrottlingConfigCriteria, NSString, CKDPThrottlingConfigRateLimit;

@interface CKDPThrottlingConfig : PBCodable <NSCopying> {

	CKDPThrottlingConfigCriteria* _criteria;
	NSString* _label;
	CKDPThrottlingConfigRateLimit* _rateLimit;
	int _ttlSec;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasLabel; 
@property (nonatomic,retain) NSString * label;                                       //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) char hasCriteria; 
@property (nonatomic,retain) CKDPThrottlingConfigCriteria * criteria;                //@synthesize criteria=_criteria - In the implementation block
@property (nonatomic,readonly) char hasRateLimit; 
@property (nonatomic,retain) CKDPThrottlingConfigRateLimit * rateLimit;              //@synthesize rateLimit=_rateLimit - In the implementation block
@property (assign,nonatomic) char hasTtlSec; 
@property (assign,nonatomic) int ttlSec;                                             //@synthesize ttlSec=_ttlSec - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CKDPThrottlingConfigCriteria *)criteria;
-(char)hasLabel;
-(void)setCriteria:(CKDPThrottlingConfigCriteria *)arg1 ;
-(void)setRateLimit:(CKDPThrottlingConfigRateLimit *)arg1 ;
-(char)hasCriteria;
-(char)hasRateLimit;
-(void)setTtlSec:(int)arg1 ;
-(void)setHasTtlSec:(char)arg1 ;
-(char)hasTtlSec;
-(CKDPThrottlingConfigRateLimit *)rateLimit;
-(int)ttlSec;
@end

