/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AWDHomeKitValue;

@interface AWDHomeKitWHASetting : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _keyPath;
	AWDHomeKitValue* _value;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasKeyPath; 
@property (nonatomic,retain) NSString * keyPath;                        //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) char hasValue; 
@property (nonatomic,retain) AWDHomeKitValue * value;                   //@synthesize value=_value - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(AWDHomeKitValue *)value;
-(id)dictionaryRepresentation;
-(NSString *)keyPath;
-(void)setValue:(AWDHomeKitValue *)arg1 ;
-(unsigned long long)timestamp;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(char)hasValue;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasKeyPath;
@end

