/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/Versions/A/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPMeta;

@interface CLPTraceCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _events;
	CLPMeta* _meta;
	int _type;
	SCD_Struct_CL4 _has;

}

@property (nonatomic,retain) CLPMeta * meta;                       //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;              //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                             //@synthesize type=_type - In the implementation block
+(Class)eventsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)events;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(unsigned long long)eventsCount;
-(void)clearEvents;
-(void)addEvents:(id)arg1 ;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(CLPMeta *)meta;
-(void)setMeta:(CLPMeta *)arg1 ;
@end

