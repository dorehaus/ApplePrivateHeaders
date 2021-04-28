/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBCacheHint : PBCodable <NSCopying> {

	unsigned long long _accessTime;
	NSString* _key;
	int _lifetime;
	SCD_Struct_CO1 _has;

}

@property (nonatomic,readonly) char hasKey; 
@property (nonatomic,retain) NSString * key;                             //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) char hasLifetime; 
@property (assign,nonatomic) int lifetime;                               //@synthesize lifetime=_lifetime - In the implementation block
@property (assign,nonatomic) char hasAccessTime; 
@property (assign,nonatomic) unsigned long long accessTime;              //@synthesize accessTime=_accessTime - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasKey;
-(int)lifetime;
-(void)setLifetime:(int)arg1 ;
-(unsigned long long)accessTime;
-(void)setHasLifetime:(char)arg1 ;
-(char)hasLifetime;
-(void)setAccessTime:(unsigned long long)arg1 ;
-(void)setHasAccessTime:(char)arg1 ;
-(char)hasAccessTime;
@end

