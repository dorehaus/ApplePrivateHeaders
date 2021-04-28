/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, NSData;

@interface SISchemaVersion : SISchemaInstrumentationMessage {

	unsigned _major;
	unsigned _minor;
	unsigned _patch;
	NSString* _prerelease;
	SCD_Struct_LT1 _has;
	char _hasPrerelease;

}

@property (assign,nonatomic) unsigned major;                   //@synthesize major=_major - In the implementation block
@property (assign,nonatomic) char hasMajor; 
@property (assign,nonatomic) unsigned minor;                   //@synthesize minor=_minor - In the implementation block
@property (assign,nonatomic) char hasMinor; 
@property (assign,nonatomic) unsigned patch;                   //@synthesize patch=_patch - In the implementation block
@property (assign,nonatomic) char hasPatch; 
@property (nonatomic,copy) NSString * prerelease;              //@synthesize prerelease=_prerelease - In the implementation block
@property (assign,nonatomic) char hasPrerelease;               //@synthesize hasPrerelease=_hasPrerelease - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(unsigned)major;
-(unsigned)minor;
-(void)setMajor:(unsigned)arg1 ;
-(void)setMinor:(unsigned)arg1 ;
-(unsigned)patch;
-(void)setPatch:(unsigned)arg1 ;
-(void)setPrerelease:(NSString *)arg1 ;
-(NSString *)prerelease;
-(char)hasMajor;
-(void)setHasMajor:(char)arg1 ;
-(char)hasMinor;
-(void)setHasMinor:(char)arg1 ;
-(char)hasPatch;
-(void)setHasPatch:(char)arg1 ;
-(char)hasPrerelease;
-(void)setHasPrerelease:(char)arg1 ;
@end

