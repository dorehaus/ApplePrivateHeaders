/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOWifiAccessPoint : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _macId;
	unsigned long long _scanTimestamp;
	unsigned _age;
	int _channel;
	int _rssi;
	struct {
		unsigned has_scanTimestamp : 1;
		unsigned has_age : 1;
		unsigned has_channel : 1;
		unsigned has_rssi : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasMacId; 
@property (nonatomic,retain) NSString * macId; 
@property (assign,nonatomic) char hasRssi; 
@property (assign,nonatomic) int rssi; 
@property (assign,nonatomic) char hasChannel; 
@property (assign,nonatomic) int channel; 
@property (assign,nonatomic) char hasScanTimestamp; 
@property (assign,nonatomic) unsigned long long scanTimestamp; 
@property (assign,nonatomic) char hasAge; 
@property (assign,nonatomic) unsigned age; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)channel;
-(int)rssi;
-(void)setRssi:(int)arg1 ;
-(void)setChannel:(int)arg1 ;
-(unsigned)age;
-(void)setAge:(unsigned)arg1 ;
-(void)setScanTimestamp:(unsigned long long)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(NSString *)macId;
-(void)setMacId:(NSString *)arg1 ;
-(char)hasMacId;
-(void)setHasRssi:(char)arg1 ;
-(char)hasRssi;
-(void)setHasChannel:(char)arg1 ;
-(char)hasChannel;
-(unsigned long long)scanTimestamp;
-(void)setHasScanTimestamp:(char)arg1 ;
-(char)hasScanTimestamp;
-(void)setHasAge:(char)arg1 ;
-(char)hasAge;
@end

