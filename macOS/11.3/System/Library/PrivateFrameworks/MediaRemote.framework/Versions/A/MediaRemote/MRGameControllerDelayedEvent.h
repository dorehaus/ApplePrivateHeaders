/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MRGameControllerDelayedEvent : NSObject {

	unsigned long long _lastDownEvent;
	/*^block*/id _sendEventBlock;

}

@property (assign,nonatomic) unsigned long long lastDownEvent;              //@synthesize lastDownEvent=_lastDownEvent - In the implementation block
@property (nonatomic,copy) id sendEventBlock;                               //@synthesize sendEventBlock=_sendEventBlock - In the implementation block
-(void)send;
-(id)sendEventBlock;
-(void)setLastDownEvent:(unsigned long long)arg1 ;
-(unsigned long long)lastDownEvent;
-(void)setSendEventBlock:(id)arg1 ;
@end

