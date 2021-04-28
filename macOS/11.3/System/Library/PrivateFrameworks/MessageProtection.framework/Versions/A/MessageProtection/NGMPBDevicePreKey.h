/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/Versions/A/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NGMPBP256Key, NSData;

@interface NGMPBDevicePreKey : PBCodable <NSCopying> {

	double _timestamp;
	NGMPBP256Key* _dhKey;
	NSData* _prekeySignature;

}

@property (nonatomic,readonly) char hasDhKey; 
@property (nonatomic,retain) NGMPBP256Key * dhKey;                  //@synthesize dhKey=_dhKey - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSData * prekeySignature;              //@synthesize prekeySignature=_prekeySignature - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NGMPBP256Key *)dhKey;
-(NSData *)prekeySignature;
-(void)setDhKey:(NGMPBP256Key *)arg1 ;
-(void)setPrekeySignature:(NSData *)arg1 ;
-(char)hasDhKey;
@end

