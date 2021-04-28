/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRNowPlayingControllerDelegate <NSObject>
@optional
-(void)controller:(id)arg1 didLoadResponse:(id)arg2;
-(void)controller:(id)arg1 playbackStateDidChangeFrom:(unsigned)arg2 to:(unsigned)arg3;
-(void)controller:(id)arg1 didUpdateResponse:(id)arg2;
-(void)controller:(id)arg1 playbackQueueDidChangeFrom:(id)arg2 to:(id)arg3;
-(void)controller:(id)arg1 contentItemsDidUpdate:(id)arg2;
-(void)controller:(id)arg1 didLoadArtworkForContentItems:(id)arg2;
-(void)controller:(id)arg1 supportedCommandsDidChangeFrom:(id)arg2 to:(id)arg3;
-(void)controller:(id)arg1 deviceLastPlayingDateDidChange:(id)arg2;
-(void)controller:(id)arg1 playerLastPlayingDateDidChange:(id)arg2;
-(void)controller:(id)arg1 didFailWithError:(id)arg2;
-(void)controllerWillReloadForInvalidation:(id)arg1;

@end

