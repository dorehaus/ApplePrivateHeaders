/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SidecarUI.framework/Versions/A/SidecarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SidecarUI/SidecarRunLoopSource.h>

@class NSSet;

@interface SidecarKeyValueObserver : SidecarRunLoopSource {

	id _representedObject;
	NSSet* _keys;
	/*^block*/id _handler;

}

@property (copy) id handler;              //@synthesize handler=_handler - In the implementation block
+(id)observeObject:(id)arg1 forKeys:(id)arg2 ;
-(void)dealloc;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)perform;
@end
