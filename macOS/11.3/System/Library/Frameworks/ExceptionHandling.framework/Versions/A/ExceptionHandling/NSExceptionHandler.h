/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ExceptionHandling.framework/Versions/A/ExceptionHandling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ExceptionHandling/ExceptionHandling-Structs.h>
@class NSString;

@interface NSExceptionHandler : NSObject {

	id _delegate;
	NSString* _exceptionLoggingConnectionName;
	struct {
		unsigned exceptionHandlingMask : 10;
		unsigned reserved : 10;
		unsigned exceptionHangingMask : 5;
		unsigned reserved1 : 5;
		unsigned drwh : 1;
		unsigned drwl : 1;
	}  _ehFlags;
	void* _reserved;

}
+(void)initialize;
+(void)_setLocalVersion:(int)arg1 ;
+(id)defaultExceptionHandler;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)host;
-(int)processIdentifier;
-(id)processInfo;
-(void)setExceptionHandlingMask:(unsigned long long)arg1 ;
-(void)setExceptionHangingMask:(unsigned long long)arg1 ;
-(void)setExceptionLoggingConnectionName:(id)arg1 ;
-(void)_handleException:(id)arg1 mask:(unsigned long long)arg2 ;
-(id)exceptionLoggingConnectionName;
-(unsigned long long)exceptionHandlingMask;
-(unsigned long long)exceptionHangingMask;
-(void)_createAndHandleUncaughtSystemExceptionWithSignal:(int)arg1 pc:(void*)arg2 sp:(void*)arg3 ;
@end
