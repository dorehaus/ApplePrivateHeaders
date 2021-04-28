/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/Versions/A/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDSAgent/PDSAgent-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, PDSProtoUserPushToken;

@interface PDSProtoUserPushTokenRegRequest : PBRequest <NSCopying> {

	long long _ttl;
	NSMutableArray* _deviceInfos;
	NSMutableArray* _topics;
	PDSProtoUserPushToken* _userPushToken;
	SCD_Struct_PD1 _has;

}

@property (nonatomic,retain) PDSProtoUserPushToken * userPushToken;              //@synthesize userPushToken=_userPushToken - In the implementation block
@property (nonatomic,retain) NSMutableArray * deviceInfos;                       //@synthesize deviceInfos=_deviceInfos - In the implementation block
@property (assign,nonatomic) char hasTtl; 
@property (assign,nonatomic) long long ttl;                                      //@synthesize ttl=_ttl - In the implementation block
@property (nonatomic,retain) NSMutableArray * topics;                            //@synthesize topics=_topics - In the implementation block
+(Class)deviceInfoType;
+(Class)topicType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTopics:(NSMutableArray *)arg1 ;
-(NSMutableArray *)topics;
-(long long)ttl;
-(char)hasTtl;
-(void)setTtl:(long long)arg1 ;
-(void)setHasTtl:(char)arg1 ;
-(void)clearTopics;
-(unsigned long long)topicsCount;
-(void)setUserPushToken:(PDSProtoUserPushToken *)arg1 ;
-(void)setDeviceInfos:(NSMutableArray *)arg1 ;
-(void)addTopic:(id)arg1 ;
-(PDSProtoUserPushToken *)userPushToken;
-(void)addDeviceInfo:(id)arg1 ;
-(unsigned long long)deviceInfosCount;
-(void)clearDeviceInfos;
-(id)deviceInfoAtIndex:(unsigned long long)arg1 ;
-(id)topicAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)deviceInfos;
@end

