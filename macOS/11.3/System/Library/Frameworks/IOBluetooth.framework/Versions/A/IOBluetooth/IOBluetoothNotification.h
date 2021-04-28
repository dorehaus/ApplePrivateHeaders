/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IOBluetoothNotification : NSObject {

	/*function pointer*/void* mCallback;
	void* mUserRefCon;
	unsigned mClass;
	unsigned mSubClass;

}
+(id)notificationWithClass:(unsigned)arg1 subClass:(unsigned)arg2 callback:(/*function pointer*/void*)arg3 userRefCon:(void*)arg4 ;
-(void)setClass:(unsigned)arg1 subClass:(unsigned)arg2 callback:(/*function pointer*/void*)arg3 userRefCon:(void*)arg4 ;
-(void)invokeCallbackWithData:(const void*)arg1 dataSize:(unsigned long long)arg2 class:(unsigned)arg3 subClass:(unsigned)arg4 ;
-(void)dealloc;
@end

