/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Versions/A/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CallHistory-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCallHistoryDatabaseSaveError : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _domain;
	unsigned _error;
	NSString* _table;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasDomain; 
@property (assign,nonatomic) unsigned domain;                           //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) char hasError; 
@property (assign,nonatomic) unsigned error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) char hasTable; 
@property (nonatomic,retain) NSString * table;                          //@synthesize table=_table - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)domain;
-(unsigned)error;
-(void)setError:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(NSString *)table;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setDomain:(unsigned)arg1 ;
-(char)hasTimestamp;
-(char)hasDomain;
-(char)hasError;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasError:(char)arg1 ;
-(void)setTable:(NSString *)arg1 ;
-(void)setHasDomain:(char)arg1 ;
-(char)hasTable;
@end

