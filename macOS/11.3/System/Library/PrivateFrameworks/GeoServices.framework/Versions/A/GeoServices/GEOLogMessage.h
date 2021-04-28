/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMessage : PBCodable <NSCopying> {

	NSMutableArray* _logMsgEvents;
	unsigned _groupRetryCount;
	int _logMessageType;
	struct {
		unsigned has_groupRetryCount : 1;
		unsigned has_logMessageType : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasGroupRetryCount; 
@property (assign,nonatomic) unsigned groupRetryCount; 
@property (nonatomic,retain) NSMutableArray * logMsgEvents; 
@property (assign,nonatomic) char hasLogMessageType; 
@property (assign,nonatomic) int logMessageType; 
+(char)isValid:(id)arg1 ;
+(Class)logMsgEventType;
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
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)addLogMsgEvent:(id)arg1 ;
-(void)setLogMessageType:(int)arg1 ;
-(void)setGroupRetryCount:(unsigned)arg1 ;
-(unsigned long long)logMsgEventsCount;
-(void)clearLogMsgEvents;
-(id)logMsgEventAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)logMsgEvents;
-(void)setLogMsgEvents:(NSMutableArray *)arg1 ;
-(int)logMessageType;
-(void)setHasLogMessageType:(char)arg1 ;
-(char)hasLogMessageType;
-(id)logMessageTypeAsString:(int)arg1 ;
-(int)StringAsLogMessageType:(id)arg1 ;
-(unsigned)groupRetryCount;
-(void)setHasGroupRetryCount:(char)arg1 ;
-(char)hasGroupRetryCount;
@end

