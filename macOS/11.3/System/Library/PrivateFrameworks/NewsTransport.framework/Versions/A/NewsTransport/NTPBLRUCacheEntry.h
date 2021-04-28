/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBLRUCacheEntry : PBCodable <NSCopying> {

	unsigned long long _lastAccessed;
	NSData* _key;
	NSData* _value;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) char hasKey; 
@property (nonatomic,retain) NSData * key;                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) char hasValue; 
@property (nonatomic,retain) NSData * value;                               //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) char hasLastAccessed; 
@property (assign,nonatomic) unsigned long long lastAccessed;              //@synthesize lastAccessed=_lastAccessed - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)value;
-(NSData *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSData *)arg1 ;
-(void)setValue:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasValue;
-(char)hasKey;
-(void)setLastAccessed:(unsigned long long)arg1 ;
-(void)setHasLastAccessed:(char)arg1 ;
-(char)hasLastAccessed;
-(unsigned long long)lastAccessed;
@end

