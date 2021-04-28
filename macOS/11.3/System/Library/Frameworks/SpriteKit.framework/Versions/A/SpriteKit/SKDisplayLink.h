/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/Versions/A/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpriteKit/SpriteKit-Structs.h>
@class NSTimer, NSScreen;

@interface SKDisplayLink : NSObject {

	NSTimer* _timer;
	id _client;
	CVDisplayLinkRef _cvDisplayLink;
	unsigned _activeDisplayCount;
	unsigned _activeDisplayIDs[10];
	SKDisplayLink* _keepAlive;
	NSScreen* _display;
	char _paused;
	BOOL _callbackAlreadyInProgress;
	double _previousFrameTime;
	float _preferredFramesPerSecond;
	/*^block*/id _block;
	float _averageFrameTime;
	long long _frameCount;
	double _frameCountBeginTime;

}

@property (assign,getter=isPaused,nonatomic) char paused; 
@property (assign,nonatomic) long long preferredFramesPerSecond; 
@property (nonatomic,retain) NSScreen * display; 
+(id)displayLinkWithDisplay:(id)arg1 handler:(/*^block*/id)arg2 client:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(char)isPaused;
-(NSScreen *)display;
-(void)_setup;
-(void)_teardown;
-(void)setPaused:(char)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(long long)preferredFramesPerSecond;
-(void)setDisplay:(NSScreen *)arg1 ;
-(id)initWithDisplay:(id)arg1 handler:(/*^block*/id)arg2 client:(id)arg3 ;
-(BOOL)_callbackAlreadyInProgress;
-(void)_setCallbackAlreadyInProgress:(BOOL)arg1 ;
-(void)_callbackForNextFrame:(double)arg1 ;
@end

