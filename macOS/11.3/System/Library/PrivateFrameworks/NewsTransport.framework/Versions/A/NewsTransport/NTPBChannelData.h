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

@interface NTPBChannelData : PBCodable <NSCopying> {

	char _isBundleChannel;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) char hasIsBundleChannel; 
@property (assign,nonatomic) char isBundleChannel;                 //@synthesize isBundleChannel=_isBundleChannel - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIsBundleChannel:(char)arg1 ;
-(void)setHasIsBundleChannel:(char)arg1 ;
-(char)hasIsBundleChannel;
-(char)isBundleChannel;
@end
