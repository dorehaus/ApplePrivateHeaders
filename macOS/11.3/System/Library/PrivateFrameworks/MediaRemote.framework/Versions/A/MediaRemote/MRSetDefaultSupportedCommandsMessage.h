/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRNowPlayingState, NSArray, NSString;

@interface MRSetDefaultSupportedCommandsMessage : MRProtocolMessage {

	MRNowPlayingState* _state;

}

@property (nonatomic,readonly) NSArray * supportedCommands; 
@property (nonatomic,readonly) NSString * bundleID; 
-(unsigned long long)type;
-(NSString *)bundleID;
-(NSArray *)supportedCommands;
-(id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2 ;
-(id)initWithDefaultSupportedCommands:(id)arg1 forPlayerPath:(id)arg2 ;
@end

