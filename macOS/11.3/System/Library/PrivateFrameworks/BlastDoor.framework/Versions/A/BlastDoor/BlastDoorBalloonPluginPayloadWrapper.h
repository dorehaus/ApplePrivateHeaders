/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/Versions/A/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BlastDoorMessagesAppBalloon, NSData, BlastDoorCombinedPluginAttachmentInfo;

@interface BlastDoorBalloonPluginPayloadWrapper : NSObject {

	??? balloonPlugin_Payload;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) unsigned long long type; 
@property (readonly,nonatomic) BlastDoorMessagesAppBalloon * messagesAppBalloon; 
@property (readonly,nonatomic) NSData * linkPresentation; 
@property (readonly,nonatomic) BlastDoorCombinedPluginAttachmentInfo * combinedPluginAttachmentInfo; 
@property (readonly,nonatomic) NSData * unknown_payload; 
-(NSString *)description;
-(id)init;
-(unsigned long long)type;
-(NSData *)linkPresentation;
-(NSData *)unknown_payload;
-(BlastDoorCombinedPluginAttachmentInfo *)combinedPluginAttachmentInfo;
-(BlastDoorMessagesAppBalloon *)messagesAppBalloon;
@end
