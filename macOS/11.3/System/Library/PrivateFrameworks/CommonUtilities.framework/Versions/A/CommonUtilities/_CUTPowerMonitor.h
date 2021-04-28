/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/Versions/A/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommonUtilities/CommonUtilities-Structs.h>
@class NSHashTable;

@interface _CUTPowerMonitor : NSObject {

	CFRunLoopSourceRef _batteryRunLoopSource;
	IONotificationPortRef _batteryIONotifyPort;
	unsigned _batteryNotificationRef;
	unsigned _pmConnection;
	IONotificationPortRef _pmPort;
	unsigned _pmNotifier;
	unsigned _batteryEntry;
	NSHashTable* _delegates;
	double _currentLevel;
	char _isExternalPowerConnected;

}
@end

