/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface _NSInternalNotificationCenter : NSObject {

	CFXNotificationRegistrarRef _registrar;

}
-(void)dealloc;
-(id)init;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(unsigned long long)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)removeObserver:(id)arg1 ;
-(void)postNotification:(id)arg1 ;
-(unsigned long long)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)removeObserverToken:(unsigned long long)arg1 ;
-(id)NS_objectObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
@end

