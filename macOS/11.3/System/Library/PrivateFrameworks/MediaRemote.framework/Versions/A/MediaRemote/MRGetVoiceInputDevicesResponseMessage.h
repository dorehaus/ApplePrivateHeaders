/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRGetVoiceInputDevicesResponseMessage : MRProtocolMessage

@property (nonatomic,readonly) NSArray * deviceIDs; 
@property (nonatomic,readonly) long long errorCode; 
-(unsigned long long)type;
-(NSArray *)deviceIDs;
-(long long)errorCode;
-(id)initWithDeviceIDs:(id)arg1 errorCode:(long long)arg2 ;
@end

