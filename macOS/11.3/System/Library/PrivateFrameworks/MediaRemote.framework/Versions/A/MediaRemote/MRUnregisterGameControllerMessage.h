/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@interface MRUnregisterGameControllerMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned long long controllerID; 
-(unsigned long long)type;
-(unsigned long long)controllerID;
-(id)initWithControllerID:(unsigned long long)arg1 ;
@end

