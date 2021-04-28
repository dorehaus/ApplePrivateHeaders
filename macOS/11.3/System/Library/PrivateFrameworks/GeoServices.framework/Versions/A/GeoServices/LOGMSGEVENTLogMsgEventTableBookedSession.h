/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface LOGMSGEVENTLogMsgEventTableBookedSession : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _bookedTableSessionId;
	NSMutableArray* _bookedTables;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) char hasBookedTableSessionId; 
@property (nonatomic,retain) NSString * bookedTableSessionId; 
@property (nonatomic,retain) NSMutableArray * bookedTables; 
+(char)isValid:(id)arg1 ;
+(Class)bookedTableType;
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
-(NSString *)bookedTableSessionId;
-(void)setBookedTableSessionId:(NSString *)arg1 ;
-(void)addBookedTable:(id)arg1 ;
-(unsigned long long)bookedTablesCount;
-(void)clearBookedTables;
-(id)bookedTableAtIndex:(unsigned long long)arg1 ;
-(char)hasBookedTableSessionId;
-(NSMutableArray *)bookedTables;
-(void)setBookedTables:(NSMutableArray *)arg1 ;
@end

