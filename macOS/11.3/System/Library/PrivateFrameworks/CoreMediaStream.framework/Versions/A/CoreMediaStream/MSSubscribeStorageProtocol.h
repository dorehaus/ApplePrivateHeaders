/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/Versions/A/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSSubscribeStorageProtocol <MSStorageProtocol>
@property (assign,nonatomic) id<MSSubscribeStorageProtocolDelegate> delegate; 
@required
-(id<MSSubscribeStorageProtocolDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)abort;
-(void)retrieveAssets:(id)arg1;

@end

