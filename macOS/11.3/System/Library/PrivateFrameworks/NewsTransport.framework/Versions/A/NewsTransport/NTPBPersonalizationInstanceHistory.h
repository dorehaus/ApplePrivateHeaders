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

@interface NTPBPersonalizationInstanceHistory : PBCodable <NSCopying> {

	unsigned long long _lastChangeNumber;
	NSString* _instanceIdentifier;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) char hasInstanceIdentifier; 
@property (nonatomic,retain) NSString * instanceIdentifier;                    //@synthesize instanceIdentifier=_instanceIdentifier - In the implementation block
@property (assign,nonatomic) char hasLastChangeNumber; 
@property (assign,nonatomic) unsigned long long lastChangeNumber;              //@synthesize lastChangeNumber=_lastChangeNumber - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)instanceIdentifier;
-(void)setInstanceIdentifier:(NSString *)arg1 ;
-(char)hasInstanceIdentifier;
-(void)setLastChangeNumber:(unsigned long long)arg1 ;
-(void)setHasLastChangeNumber:(char)arg1 ;
-(char)hasLastChangeNumber;
-(unsigned long long)lastChangeNumber;
@end

