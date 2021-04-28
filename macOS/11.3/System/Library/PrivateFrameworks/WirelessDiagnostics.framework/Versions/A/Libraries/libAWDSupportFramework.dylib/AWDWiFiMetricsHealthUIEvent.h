/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWiFiMetricsHealthUIEvent : PBCodable <NSCopying> {

	unsigned long long _healthIssues;
	unsigned long long _timestamp;
	unsigned _eventType;
	NSString* _hashCode;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasEventType; 
@property (assign,nonatomic) unsigned eventType;                           //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) char hasHealthIssues; 
@property (assign,nonatomic) unsigned long long healthIssues;              //@synthesize healthIssues=_healthIssues - In the implementation block
@property (nonatomic,readonly) char hasHashCode; 
@property (nonatomic,retain) NSString * hashCode;                          //@synthesize hashCode=_hashCode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)eventType;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setEventType:(unsigned)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasEventType:(char)arg1 ;
-(char)hasEventType;
-(void)setHashCode:(NSString *)arg1 ;
-(void)setHealthIssues:(unsigned long long)arg1 ;
-(void)setHasHealthIssues:(char)arg1 ;
-(char)hasHealthIssues;
-(char)hasHashCode;
-(unsigned long long)healthIssues;
-(NSString *)hashCode;
@end
