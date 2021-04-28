/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MRPlayerPath;

@interface MRNowPlayingRequest : NSObject {

	MRPlayerPath* _playerPath;

}

@property (nonatomic,copy,readonly) MRPlayerPath * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(id)initWithOrigin:(id)arg1 ;
-(MRPlayerPath *)playerPath;
-(id)initWithPlayerPath:(id)arg1 ;
-(void)triggerAudioFadeOutForNowPlayingApplicationWithReplyQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)triggerAudioFadeInWithReplyQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestLastPlayingDateOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)lastPlayingDateWithError:(id*)arg1 ;
@end

