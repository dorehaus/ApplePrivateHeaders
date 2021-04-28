/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReader.framework/Versions/A/Frameworks/ScreenReaderOutput.framework/Versions/A/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SCROConnection : NSObject <NSSecureCoding> {

	unsigned _pingPort;
	CFRunLoopSourceRef _pingSource;
	CFRunLoopSourceRef _invalidationSource;
	unsigned _identifier;
	int _handlerType;
	id _delegate;
	AB _isConnectionStarted;

}
+(void)initialize;
+(char)supportsSecureCoding;
+(char)inUnitTests;
+(void)_createConnectionRunLoop;
+(void)_configServer;
+(void)_configServerWithMachServiceName:(char*)arg1 ;
+(void)_unconfigServerAndRetry:(char)arg1 ;
+(void)_addConnectionToRunLoop:(id)arg1 ;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)sendEvent:(id)arg1 ;
-(void)_stopConnection;
-(id)handlerValueForKey:(int)arg1 ;
-(id)initWithHandlerType:(int)arg1 delegate:(id)arg2 ;
-(int)registerHandlerCallbackForKey:(int)arg1 ;
-(int)setHandlerValue:(id)arg1 forKey:(int)arg2 ;
-(id)handlerArrayValueForKey:(int)arg1 ;
-(int)performHandlerActionForKey:(int)arg1 ;
-(id)handlerValueForKey:(int)arg1 withObject:(id)arg2 ;
-(void)_ping;
-(void)_startConnection;
@end

