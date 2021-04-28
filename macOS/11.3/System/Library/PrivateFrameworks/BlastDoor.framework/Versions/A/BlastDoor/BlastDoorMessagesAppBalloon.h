/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/Versions/A/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BlastDoorImage, NSUUID, NSURL, BlastDoorMessagesAppBalloon_Layout;

@interface BlastDoorMessagesAppBalloon : NSObject {

	??? messagesAppBalloon;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSString * ldtext; 
@property (readonly,nonatomic) NSString * accessibilityLabel; 
@property (readonly,nonatomic) NSString * appName; 
@property (readonly,nonatomic) BlastDoorImage * appIcon; 
@property (readonly,nonatomic) NSUUID * sessionIdentifier; 
@property (readonly,nonatomic) NSString * layoutClass; 
@property (readonly,nonatomic) NSURL * url; 
@property (readonly,nonatomic) long long appId; 
@property (readonly,nonatomic) BlastDoorMessagesAppBalloon_Layout * layout; 
-(NSString *)description;
-(id)init;
-(NSURL *)url;
-(BlastDoorMessagesAppBalloon_Layout *)layout;
-(NSString *)accessibilityLabel;
-(NSString *)appName;
-(NSUUID *)sessionIdentifier;
-(long long)appId;
-(BlastDoorImage *)appIcon;
-(NSString *)layoutClass;
-(NSString *)ldtext;
@end

