/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NSQuickActionItemSource;
@interface _NSQuickActionTouchBarClientItemSourceMonitor : NSObject {

	id<_NSQuickActionItemSource> _itemSource;
	void* _observationInfo;
	char _isObserving;

}

@property (__weak,readonly) id<_NSQuickActionItemSource> itemSource; 
+(char)accessInstanceVariablesDirectly;
+(char)automaticallyNotifiesObserversOfItemSource;
-(void)dealloc;
-(void)setObservationInfo:(void*)arg1 ;
-(void)cancel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void*)observationInfo;
-(id<_NSQuickActionItemSource>)itemSource;
@end
