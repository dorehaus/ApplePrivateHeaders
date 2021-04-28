/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Network.framework/Versions/A/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NWPBInterface : PBCodable <NSCopying> {

	unsigned _delegateIndex;
	unsigned _generation;
	unsigned _index;
	unsigned _mtu;
	NSString* _name;
	int _subtype;
	int _type;
	char _expensive;
	SCD_Struct_NW34 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasSubtype; 
@property (assign,nonatomic) int subtype;                         //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) char hasIndex; 
@property (assign,nonatomic) unsigned index;                      //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) char hasGeneration; 
@property (assign,nonatomic) unsigned generation;                 //@synthesize generation=_generation - In the implementation block
@property (assign,nonatomic) char hasDelegateIndex; 
@property (assign,nonatomic) unsigned delegateIndex;              //@synthesize delegateIndex=_delegateIndex - In the implementation block
@property (assign,nonatomic) char hasMtu; 
@property (assign,nonatomic) unsigned mtu;                        //@synthesize mtu=_mtu - In the implementation block
@property (assign,nonatomic) char hasExpensive; 
@property (assign,nonatomic) char expensive;                      //@synthesize expensive=_expensive - In the implementation block
-(id)subtypeAsString:(int)arg1 ;
-(int)StringAsSubtype:(id)arg1 ;
-(void)setHasGeneration:(char)arg1 ;
-(char)hasGeneration;
-(void)setDelegateIndex:(unsigned)arg1 ;
-(void)setHasDelegateIndex:(char)arg1 ;
-(char)hasDelegateIndex;
-(void)setHasMtu:(char)arg1 ;
-(char)hasMtu;
-(void)setExpensive:(char)arg1 ;
-(void)setHasExpensive:(char)arg1 ;
-(char)hasExpensive;
-(unsigned)delegateIndex;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setType:(int)arg1 ;
-(unsigned)generation;
-(int)type;
-(void)setName:(NSString *)arg1 ;
-(int)subtype;
-(unsigned)index;
-(void)setIndex:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasName;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(unsigned)mtu;
-(void)setMtu:(unsigned)arg1 ;
-(char)expensive;
-(void)setHasIndex:(char)arg1 ;
-(char)hasIndex;
-(void)setGeneration:(unsigned)arg1 ;
-(void)setSubtype:(int)arg1 ;
-(char)hasSubtype;
-(void)setHasSubtype:(char)arg1 ;
@end

