/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlaybackSessionMigrateRequest;

@interface MRPlaybackSessionMigrateResponseMessage : MRProtocolMessage

@property (nonatomic,readonly) MRPlaybackSessionMigrateRequest * request; 
-(unsigned long long)type;
-(MRPlaybackSessionMigrateRequest *)request;
-(id)initWithRequest:(id)arg1 ;
@end

