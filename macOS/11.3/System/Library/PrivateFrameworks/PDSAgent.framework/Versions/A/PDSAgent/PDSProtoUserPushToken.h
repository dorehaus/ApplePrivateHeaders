/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/Versions/A/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDSAgent/PDSAgent-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PDSProtoUserAuth;

@interface PDSProtoUserPushToken : PBCodable <NSCopying> {

	NSString* _pushToken;
	PDSProtoUserAuth* _userAuth;
	NSString* _userId;

}

@property (nonatomic,retain) NSString * userId;                        //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) char hasUserAuth; 
@property (nonatomic,retain) PDSProtoUserAuth * userAuth;              //@synthesize userAuth=_userAuth - In the implementation block
@property (nonatomic,retain) NSString * pushToken;                     //@synthesize pushToken=_pushToken - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)pushToken;
-(void)setPushToken:(NSString *)arg1 ;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(void)setUserAuth:(PDSProtoUserAuth *)arg1 ;
-(PDSProtoUserAuth *)userAuth;
-(char)hasUserAuth;
@end
