/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TUConversationParticipant.h>

@class TUHandle;

@interface TUMutableConversationParticipant : TUConversationParticipant

@property (assign,nonatomic) unsigned long long identifier; 
@property (nonatomic,copy) TUHandle * handle; 
@property (assign,getter=isMuted,nonatomic) char muted; 
@property (assign,getter=isAudioEnabled,nonatomic) char audioEnabled; 
@property (assign,getter=isVideoEnabled,nonatomic) char videoEnabled; 
@property (assign,nonatomic) long long streamToken; 
+(char)supportsSecureCoding;
@end
