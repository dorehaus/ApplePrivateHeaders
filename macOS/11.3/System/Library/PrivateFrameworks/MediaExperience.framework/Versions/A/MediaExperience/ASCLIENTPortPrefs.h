/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/Versions/A/MediaExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaExperience/MediaExperience-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ASCLIENTPortPrefs : PBCodable <NSCopying> {

	unsigned _dataSourceID;
	NSMutableArray* _polarPatterns;
	NSString* _portUID;
	SCD_Struct_AS26 _has;

}

@property (nonatomic,retain) NSString * portUID;                          //@synthesize portUID=_portUID - In the implementation block
@property (assign,nonatomic) char hasDataSourceID; 
@property (assign,nonatomic) unsigned dataSourceID;                       //@synthesize dataSourceID=_dataSourceID - In the implementation block
@property (nonatomic,retain) NSMutableArray * polarPatterns;              //@synthesize polarPatterns=_polarPatterns - In the implementation block
+(Class)polarPatternsType;
-(void)setDataSourceID:(unsigned)arg1 ;
-(void)addPolarPatterns:(id)arg1 ;
-(void)setPortUID:(NSString *)arg1 ;
-(unsigned long long)polarPatternsCount;
-(void)clearPolarPatterns;
-(id)polarPatternsAtIndex:(unsigned long long)arg1 ;
-(void)setHasDataSourceID:(char)arg1 ;
-(char)hasDataSourceID;
-(NSMutableArray *)polarPatterns;
-(void)setPolarPatterns:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)dataSourceID;
-(NSString *)portUID;
@end

