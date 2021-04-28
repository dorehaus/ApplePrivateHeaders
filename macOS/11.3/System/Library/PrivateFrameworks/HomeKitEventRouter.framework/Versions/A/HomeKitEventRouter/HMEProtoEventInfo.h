/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitEventRouter.framework/Versions/A/HomeKitEventRouter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitEventRouter/HomeKitEventRouter-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMEProtoEvent, NSString;

@interface HMEProtoEventInfo : PBCodable <NSCopying> {

	HMEProtoEvent* _event;
	NSString* _topic;

}

@property (nonatomic,readonly) char hasTopic; 
@property (nonatomic,retain) NSString * topic;                   //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) char hasEvent; 
@property (nonatomic,retain) HMEProtoEvent * event;              //@synthesize event=_event - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(HMEProtoEvent *)event;
-(id)dictionaryRepresentation;
-(void)setEvent:(HMEProtoEvent *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)topic;
-(void)setTopic:(NSString *)arg1 ;
-(char)hasEvent;
-(char)hasTopic;
@end

