/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppleScriptKit.framework/Versions/A/AppleScriptKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSObject, ASKEventHandlerDescription, ASKEventHandlerImplementor;

@interface ASKEventHandler : NSObject <NSCoding> {

	NSObject* _object;
	ASKEventHandlerDescription* _eventHandlerDescription;
	ASKEventHandlerImplementor* _eventHandlerImplementor;
	char _enabled;
	char _processed;

}
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)name;
-(void)setObject:(id)arg1 ;
-(id)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(unsigned)eventClass;
-(unsigned)eventID;
-(void)disable;
-(void)enable;
-(id)notificationName;
-(void)eventNotification:(id)arg1 ;
-(char)processed;
-(void)setProcessed:(char)arg1 ;
-(id)processEventNotification:(id)arg1 ;
-(char)processOnLoad;
-(id)eventHandlerDescription;
-(id)initWithObject:(id)arg1 eventHandlerDescription:(id)arg2 enable:(char)arg3 ;
-(char)isKindOfEventHandler:(id)arg1 ;
-(Class)eventHandlerImplementorClass;
-(Class)eventHandlerDelegateClass;
-(Class)eventHandlerDataSourceClass;
-(id)eventHandlerImplementor;
-(id)getAppleEventForObject:(id)arg1 ;
-(id)processEventForObject:(id)arg1 ;
-(id)getAppleEventFromNotification:(id)arg1 ;
-(id)getAppleEventForObject:(id)arg1 withParameters:(id)arg2 ;
-(id)processEventForObject:(id)arg1 withParameters:(id)arg2 ;
-(id)processEvent;
-(void)setEventHandlerImplementor:(id)arg1 ;
-(void)setEventHandlerDescription:(id)arg1 ;
-(id)processEventWithEvent:(id)arg1 ;
-(id)processEventWithParameters:(id)arg1 ;
-(id)getAppleEvent;
-(void)eventAction:(id)arg1 ;
-(void)eventDoubleAction:(id)arg1 ;
@end

