/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSMutableArray, NSArray, MRPlayerPath;

@interface MRTransactionMessage : MRProtocolMessage {

	NSMutableArray* _packets;

}

@property (nonatomic,readonly) unsigned long long name; 
@property (nonatomic,readonly) NSArray * packets; 
@property (nonatomic,readonly) MRPlayerPath * playerPath; 
-(unsigned long long)name;
-(unsigned long long)type;
-(NSArray *)packets;
-(MRPlayerPath *)playerPath;
-(id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2 ;
-(id)initWithName:(unsigned long long)arg1 packets:(id)arg2 playerPath:(id)arg3 ;
-(id)initWithPlaybackQueue:(id)arg1 forPlayerPath:(id)arg2 ;
@end

