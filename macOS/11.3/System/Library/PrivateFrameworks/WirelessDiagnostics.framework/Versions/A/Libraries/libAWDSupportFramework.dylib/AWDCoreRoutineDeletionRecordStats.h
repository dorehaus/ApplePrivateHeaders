/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineDeletionRecordStats : PBCodable <NSCopying> {

	unsigned _ageInDays;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) char hasAgeInDays; 
@property (assign,nonatomic) unsigned ageInDays;              //@synthesize ageInDays=_ageInDays - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAgeInDays:(unsigned)arg1 ;
-(void)setHasAgeInDays:(char)arg1 ;
-(char)hasAgeInDays;
-(unsigned)ageInDays;
@end

