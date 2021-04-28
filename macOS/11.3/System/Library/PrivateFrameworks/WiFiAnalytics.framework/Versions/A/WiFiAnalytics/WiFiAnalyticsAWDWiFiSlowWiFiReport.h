/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/Versions/A/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, WiFiAnalyticsAWDSlowWiFiNotification;

@interface WiFiAnalyticsAWDWiFiSlowWiFiReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _linkQualSamples;
	WiFiAnalyticsAWDSlowWiFiNotification* _slowNotice;
	SCD_Struct_Wi1 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasSlowNotice; 
@property (nonatomic,retain) WiFiAnalyticsAWDSlowWiFiNotification * slowNotice;              //@synthesize slowNotice=_slowNotice - In the implementation block
@property (nonatomic,retain) NSMutableArray * linkQualSamples;                               //@synthesize linkQualSamples=_linkQualSamples - In the implementation block
+(Class)linkQualSampleType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setSlowNotice:(WiFiAnalyticsAWDSlowWiFiNotification *)arg1 ;
-(void)setLinkQualSamples:(NSMutableArray *)arg1 ;
-(void)addLinkQualSample:(id)arg1 ;
-(unsigned long long)linkQualSamplesCount;
-(void)clearLinkQualSamples;
-(id)linkQualSampleAtIndex:(unsigned long long)arg1 ;
-(char)hasSlowNotice;
-(WiFiAnalyticsAWDSlowWiFiNotification *)slowNotice;
-(NSMutableArray *)linkQualSamples;
@end
