/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, INWatchdogTimer, NSObject, NSSet;

@interface INWidgetDescriptorManager : NSObject {

	char _observing;
	NSMutableArray* _completionHandlers;
	INWatchdogTimer* _watchdogTimer;
	NSObject*<OS_dispatch_queue> _queue;
	NSSet* _widgetDescriptors;

}

@property (nonatomic,copy) NSSet * widgetDescriptors;              //@synthesize widgetDescriptors=_widgetDescriptors - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)getDescriptorsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getDescriptorForIntent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_startObservingDescriptors;
-(void)_notifyCompletionHandlersWithWidgetDescriptors:(id)arg1 ;
-(NSSet *)widgetDescriptors;
-(void)setWidgetDescriptors:(NSSet *)arg1 ;
@end
