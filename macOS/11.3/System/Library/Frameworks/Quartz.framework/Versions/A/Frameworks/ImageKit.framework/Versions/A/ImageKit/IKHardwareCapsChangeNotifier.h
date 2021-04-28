/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface IKHardwareCapsChangeNotifier : NSObject {

	IONotificationPortRef _notificationPort;
	NSMutableDictionary* _notifierMap;
	NSMutableArray* _cameraCallbackObjs;
	char _hasQ8;
	char _hasDV;
	id _delegate;

}
+(id)hardwareCapsChangeNotifier;
-(void)registerForHardwareNotification;
-(void)unregisterForHardwareNotification;
-(void)initIOKitNotifications;
-(void)_broadcastHardwareCaps;
-(void)createNotification:(CFDictionaryRef)arg1 callback:(/*function pointer*/void*)arg2 ;
-(id)notifierMap;
-(void)audioHardwareChanged:(id)arg1 ;
-(unsigned)cameraCallbackFindParent:(unsigned)arg1 parentClass:(const char*)arg2 ;
-(unsigned)cameraCallbackCreateNotifier:(unsigned)arg1 ;
-(char)_isGUIDUnique:(id)arg1 ;
-(id)vcHardwareCaps;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(void)initialize;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(IONotificationPortRef)notificationPort;
@end
